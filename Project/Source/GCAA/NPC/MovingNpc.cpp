// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingNpc.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "NpcSpawner.h"

AMovingNpc::AMovingNpc()
{
	PrimaryActorTick.bCanEverTick = true;
	walkSpeed = 200.0f;
	runSpeed = 600.0f;

	//patrolpath
	pathSpawnRadius = 1500.0f;
	spawnRandomPath = true;
	numOfPatrolPoints = 6;
	patrollingNpc = true;
	spawnRandomPath = true;
	movingNpc = true;
}


void AMovingNpc::BeginPlay()
{
	ABaseNpc::BeginPlay();

	//if the number of patrol paths is 0 it sets it to 6 by default so the npc will always be moving
	if (numOfPatrolPoints == 0)
	{
		numOfPatrolPoints = 6;
	}

	//if the spawn radius is 0 it sets it to a default value so all the patrol paths dont spawn in the same place 
	if (pathSpawnRadius == 0)
	{
		pathSpawnRadius = 1500.0f;
	}

	//checks to see if the conditions are met and then spawns the patrol path 
	if (PatrolPathClass && spawnRandomPath)
	{

		FActorSpawnParameters const params;
		PatrolPath = GetWorld()->SpawnActor<APatrolPath>(PatrolPathClass, this->GetActorLocation(), FRotator::ZeroRotator, params);
		//PatrolPath = Cast<APatrolPath>(PatrolPathClass);
		PatrolPath->SpawnRandomPath(numOfPatrolPoints, pathSpawnRadius);
		PatrolPath = PatrolPath;

	}

	//fail safe which is just incase the npc is NOT supposed to spawn a random patrol path but does not have a pre defined one set when it is supposed to follow one 
	if (!PatrolPath && !spawnRandomPath && patrollingNpc)
	{
		FActorSpawnParameters const params;
		PatrolPath = GetWorld()->SpawnActor<APatrolPath>(PatrolPathClass, this->GetActorLocation(), FRotator::ZeroRotator, params);
		//PatrolPath = Cast<APatrolPath>(PatrolPathClass);
		PatrolPath->SpawnRandomPath(2, 1500.0f);
		PatrolPath = PatrolPath;
	}

}
//sets the patrol path 
void AMovingNpc::setPatrolPath(APatrolPath* path)
{
	PatrolPath = path;
}

//overriden base attack which spawns a projectile (!just for testing!)
void AMovingNpc::BaseAttack()
{
		ABaseNpc::BaseAttack();
}

//on death function which deletes the patrol path
void AMovingNpc::VOnDeath()
{
	//
	PatrolPath->DeletePatrolPath();
	
	if (npcSpawner)
	{
		npcSpawner->setenemiesAlive(npcSpawner->getEnemiesAlive() - 1);
		npcSpawner->checkIfnextWave();
	}
	AController* CurrentController = GetController();
	if (CurrentController != nullptr) {
		// Stop movement so the death animation plays immediately
		CurrentController->StopMovement();
		// Unpossess to stop AI
		CurrentController->UnPossess();
		// Destroy the controller, since it's not part of the enemy anymore
		CurrentController->Destroy();
	}
	
	GetWorld()->DestroyActor(this);
}


TSubclassOf<APatrolPath> AMovingNpc::getPatrolPathClass()
{
	return PatrolPathClass;
}

float AMovingNpc::getWalkSpeed() const
{
	return walkSpeed;
}

float AMovingNpc::getRunSpeed() const
{
	return runSpeed;
}


APatrolPath* AMovingNpc::GetPatrolPath()
{
	return PatrolPath;
}

bool AMovingNpc::getPatrollingNpc()
{
	return patrollingNpc;
}

bool AMovingNpc::getSpawnRandomPath()
{
	return spawnRandomPath;
}

void AMovingNpc::StopActions()
{
	GetCharacterMovement()->MaxWalkSpeed = 0.0f;
	ABaseNpc::StopActions();

}

void AMovingNpc::AllowActions()
{
	GetCharacterMovement()->MaxWalkSpeed = walkSpeed;
	ABaseNpc::AllowActions();

}
