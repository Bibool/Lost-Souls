// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MissileAttack.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UMissileAttack : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:


	UMissileAttack(FObjectInitializer const& object_initailizer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};