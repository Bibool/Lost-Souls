// Fill out your copyright notice in the Description page of Project Settings.


#include "ChasePlayer.h"
#include "BaseNpcController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Blackboard_keys.h"


UChasePlayer::UChasePlayer(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Chase Player");
}


EBTNodeResult::Type UChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//get target location from blackboard via ai controller
	if (ABaseNpcController* const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		FVector const player_location = controller->GetBlackboardComponent()->GetValueAsVector(bb_keys::target_location);

		//move to the players location
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(controller, player_location);

		//finishes with success
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
