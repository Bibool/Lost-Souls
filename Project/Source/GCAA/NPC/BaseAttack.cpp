// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAttack.h"
#include "AIController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine/LatentActionManager.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimInstance.h"

//sets the node name 
UBaseAttack::UBaseAttack(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Base Attack");
}

EBTNodeResult::Type UBaseAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//gets the npc and calls the base attack function 
	// if it is able to call an attack function it will finish which succeded which allows the behavior tree to continue
	if (AAIController* const controller = OwnerComp.GetAIOwner())
	{
		if (ABaseNpc* const npc = Cast<ABaseNpc>(controller->GetPawn()))
		{

			//checks to see if a montage has finished playing which stops the attack from being called multiple times 
			if (montage_has_finished(npc))
			{
				npc->BaseAttack();
			}
		}
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}
	//if it isnt able to call a base attack it will fail which causes the tree to move back up on itself 
	return EBTNodeResult::Failed;
}


bool UBaseAttack::montage_has_finished(ABaseNpc* npc)
{
	return npc->GetMesh()->GetAnimInstance()->Montage_GetIsStopped(npc->getMontage());
}
