///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SniperAttack.h"
#include "BaseNPCController.h"
#include "blackboard_keys.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ErosionEnemy.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

USniperAttack::USniperAttack(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("USniperAttack");
}

EBTNodeResult::Type USniperAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if( ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0) )
	// Get AI controller and its NPC
	if( auto const Cont = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()) )
	{
		if( AErosionEnemy* const NPC = Cast<AErosionEnemy>(Cont->GetPawn()) )
		{
				NPC->SpawnLaser();
				// Finish with success
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}