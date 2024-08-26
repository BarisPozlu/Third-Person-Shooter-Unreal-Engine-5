

#include "ShooterAIController.h"
#include "ShooterPawn.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

AShooterAIController::AShooterAIController()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AShooterAIController::BeginPlay()
{
    Super::BeginPlay();

    pawnControlled = Cast<AShooterPawn>(GetPawn());
    movementComponent = pawnControlled->GetComponentByClass<UFloatingPawnMovement>();
    playerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
    
    RunBehaviorTree(behaviorTree);
    
    pawnControlled->onPawnDeath.BindLambda([this]()
    {
        GetBlackboardComponent()->SetValueAsBool(TEXT("IsSelfDead"), true);
    }
        );
    GetBlackboardComponent()->SetValueAsObject(TEXT("PlayerPawn"), playerPawn);
    GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), pawnControlled->GetActorLocation());
}

void AShooterAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (pawnControlled->IsDead()) return;

    if (LineOfSightTo(playerPawn))
    {
        GetBlackboardComponent()->SetValueAsBool(TEXT("InLineOfSight"), true);
        GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLocation"), playerPawn->GetActorLocation());
    }

    else
    {
        GetBlackboardComponent()->ClearValue(TEXT("InLineOfSight"));
    }

    pawnControlled->currentSpeed = movementComponent->Velocity.Length();
    FVector localVelocity = UKismetMathLibrary::InverseTransformDirection(pawnControlled->GetTransform(), movementComponent->Velocity);
    pawnControlled->currentAngle = localVelocity.Rotation().Yaw;
}
