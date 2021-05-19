// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "CanNpcPatrol.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UCanNpcPatrol : public UBTService
{
	GENERATED_BODY()
public:

	UCanNpcPatrol();

	void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};

