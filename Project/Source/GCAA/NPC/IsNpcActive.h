// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "IsNpcActive.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UIsNpcActive : public UBTService
{
	GENERATED_BODY()
public:

	UIsNpcActive();
	void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
