

#include "BTService_ClearDefaultFocus.h"
#include "AIController.h"

UBTService_ClearDefaultFocus::UBTService_ClearDefaultFocus()
{
	NodeName = TEXT("Clear Default Focus");
	bNotifyTick = false;
}

void UBTService_ClearDefaultFocus::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);
	
	OwnerComp.GetAIOwner()->ClearFocus(EAIFocusPriority::Default);
	
}
