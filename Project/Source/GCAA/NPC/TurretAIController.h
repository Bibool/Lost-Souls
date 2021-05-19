// Fill out your copyright notice in the Description page of Project Settings.

// Class by Mehak Hussain

#pragma once

#include "CoreMinimal.h"
#include "BaseNpcController.h"
#include "Perception/AIPerceptionTypes.h"
#include "TurretAIController.generated.h"

class ATurretEnemy;
class ACPlayer;

/**
 *
 */
UCLASS()
class GCAA_API ATurretAIController : public ABaseNpcController
{
	GENERATED_BODY()

public:
	// Sets default values for this AI Controller's properties.
	ATurretAIController();

	// Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	// Called when the AIController is taken over.
	void OnPossess(APawn* const TurretPawn) override;

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		ATurretEnemy* TurretEnemy;

	ACPlayer* PlayerCharacter;

private:



};