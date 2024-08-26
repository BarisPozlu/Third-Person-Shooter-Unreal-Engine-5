

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_Shoot.generated.h"

struct FShooterPawnPointerMemory
{
	class AShooterPawn* AIPawn;
};

UCLASS()
class SHOOTER_API UBTTask_Shoot : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTTask_Shoot();
	
	inline virtual uint16 GetInstanceMemorySize() const override
	{
		return sizeof FShooterPawnPointerMemory;
	}
	
protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
