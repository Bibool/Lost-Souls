// Fill out your copyright notice in the Description page of Project Settings.


#include "TurretAIController.h"
#include "TurretEnemy.h"
#include "GCAA/Player/CPlayer.h"
#include "Tasks/AITask_MoveTo.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Perception/AISense.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "Navigation/PathFollowingComponent.h"

ATurretAIController::ATurretAIController()
{
	// We need this AIController to run its Tick method.
	PrimaryActorTick.bCanEverTick = true;
}

void ATurretAIController::BeginPlay()
{
	Super::BeginPlay();

	// Set the reference to the TurretEnemy.
	TurretEnemy = Cast<ATurretEnemy>(GetPawn());
}

void ATurretAIController::OnPossess(APawn* TurretPawn)
{
	Super::OnPossess(TurretPawn);
}

void ATurretAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}
