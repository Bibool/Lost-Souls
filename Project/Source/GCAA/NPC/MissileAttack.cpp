#include "MissileAttack.h"
#include "BaseNPCController.h"
#include "ErosionEnemy.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"

//simple class which gets the npcs attack change and checks the attack range from the players location 

UMissileAttack::UMissileAttack(FObjectInitializer const& ObjectInitializer)
{
	NodeName = TEXT("UMissileAttack");
}

EBTNodeResult::Type UMissileAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// get AI controller and its NPC
	if( auto const Cont = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()) )
	{
		if( AErosionEnemy* const NPC = Cast<AErosionEnemy>(Cont->GetPawn()) )
		{
			NPC->SpawnMissile();
			// finish with success
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}