///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "FindRotation.h"
#include "BaseNpc.h"
#include "BaseNpcController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"
#include "ErosionEnemy.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

UFindRotation::UFindRotation(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("FindPlayerRotation");
}

EBTNodeResult::Type UFindRotation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Gets the player character and the NPCs controller
	if( ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0) )
	{
		if( auto const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()) )
		{
			if( ABaseNpc* const NPC = Cast<ABaseNpc>(controller->GetPawn()) )
			{
				if ( NPC->getIsTargettingPlayer() == false )
				{
					if( AErosionEnemy* const ErosionNPC = Cast<AErosionEnemy>(controller->GetPawn()) )
					{
						ErosionNPC->SetLaserTargetPoint(player->GetActorLocation());
					}
					controller->SetFocalPoint(player->GetActorLocation());
					NPC->setIsTargettingPlayer(true);
					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
					return EBTNodeResult::Succeeded;
				}

				else if( NPC->getIsTargettingPlayer() ==  true )
				{
					controller->ClearFocus(2);
					NPC->setIsTargettingPlayer(false);
					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
					return EBTNodeResult::Succeeded;
				}
				//get Player location to use as an origin location
				//FVector const player_location = player->GetActorLocation();
				//FVector NpcLoc = NPC->GetActorLocation();
				//FRotator PlayerRot = player->GetActorRotation();
				//FVector NpcForward = player_location - NpcLoc;
				//FVector UpVector = FVector::UpVector;
				//FRotator Rot = UKismetMathLibrary::MakeRotFromXZ(NpcForward, UpVector);
				//NPC->SetRotation(Rot);

				//controller->ClearFocus(2);
				//finishes with success
			}
		}
	}
	return EBTNodeResult::Failed;
}