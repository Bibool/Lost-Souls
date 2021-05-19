// Fill out your copyright notice in the Description page of Project Settings.

// Class by Mehak Hussain

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "RotateTo.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API URotateTo : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	URotateTo(FObjectInitializer const& object_initializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:

};
