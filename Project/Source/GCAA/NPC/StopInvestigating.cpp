// Fill out your copyright notice in the Description page of Project Settings.


#include "StopInvestigating.h"
#include "BaseNpcController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"

UStopInvestigating::UStopInvestigating(FObjectInitializer const& ObjectInitializer)
{
	NodeName = TEXT("Stop Investigating");
}

EBTNodeResult::Type UStopInvestigating::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//gets the npc controller and writes false to the blackboard key "isinvestigating"
	if (auto const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		controller->GetBlackboardComponent()->SetValueAsBool(bb_keys::is_investigating, false);

		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
