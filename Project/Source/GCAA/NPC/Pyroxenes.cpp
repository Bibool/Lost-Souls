// Fill out your copyright notice in the Description page of Project Settings.


#include "Pyroxenes.h"
#include "PyroxenesExplosion.h"
//#include "FloatingAI.h"

APyroxenes::APyroxenes()
{
	//BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>("BodyMesh");
	//BodyMesh->AttachTo(GetRootComponent());
	//HeadMesh = CreateDefaultSubobject<UStaticMeshComponent>("HeadMesh");
	//HeadMesh->SetupAttachment(BodyMesh);
	//FloatingAI = CreateDefaultSubobject<UFloatingAI>("FloatingAI"); // Adds the FloatingAI component to this Enemy
	
}

void APyroxenes::BeginPlay()
{
	AMovingNpc::BeginPlay();
}

//attack start and end function will be used when the animation is made in the future.
void APyroxenes::AttackStart()
{
}


void APyroxenes::AttackEnd()
{
}

void APyroxenes::BaseAttack()
{
	if (Explosion)
	{
		FTransform SpawnTransform = GetActorTransform();
		SpawnTransform.TransformPosition(FVector(0.0f, 0.0f, 0.0f));

		SpawnTransform.SetLocation(GetActorForwardVector() + GetActorLocation());

		FActorSpawnParameters SpawnParams;
		//SpawnParams.Instigator;

		GetWorld()->SpawnActor <APyroxenesExplosion>(Explosion, SpawnTransform, SpawnParams);
		ABaseNpc::BaseAttack();
		AMovingNpc::VOnDeath();
	}
}
