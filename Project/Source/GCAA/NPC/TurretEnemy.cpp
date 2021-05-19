// Fill out your copyright notice in the Description page of Project Settings.


#include "TurretEnemy.h"
#include "GCAA/Player/CPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GCAA/NPC/AIProjectileBase.h"

// Sets default values
ATurretEnemy::ATurretEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(RootComponent);
	RootComponent = BaseMesh;

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	TurretMesh->SetupAttachment(BaseMesh);

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	ProjectileSpawnPoint->SetupAttachment(TurretMesh);

	FireRange = GetActorLocation().Size() + 500;
}

// Called when the game starts or when spawned
void ATurretEnemy::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<ACPlayer>(UGameplayStatics::GetPlayerCharacter(this, 0));
}

void ATurretEnemy::BaseAttack()
{
	if (ProjectileClass)
	{
		// Gets ProjectileSpawnPoint location and rotation
		// Spawn Projectile class at location firing towards rotation
		FVector SpawnLocation = ProjectileSpawnPoint->GetComponentLocation();
		FRotator SpawnRotation = ProjectileSpawnPoint->GetComponentRotation();

		AAIProjectileBase* TempProjectile = GetWorld()->SpawnActor<AAIProjectileBase>(ProjectileClass, SpawnLocation, SpawnRotation);
		TempProjectile->SetOwner(this);
	}
}

void ATurretEnemy::TurretRotation(FVector LookAtTarget)
{
	// We only want the Turret to look around horizontally, which is why we only use X & Y for LookAtTarget
	// We're essentially just taking the LookAtTarget which is being passed in and cleaning this to avoid any weird rotation
	FVector LookAtTargetCleaned = FVector(LookAtTarget.X, LookAtTarget.Y, BaseMesh->GetComponentLocation().Z);
	FVector StartLocation = TurretMesh->GetComponentLocation();

	//TurretRotation is the value we need to pass into the SetWorldRotation function to make the Turret rotate towards the target
	FRotator TurretRotation = FVector(LookAtTargetCleaned - StartLocation).Rotation();
	BaseMesh->SetWorldRotation(TurretRotation);
}

// Called every frame
void ATurretEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}