// Fill out your copyright notice in the Description page of Project Settings.


#include "FindPathPoint.h"
#include "BaseNpcController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MovingNpc.h"
#include "blackboard_keys.h"


UFindPathPoint::UFindPathPoint(FObjectInitializer const& object_intializer)
{
	NodeName = TEXT("Find Path Point");
}


EBTNodeResult::Type UFindPathPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//gets the ai controller for the patrolling npc
	
	if (ABaseNpcController* const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		//gets the current patrol path index from the blackboard
		int const index = controller->GetBlackboardComponent()->GetValueAsInt(bb_keys::patrol_path_index);

		//uses the index to get the current patrol path and writes it to the blackboard from the npc to the patrol path
		if (AMovingNpc* const npc = Cast<AMovingNpc>(controller->GetPawn()))
		{
			FVector const point = npc->GetPatrolPath()->get_patrol_point(index);

			//transforms this point to a global position using its parents location
			FVector const globalPoint = npc->GetPatrolPath()->GetActorTransform().TransformPosition(point);

			//writes the global path point to the blackboard
			controller->GetBlackboardComponent()->SetValueAsVector(bb_keys::patrol_path_vector, globalPoint);

			//finished with success
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
