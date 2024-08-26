

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterController.generated.h"

class UInputAction;
class UInputMappingContext;
class AShooterPawn;
struct FInputActionValue;

UCLASS()
class SHOOTER_API AShooterController : public APlayerController
{
	GENERATED_BODY()
	
public:

	AShooterController();
	virtual void SetupInputComponent() override;
	virtual void GameHasEnded(AActor* EndGameFocus, bool bIsWinner) override;

protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditDefaultsOnly)
	UInputAction* walkAction;
	
	UPROPERTY(EditDefaultsOnly)
	UInputAction* lookAction;

	UPROPERTY(EditDefaultsOnly)
	UInputAction* lookForControllerAction;

	UPROPERTY(EditDefaultsOnly)
	UInputAction* shootAction;

	UPROPERTY(EditDefaultsOnly)
	UInputAction* jumpAction;

	UPROPERTY(EditDefaultsOnly)
	UInputMappingContext* inputMapping;

	UPROPERTY()
	AShooterPawn* pawnControlled;

	UPROPERTY(EditDefaultsOnly)
	float rotationSpeedForController;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> lossWidgetClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> winWidgetClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> HUDWidgetClass;
	
	UPROPERTY()
	UUserWidget* lossWidget;

	UPROPERTY()
	UUserWidget* winWidget;

	UPROPERTY()
	UUserWidget* HUDWidget;
	
	UPROPERTY(EditDefaultsOnly)
	float restartDelay = 2;
	
	void HandleWalk(const FInputActionValue& inputActionValue);

	void HandleLook(const FInputActionValue& inputActionValue);
	
	void HandleLookForController(const FInputActionValue& inputActionValue);
};
