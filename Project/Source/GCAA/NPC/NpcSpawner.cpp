// Fill out your copyright notice in the Description page of Project Settings.


#include "NpcSpawner.h"
#include "NavigationSystem.h"
#include "Kismet/GameplayStatics.h"
#include "BaseNpc.h"
#include "GCAA/DynamicEnvironment/DoorButton.h"

// Sets default values
ANpcSpawner::ANpcSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	numOfEnemies = 3;
	enemiesIncreasedPerWave = 1;
	spawnRadius = 200.0f;
	numOfWaves = 2 ;
	SpawnOnBeginPlay = false;
	waveSpawned = false;
}

// Called when the game starts or when spawned
void ANpcSpawner::BeginPlay()
{
	wavesRemaining = numOfWaves;
	
	if (SpawnOnBeginPlay) //if true will spawn a wave as soon as the game has begun.
	{
		spawnWave();
	}
	Super::BeginPlay();
	
}

//this function spawns the wave going through an if statement to make sure waves are available
//It then does a for loop with the amount of enemies spawning in this wave and spawns them in a navigable radius to make sure they cannot be spawned outside the map
//it then sets the enemy alive counter up by 1
//To Spawn an NPC it gets one of the NPCs added into the array from the blueprint editor
//Once it has finished spawning all the NPCs it then sets the waveSpawned to be true and sets the Number of enemies to the num of enemies + wave increase amount
void ANpcSpawner::spawnWave()
{
	if (wavesRemaining > 0)
	{
		for (int i = 0; i < numOfEnemies; i++)
		{
			FNavLocation location;

			//gets the navigation system and generates a location next to the player

			if (UNavigationSystemV1* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				FNavLocation Loc;
				//gets the player character
				if (ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))

				{
					if (NavSys->GetRandomPointInNavigableRadius(GetActorLocation(), spawnRadius, Loc, nullptr))
					{
						enemiesAlive++;
						FActorSpawnParameters SpawnParams;
						//SpawnParams.Instigator;
						FTransform SpawnTransform = GetActorTransform();
						SpawnTransform.SetLocation(Loc.Location);
						int numNpc = BaseNPCClass.Num();

						auto NpcActor = Cast<ABaseNpc>(UGameplayStatics::BeginDeferredActorSpawnFromClass
						(this, BaseNPCClass[FMath::RandRange(0, numNpc - 1)], SpawnTransform));

						if (NpcActor != nullptr)
						{
							NpcActor->setSpawner(this);
							UGameplayStatics::FinishSpawningActor(NpcActor, SpawnTransform);
						}

					}
				}

			}
		}
		waveSpawned = true;
		numOfEnemies = numOfEnemies + enemiesIncreasedPerWave;
		
	}
}


void ANpcSpawner::setEnemiesAlive(int i)
{
	enemiesAlive = i;
}

int ANpcSpawner::getEnemiesAlive()
{
	return enemiesAlive;
}

//This function checks if the enemies alive are equal to 0 and makes sure the wave spawned is set to true
//If these conditions  are met it will then set the waves remaining to be one less
//If no waves are remaining it will check for a door actor and if it finds one it will then call the
//override doorlock function and set it to true unlocking a door if needed
void ANpcSpawner::checkIfnextWave()
{
	if (enemiesAlive == 0 && waveSpawned == true)
	{
		if (wavesRemaining > 0)
		{
			--wavesRemaining;
		}
		if (wavesRemaining <= 0)
		{
			if (DoorActor)
			{
				DoorActor->OverrideDoorLock(true);
			}
		}
		spawnWave();
	}
}

// Called every frame
void ANpcSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

