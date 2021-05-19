// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "IsPlayerInAttackRange.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UIsPlayerInAttackRange : public UBTService
{
	GENERATED_BODY()
public:

	UIsPlayerInAttackRange();
	void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
