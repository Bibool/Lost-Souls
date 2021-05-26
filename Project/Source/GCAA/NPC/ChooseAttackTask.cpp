// Fill out your copyright notice in the Description page of Project Settings.


#include "ChooseAttackTask.h"
#include "BaseNPCController.h"
#include "BaseNpc.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"

//simple class which gets the npcs attack change and checks the attack range from the players location 

UChooseAttackTask::UChooseAttackTask(FObjectInitializer const& ObjectInitializer)
{
	NodeName = TEXT("UChooseAttackTask");
}

EBTNodeResult::Type UChooseAttackTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// get AI controller and its NPC
	if (auto const Cont = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		if (ABaseNpc* const NPC = Cast<ABaseNpc>(Cont->GetPawn()))
		{
			//Chooses an attack by getting an attack range and then setting a blackboard variable to match which option should be picked
			if (ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
			{
				if (NPC->GetDistanceTo(player) < NPC->getAttackRange())
				{
					Cont->GetBlackboardComponent()->SetValueAsInt(GetSelectedBlackboardKey(), 1);
				}

				if (NPC->GetDistanceTo(player) >= NPC->getAttackRange())
				{
					Cont->GetBlackboardComponent()->SetValueAsInt(GetSelectedBlackboardKey(), 2);

				}
				// finish with success
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
		}
	return EBTNodeResult::Failed;
}




