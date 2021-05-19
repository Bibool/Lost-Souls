// Fill out your copyright notice in the Description page of Project Settings.


#include "IncrementPathIndex.h"
#include "BaseNpcController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MovingNpc.h"
#include "blackboard_keys.h"
#include "cmath"

UIncrementPathIndex::UIncrementPathIndex(FObjectInitializer const& ObjectInitializer)
{
	NodeName = TEXT("Incremenet Path Index");
}


EBTNodeResult::Type UIncrementPathIndex::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//gets the ai controller
	if (ABaseNpcController* controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		if (AMovingNpc* const npc = Cast<AMovingNpc>(controller->GetPawn()))
		{
			int const numOfPoints = npc->GetPatrolPath()->num();
			int const min_index = 0;
			int const max_index = numOfPoints - 1;

			//gets and sets the blackboard index key
			int index = controller->GetBlackboardComponent()->GetValueAsInt(bb_keys::patrol_path_index);

			if (biDirectional)
			{
				//if the npc has reached the last point then the npc should walk backwards 
				if (index >= max_index && direction == EDirectionType::Forward)
				{
					direction = EDirectionType::Reverse;
				}
				//if the npc has reached the first point then the npc should walk forwards 
				else if (index == min_index && direction == EDirectionType::Reverse)
				{
					direction = EDirectionType::Forward;
				}
			}



			//if the player is moving forward then increase the path index if not then decrease and modulus division by the number of points so it goes back on itself instead of starting from 0
			controller->GetBlackboardComponent()->SetValueAsInt(bb_keys::patrol_path_index,
				(direction == EDirectionType::Forward ? std::abs(++index) : std::abs(--index)) % numOfPoints);

			//finishes with success
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}