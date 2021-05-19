// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateTo.h"
#include "AIController.h"
#include "TurretEnemy.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine/LatentActionManager.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"


URotateTo::URotateTo(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("RotateTo");
}

EBTNodeResult::Type URotateTo::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Gets the AIController
	if( AAIController* const controller = OwnerComp.GetAIOwner() )
	{
		//Gets the TurretEnemy
		if( ATurretEnemy* const npc = Cast<ATurretEnemy>(controller->GetPawn()) )
		{
			// Gets the blackboard component of the controller and then it looks for the target location blackboard key
			FVector loc = controller->GetBlackboardComponent()->GetValueAsVector(bb_keys::target_location);
			// Calls the TurretRotation function and passes through the location that we just got
			npc->TurretRotation(loc);
		}
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded); // If it finishes with success it can move onto the next task, but it fails it moves back up the tree
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}