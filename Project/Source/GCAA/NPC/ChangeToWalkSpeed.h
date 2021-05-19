// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ChangeToWalkSpeed.generated.h"

/**
 *
 */
UCLASS()
class GCAA_API UChangeToWalkSpeed : public UBTService
{
	GENERATED_BODY()

public:
	UChangeToWalkSpeed();

	void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	FString GetStaticDescription() const override;

};