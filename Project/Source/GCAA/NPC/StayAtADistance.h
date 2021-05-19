// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BaseNpc.h"
#include "StayAtADistance.generated.h"

/**
 *
 */
UCLASS()
class GCAA_API UStayAtADistance : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UStayAtADistance(FObjectInitializer const& object_initializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FloatingAI)
	//	FVector direction; // Using a Vector instead of a Float so that it can float in any direction we want it to

	FVector NPCNewPosition;

	float DistanceBetween;

	float minimumdistance;
};