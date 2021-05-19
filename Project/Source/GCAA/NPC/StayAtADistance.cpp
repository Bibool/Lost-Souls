// Fill out your copyright notice in the Description page of Project Settings.


#include "StayAtADistance.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "ChasePlayer.h"
#include "BaseNpcController.h"
#include "MovingNpc.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Blackboard_keys.h"


UStayAtADistance::UStayAtADistance(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Stay At A Distance From Player");

	DistanceBetween = 300.0f;

	minimumdistance = 10.0f;
}

EBTNodeResult::Type UStayAtADistance::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//get target location from blackboard via ai controller
	if( ABaseNpcController* const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()) )
	{
		FVector const player_location = controller->GetBlackboardComponent()->GetValueAsVector(bb_keys::target_location);
		if( AMovingNpc* const NPC = Cast<AMovingNpc>(controller->GetPawn()) )
		{
			FVector NpcLoc = NPC->GetActorLocation();

			//FVector NpcDirection = NPC->GetActorForwardVector();

			FVector direction = NpcLoc - player_location;

			// get the navigation system and generate a random location on the NavMesh
			if( UNavigationSystemV1* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld()) )
			{
				FNavLocation Location;
				if( NavSystem->GetRandomPointInNavigableRadius(NPCNewPosition, 1500.0f, Location, nullptr) )
				{

					if( direction.Size() < 300 )
					{
						NPCNewPosition = NpcLoc - 300;
						UAIBlueprintHelperLibrary::SimpleMoveToLocation(controller, Location.Location);
					}
					//move to the players location

					//OwnerComp.GetBlackboardComponent()->SetValueAsVector(bb_keys::target_location, Location.Location);
				}

				//NPCNewPosition = player_location + DistanceBetween * direction;

				//if( minimumdistance >= direction.Size())
				//{
				//	NPC->SetActorLocation(NPCNewPosition);
				//}

				//finishes with success
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}