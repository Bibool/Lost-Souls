// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "FindPathPoint.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UFindPathPoint : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UFindPathPoint(FObjectInitializer const& object_intializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
