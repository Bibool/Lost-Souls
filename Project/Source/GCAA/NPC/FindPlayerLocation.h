// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "FindPlayerLocation.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UFindPlayerLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UFindPlayerLocation(FObjectInitializer const& object_initailizer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowProtectAccess = "true"))
		bool search_random = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowProtectAccess = "true"))
		float search_radius = 150.0f;
};
