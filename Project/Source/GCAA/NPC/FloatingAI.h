// Fill out your copyright notice in the Description page of Project Settings.

// Class by Mehak Hussain

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FloatingAI.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GCAA_API UFloatingAI : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFloatingAI();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FloatingAI)
		FVector vFloat; // Using a Vector instead of a Float so that it can float in any direction we want it to

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FloatingAI)
		float fSpeedMultiplier; // Because we're using a sine wave to float, we will need to multiply the frequency of that sine wave to move faster or slower
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	FVector vstartLocation;
};
