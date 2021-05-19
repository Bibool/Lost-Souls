// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//Brandon Middleton 
//This class is used to call the base attack function for the npcs inside the behavior tree which is made in the engine
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BaseNpc.h"
#include "BaseAttack.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UBaseAttack : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UBaseAttack(FObjectInitializer const& object_initializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
	bool montage_has_finished(ABaseNpc* npc);

};
