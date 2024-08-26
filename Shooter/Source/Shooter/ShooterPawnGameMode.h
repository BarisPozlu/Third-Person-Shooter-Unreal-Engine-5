

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShooterPawnGameMode.generated.h"

UCLASS()
class SHOOTER_API AShooterPawnGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* killedPawn);
};
