// Fill out your copyright notice in the Description page of Project Settings.


#include "CanNpcMove.h"
#include "BaseNPCController.h"
#include "BaseNpc.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"

//simple class which just checks if the npc can move or not, would be used for if an enemy was stationary 
UCanNpcMove::UCanNpcMove()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("CanNpcMove");
}


void UCanNpcMove::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);

	//gets the npc
	if (ABaseNpcController* const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		if (ABaseNpc* const npc = Cast<ABaseNpc>(controller->GetPawn()))
		{
			//gets if the npc is able to move or not
			controller->GetBlackboardComponent()->SetValueAsBool(bb_keys::moving_npc,
				npc->getMovingNpc());
		}
	}
}
