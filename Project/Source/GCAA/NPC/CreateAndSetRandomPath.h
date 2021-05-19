// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "CreateAndSetRandomPath.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UCreateAndSetRandomPath : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UCreateAndSetRandomPath(FObjectInitializer const& ObjectInitializer);
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
