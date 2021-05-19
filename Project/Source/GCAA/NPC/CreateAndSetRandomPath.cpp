// Fill out your copyright notice in the Description page of Project Settings.


#include "CreateAndSetRandomPath.h"
#include "BaseNpcController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MovingNpc.h"
#include "PatrolPath.h"
#include "blackboard_keys.h"


UCreateAndSetRandomPath::UCreateAndSetRandomPath(FObjectInitializer const& object_intializer)
{
	NodeName = TEXT("create and set randompath");
}


EBTNodeResult::Type UCreateAndSetRandomPath::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//gets the ai controller for the patrolling npc

	if (ABaseNpcController* const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		//get the current patrol path index from the blackboard

		//uses the index to get the current patrol path and writes it to the blackboard from the npc to the patrol path
		if (AMovingNpc* const npc = Cast<AMovingNpc>(controller->GetPawn()))
		{
			if (npc->getSpawnRandomPath())
			{
				if(npc->GetPatrolPath())
				{
					npc->GetPatrolPath()->DeletePatrolPoints();
				}
					
				FActorSpawnParameters const params;
				APatrolPath* Path = GetWorld()->SpawnActor<APatrolPath>(npc->getPatrolPathClass(), npc->GetActorLocation(), FRotator::ZeroRotator, params);
				if (npc->getSpawnRandomPath())
				{
					Path->SpawnRandomPath(7, 100);
					npc->setPatrolPath(Path);
					npc->setSpawnRandomPath(false);
					controller->GetBlackboardComponent()->SetValueAsBool(bb_keys::spawn_random_path, false);
					int const index = controller->GetBlackboardComponent()->GetValueAsInt(bb_keys::patrol_path_index);
					FVector const point = Path->get_patrol_point(index);
					FVector const globalPoint = Path->GetActorTransform().TransformPosition(point);
					controller->GetBlackboardComponent()->SetValueAsVector(bb_keys::patrol_path_vector, globalPoint);
					//finished with success
					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
					return EBTNodeResult::Succeeded;
				}
				

				}

			
		}
	}
	return EBTNodeResult::Failed;
}
