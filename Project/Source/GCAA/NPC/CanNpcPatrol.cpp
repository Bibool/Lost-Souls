// Fill out your copyright notice in the Description page of Project Settings.


#include "CanNpcPatrol.h"
#include "BaseNPCController.h"
#include "MovingNpc.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"

//simple class which is used in the behavior tree to check if the npc can patrol or not 
UCanNpcPatrol::UCanNpcPatrol()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("CanNpcPatrol");
}


void UCanNpcPatrol::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);

	//gets the npc
	if (ABaseNpcController* const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		if (AMovingNpc* const npc = Cast<AMovingNpc>(controller->GetPawn()))
		{

			//checks if the npc is supposed to be patrolling or not
			controller->GetBlackboardComponent()->SetValueAsBool(bb_keys::patrolling_npc,
				npc->getPatrollingNpc());
		}
	}
}
