

#include "KillAllGameMode.h"
#include "AIController.h"
#include "EngineUtils.h"
#include "ShooterPawn.h"


void AKillAllGameMode::PawnKilled(APawn* killedPawn)
{
	Super::PawnKilled(killedPawn);
	
	if (killedPawn->GetController()->IsPlayerController())
	{
		EndGame(false);
		return;
	}

	for (AAIController* controller : TActorRange<AAIController>(GetWorld()))
	{
		if (!controller->GetPawn<AShooterPawn>()->IsDead()) return;
	}

	EndGame(true);
}

void AKillAllGameMode::EndGame(bool playerHasWon)
{
	for (AController* controller : TActorRange<AController>(GetWorld()))
	{
		bool HasWon = playerHasWon == controller->IsPlayerController();
		controller->GameHasEnded(controller->GetPawn(), HasWon);
	}
}
