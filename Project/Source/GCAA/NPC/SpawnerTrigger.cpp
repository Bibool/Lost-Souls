// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnerTrigger.h"

#include "GCAA/Player/CPlayer.h"


#define DEBUGLOG(text) UE_LOG(LogTemp, Warning, TEXT(text));

// Sets default values
ASpawnerTrigger::ASpawnerTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Locked = false;
	Box->OnComponentBeginOverlap.AddDynamic(this, &ASpawnerTrigger::OnOverlapBegin);
	Box->OnComponentEndOverlap.AddDynamic(this, &ASpawnerTrigger::OnOverlapEnd);
	StaticMesh->SetupAttachment(ECRootComponent);

}

// Called when the game starts or when spawned
void ASpawnerTrigger::BeginPlay()
{
	Super::BeginPlay();

	FPlayerInteractingDelegate::FPlayerInteracting.AddUObject(this, &ASpawnerTrigger::RespondToInteractionCommand);


}

// Called every frame
void ASpawnerTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//////////////////////////////////////////////////////////////////////////
// This operation attempts to perform an unlock operation by searching the
// player inventory for all required keys.
//////////////////////////////////////////////////////////////////////////
void ASpawnerTrigger::AttemptToUnlock()
{
	if (!Locked)
	{
		Locked = true;
		if (Spawner)
		{
			Spawner->spawnWave();
		}
	}
}


void  ASpawnerTrigger::OnOverlapBegin(UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (CheckThatOtherActorIsPlayer(OtherActor))
	{
		if (!Locked)
		{
			UE_LOG(LogTemp, Warning, TEXT("DOOR BUTTON - OVERLAP START"));

			DisplayInteractionWidget();
			bWaitingToInteract = true;
		}
	}
}

void ASpawnerTrigger::OnOverlapEnd(UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (CheckThatOtherActorIsPlayer(OtherActor))
	{
			UE_LOG(LogTemp, Warning, TEXT("DOOR BUTTON - OVERLAP END"));
			RemoveInteractionWidget();
			bWaitingToInteract = false;
	}

}

void ASpawnerTrigger::RespondToInteractionCommand()
{
	if (bWaitingToInteract)
	{
		AttemptToUnlock();
		RemoveInteractionWidget();
	}
}

