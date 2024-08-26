

#include "BTTask_Shoot.h"
#include "ShooterPawn.h"
#include "AIController.h"

UBTTask_Shoot::UBTTask_Shoot()
{
	NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	FShooterPawnPointerMemory* pawnPointerMemory = (FShooterPawnPointerMemory*) NodeMemory;
	
	if (!pawnPointerMemory->AIPawn)
	{
		pawnPointerMemory->AIPawn = Cast<AShooterPawn>(OwnerComp.GetAIOwner()->GetPawn());
	}

	pawnPointerMemory->AIPawn->Shoot();
	return EBTNodeResult::Succeeded;
}
