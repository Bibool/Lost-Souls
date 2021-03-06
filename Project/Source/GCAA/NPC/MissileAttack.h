///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									          -ABOUT MISSILEATTACK-														 //
// + This task was made for the Erosion Enemy and its Missile Attack.													 //
// + It is used within the Behaviour Tree.																				 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "CoreMinimal.h"
#include "MissileAttack.generated.h"

UCLASS()
class GCAA_API UMissileAttack : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:

	UMissileAttack(FObjectInitializer const& object_initailizer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};