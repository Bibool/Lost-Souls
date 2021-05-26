///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "StayAtADistance.h"
#include "BaseNpcController.h"
#include "Blackboard_keys.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "ChasePlayer.h"
#include "MovingNpc.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"

UStayAtADistance::UStayAtADistance(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Stay At A Distance From Player");
}

EBTNodeResult::Type UStayAtADistance::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Get target location from blackboard via AI Controller
	if( ABaseNpcController* const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()) )
	{
		FVector const player_location = controller->GetBlackboardComponent()->GetValueAsVector(bb_keys::target_location);
		if( AMovingNpc* const NPC = Cast<AMovingNpc>(controller->GetPawn()) )
		{
			FVector NpcLoc = NPC->GetActorLocation();

			FVector direction = NpcLoc - player_location;

			// Get the navigation system and generate a random location on the NavMesh
			if( UNavigationSystemV1* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld()) )
			{
				FNavLocation Location;
				if( NavSystem->GetRandomPointInNavigableRadius(vNPCNewPosition, 1500.0f, Location, nullptr) )
				{
					if( direction.Size() < 300 )
					{
						vNPCNewPosition = NpcLoc - 300;
						UAIBlueprintHelperLibrary::SimpleMoveToLocation(controller, Location.Location);
					}
				}
				//NPCNewPosition = player_location + fDistanceBetween * direction;

				//if( fMinimumdistance >= direction.Size())
				//{
				//	NPC->SetActorLocation(vNPCNewPosition);
				//}

				// Finishes with success
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}