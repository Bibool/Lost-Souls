// Fill out your copyright notice in the Description page of Project Settings.


#include "CLevelTransition.h"
#include "Components/BoxComponent.h"
#include "Components/BillboardComponent.h"
#include "GCAA/Player/CPlayer.h"

// Sets default values
ACLevelTransition::ACLevelTransition()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	// Box Component Creation - LevelTransition
	LevelTransition = CreateDefaultSubobject<UBoxComponent>(TEXT("LevelTransitionBox"));
	RootComponent = LevelTransition;
	
	// Billboard Component Creation - Billboard
	Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	Billboard->SetupAttachment(GetRootComponent());

	// Initialize FName first Level 
	LevelTransitionName = "Village_Level";
}

// Called when the game starts or when spawned
void ACLevelTransition::BeginPlay()
{
	Super::BeginPlay();
	
	// Player overlap Billboard - Level Transition
	LevelTransition->OnComponentBeginOverlap.AddDynamic(this, &ACLevelTransition::OnOverlapBegin);

}

// Called every frame
void ACLevelTransition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACLevelTransition::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if something else is overlapping with the player
	if (OtherActor)
	{
		ACPlayer* CPlayer = Cast<ACPlayer>(OtherActor);

		if (CPlayer)
		{
			CPlayer->SwitchLevel(LevelTransitionName);
		}
	}
}

