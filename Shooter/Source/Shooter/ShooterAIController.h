

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

class AShooterPawn;
class UFloatingPawnMovement;

UCLASS()
class SHOOTER_API AShooterAIController : public AAIController
{
	GENERATED_BODY()

public:

	AShooterAIController();
	
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;
	
private:
	
	UPROPERTY(EditDefaultsOnly)
	UBehaviorTree* behaviorTree;

	AShooterPawn* pawnControlled;
	UFloatingPawnMovement* movementComponent;

	APawn* playerPawn;
};
