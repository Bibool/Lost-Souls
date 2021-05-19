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
	
	if (SpawnOnBeginPlay)
	{
		spawnWave();
	}
	Super::BeginPlay();
	
}

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

				int j = i;
				//gets the player character
				if (ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))

				{
					if (NavSys->GetRandomPointInNavigableRadius(GetActorLocation(), spawnRadius, Loc, nullptr))
					{
						enemiesAlive++;

						//if(j == BaseNPCClass.Num())
						//{
						//	j = 0;
						//}
						//BaseNPC == Cast<ABaseNpc>(BaseNPCClass[j]);
						//BaseNPC == new Cast<ABaseNpc>(BaseNPCClass[FMath::RandRange(0, BaseNPCClass.Num())]);
						FActorSpawnParameters SpawnParams;
						SpawnParams.Instigator;
						FTransform SpawnTransform = GetActorTransform();
						SpawnTransform.SetLocation(Loc.Location);
						int numNpc = BaseNPCClass.Num();
						//GetWorld()->SpawnActor<ABaseNpc>(BaseNPCClass[j], SpawnTransform, SpawnParams);

						auto NpcActor = Cast<ABaseNpc>(UGameplayStatics::BeginDeferredActorSpawnFromClass
						(this, BaseNPCClass[FMath::RandRange(0, numNpc - 1)], SpawnTransform));

						if (NpcActor != nullptr)
						{
							NpcActor->setSpawner(this);
							UGameplayStatics::FinishSpawningActor(NpcActor, SpawnTransform);
						}
						//GetWorld()->SpawnActor<ABaseNpc>(baseNpc, SpawnTransform, SpawnParams);

					}
				}

			}
		}
		waveSpawned = true;
		numOfEnemies = numOfEnemies + enemiesIncreasedPerWave;
		
	}
}

void ANpcSpawner::onNpcDeath()
{

}

void ANpcSpawner::setenemiesAlive(int i)
{
	enemiesAlive = i;
}

int ANpcSpawner::getEnemiesAlive()
{
	return enemiesAlive;
}

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
		//waveSpawned = false;
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::FromInt(wavesRemaining));
		GEngine->AddOnScreenDebugMessage(-1, GetWorld()->GetDeltaSeconds(), FColor::Orange, FString::FromInt(enemiesAlive));
	}
}

// Called every frame
void ANpcSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	
}

