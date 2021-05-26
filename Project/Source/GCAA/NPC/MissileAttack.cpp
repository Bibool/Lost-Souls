///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "MissileAttack.h"
#include "BaseNPCController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"
#include "ErosionEnemy.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"

UMissileAttack::UMissileAttack(FObjectInitializer const& ObjectInitializer)
{
	NodeName = TEXT("UMissileAttack");
}

EBTNodeResult::Type UMissileAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Get AI controller and its NPC
	if( auto const Cont = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()) )
	{
		if( AErosionEnemy* const NPC = Cast<AErosionEnemy>(Cont->GetPawn()) )
		{
			NPC->SpawnMissile();
			// Finish with success
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}