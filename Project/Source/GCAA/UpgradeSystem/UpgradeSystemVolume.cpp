// Fill out your copyright notice in the Description page of Project Settings.


#include "UpgradeSystemVolume.h"
#include "Components/BoxComponent.h"
#include "GCAA/Player/CPlayer.h"

// Sets default values
AUpgradeSystemVolume::AUpgradeSystemVolume()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Box Component Creation - LevelTransition
	UpgradeVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("UpgradeVolumeBox"));
	RootComponent = UpgradeVolume;
}


// Called when the game starts or when spawned
void AUpgradeSystemVolume::BeginPlay()
{
	Super::BeginPlay();

	// Player overlap Billboard - Upgrade System Box
	UpgradeVolume->OnComponentBeginOverlap.AddDynamic(this, &AUpgradeSystemVolume::OnOverlapBegin);
}

// Called every frame
void AUpgradeSystemVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AUpgradeSystemVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if something else is overlapping with the player
	if (OtherActor)
	{
		ACPlayer* CPlayer = Cast<ACPlayer>(OtherActor);

		if (CPlayer)
		{
			UE_LOG(LogTemp, Warning, TEXT("BeginOverlap with Upgrade System Menu Box"));
			CPlayer->DisplayUpgradeSystemMenu();
		}
	}
}



