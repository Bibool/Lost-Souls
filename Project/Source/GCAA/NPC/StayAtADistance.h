///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									          -ABOUT STAYATADISTANCE-												     //
// + This task was made for the Erosion Enemy, so that it stays at a distance at all times from the Player.				 //
// + It is used within the Behaviour Tree.																				 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "BaseNpc.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "CoreMinimal.h"
#include "StayAtADistance.generated.h"

UCLASS()
class GCAA_API UStayAtADistance : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UStayAtADistance(FObjectInitializer const& object_initializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	FVector vNPCNewPosition;
};