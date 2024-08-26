

#include "ShooterController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ShooterPawn.h"
#include "Blueprint/UserWidget.h"

AShooterController::AShooterController() : pawnControlled(nullptr), rotationSpeedForController(75)
{
    PrimaryActorTick.bCanEverTick = true;
}

void AShooterController::SetupInputComponent()
{
    Super::SetupInputComponent();

    UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
    checkf(enhancedInputComponent, TEXT("Could not cast to UEnhancedInputComponent"));

    checkf(walkAction, TEXT("walkAction is nullptr"));
    enhancedInputComponent->BindAction(walkAction, ETriggerEvent::Triggered, this, &AShooterController::HandleWalk);
    enhancedInputComponent->BindActionValueLambda(walkAction, ETriggerEvent::Completed, [this](const FInputActionValue& inputActionValue){ pawnControlled->currentSpeed = 0; });

    checkf(lookAction, TEXT("lookAction is nullptr"));
    enhancedInputComponent->BindAction(lookAction, ETriggerEvent::Triggered, this, &AShooterController::HandleLook);

    checkf(lookForControllerAction, TEXT("lookForControllerAction is nullptr"));
    enhancedInputComponent->BindAction(lookForControllerAction, ETriggerEvent::Triggered, this, &AShooterController::HandleLookForController);

    checkf(shootAction, TEXT("shootAction is nullptr"));
    enhancedInputComponent->BindActionValueLambda(shootAction, ETriggerEvent::Triggered, [this](const FInputActionValue& inputActionValue){ pawnControlled->Shoot(); });
    
    checkf(jumpAction, TEXT("jumpAction is nullptr"));
    enhancedInputComponent->BindActionValueLambda(jumpAction, ETriggerEvent::Triggered, [this](const FInputActionValue& inputActionValue)
    {
        Cast<UPrimitiveComponent>(pawnControlled->GetRootComponent())->AddImpulse(FVector(0, 0, pawnControlled->GetJumpSpeed()), NAME_None, true);
    });

    UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
    checkf(subsystem, TEXT("Could not get the subsystem"));

    subsystem->ClearAllMappings();
    subsystem->AddMappingContext(inputMapping, 0);
}

void AShooterController::BeginPlay()
{
    Super::BeginPlay();
    
    pawnControlled = Cast<AShooterPawn>(GetPawn());
    checkf(pawnControlled, TEXT("The pawn the AShooterController is controlling is not a AShooterPawn"));
    
    pawnControlled->onPawnDeath.BindLambda([this](){ DisableInput(this); });
    
    HUDWidget = CreateWidget(this, HUDWidgetClass);
    HUDWidget->AddToViewport();
}

void AShooterController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);

    if (bIsWinner)
    {
        winWidget = CreateWidget(this, winWidgetClass);
        winWidget->AddToViewport();
    }

    else
    {
        HUDWidget->RemoveFromParent();
        lossWidget = CreateWidget(this, lossWidgetClass);
        lossWidget->AddToViewport();
    }
    
    FTimerHandle timerHandle;
    GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &APlayerController::RestartLevel, restartDelay);
}

void AShooterController::HandleWalk(const FInputActionValue& inputActionValue)
{
    FVector forwardOffset = pawnControlled->GetActorForwardVector() * inputActionValue.Get<FVector>().X * pawnControlled->GetMaxWalkSpeed();
    forwardOffset.Z = 0;

    FVector rightOffset = pawnControlled->GetActorRightVector() * inputActionValue.Get<FVector>().Y * pawnControlled->GetMaxWalkSpeed();
    rightOffset.Z = 0;

    FVector totalOffset = forwardOffset + rightOffset;

    FVector directionVector = totalOffset.GetSafeNormal2D();

    float speed = FMath::Clamp(totalOffset.Length(), 0, pawnControlled->GetMaxWalkSpeed());
    
    pawnControlled->currentSpeed = speed;
    pawnControlled->currentAngle = inputActionValue.Get<FVector>().Rotation().Yaw;

    pawnControlled->AddActorWorldOffset(directionVector * speed  * GetWorld()->GetDeltaSeconds());
}

void AShooterController::HandleLook(const FInputActionValue& inputActionValue)
{
    AddPitchInput(inputActionValue.Get<FVector>().Y);
    AddYawInput(inputActionValue.Get<FVector>().X);
}

void AShooterController::HandleLookForController(const FInputActionValue& inputActionValue)
{
    float scale = rotationSpeedForController * GetWorld()->GetDeltaSeconds();
    AddPitchInput(scale * inputActionValue.Get<FVector>().Y);
    AddYawInput(scale * inputActionValue.Get<FVector>().X);
}
