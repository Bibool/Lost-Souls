// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "HasHitObjectCharge.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UHasHitObjectCharge : public UBTService
{
	GENERATED_BODY()
public:

	UHasHitObjectCharge();
	void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
