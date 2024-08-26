

#pragma once

#include "CoreMinimal.h"
#include "ShooterPawnGameMode.h"
#include "KillAllGameMode.generated.h"

UCLASS()
class SHOOTER_API AKillAllGameMode : public AShooterPawnGameMode
{
	GENERATED_BODY()

public:
	
	virtual void PawnKilled(APawn* killedPawn) override;

private:

	void EndGame(bool playerHasWon);
};
