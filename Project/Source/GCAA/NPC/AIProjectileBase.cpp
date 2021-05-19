// Fill out your copyright notice in the Description page of Project Settings.


#include "AIProjectileBase.h"
#include "GCAA/Player/CPlayer.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AAIProjectileBase::AAIProjectileBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	RootComponent = ProjectileMesh;

	ParticleTrail = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleTrail"));
	ParticleTrail->SetupAttachment(RootComponent);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->InitialSpeed = MovementSpeed;
	ProjectileMovement->MaxSpeed = MovementSpeed;
	InitialLifeSpan = 3.0f;

	DamageableComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage Component"));

	damageAmount = 5.0f;
}

// Called when the game starts or when spawned
void AAIProjectileBase::BeginPlay()
{
	Super::BeginPlay();

	ProjectileMesh->OnComponentHit.AddDynamic(this, &AAIProjectileBase::OnHit);
}

// Called every frame
void AAIProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAIProjectileBase::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if( ACPlayer* const player = Cast<ACPlayer>(OtherActor) )
	{
		UDamageComponent* pDmgComp = OtherActor->FindComponentByClass<UDamageComponent>();
		if( pDmgComp )
		{
			//PlayExplosion(ExplosionSystem);

			if( this->IsValidLowLevel() )
				Destroy();
			pDmgComp->ReceiveDamage(damageAmount);
		}
	}

	//// Try to get a reference to the owning class
	//AActor* MyOwner = GetOwner();
	//// If for some reason we can't get a valid reference, return as we need to check against the owner
	//if( !MyOwner )
	//{
	//	return;
	//}
	//// If the other ISN'T self OR Owner AND exists, then apply damage
	//if( OtherActor && OtherActor != this && OtherActor != MyOwner )
	//{
	//	UGameplayStatics::ApplyDamage(OtherActor, Damage, MyOwner->GetInstigatorController(), this, DamageType);
	//}

	//Destroy();
}