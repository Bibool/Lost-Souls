// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BaseNpc.h"
#include "ChasePlayer.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UChasePlayer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UChasePlayer (FObjectInitializer const& object_initializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
