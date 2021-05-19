// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "CanNpcMove.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UCanNpcMove : public UBTService
{
	GENERATED_BODY()
public:

	UCanNpcMove();
	
	void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};

