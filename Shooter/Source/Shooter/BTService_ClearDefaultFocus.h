

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_ClearDefaultFocus.generated.h"

UCLASS()
class SHOOTER_API UBTService_ClearDefaultFocus : public UBTService
{
	GENERATED_BODY()

public:
	
	UBTService_ClearDefaultFocus();

protected:

	virtual void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
