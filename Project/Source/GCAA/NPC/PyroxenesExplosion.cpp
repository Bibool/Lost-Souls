// Fill out your copyright notice in the Description page of Project Settings.


#include "PyroxenesExplosion.h"


#include "BaseNpc.h"
#include "GCAA/Player/CPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"
// Sets default values
APyroxenesExplosion::APyroxenesExplosion()
{
	DamageableComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage Component"));

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ExplosionRadius = CreateDefaultSubobject<USphereComponent>(TEXT("MeleeCollision"));
	damageAmount = 10;
	if (ExplosionRadius)
	{
		float const radius();
		ExplosionRadius->SetSphereRadius(10.0f, false);		
	}
	RootComponent = ExplosionRadius;
	SetRootComponent(ExplosionRadius);
}

// Called when the game starts or when spawned
void APyroxenesExplosion::BeginPlay()
{
	Super::BeginPlay();
	
	if (ExplosionVfx)
	{
		UParticleSystemComponent* Explosion = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionVfx, GetActorTransform());
		Explosion->SetRelativeScale3D(FVector(4.0f));
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSound, GetActorLocation());

		//OnDetonate();

	}
	
	if (ExplosionRadius)
	{
		FAttachmentTransformRules const rules(
			EAttachmentRule::SnapToTarget,
			EAttachmentRule::SnapToTarget,
			EAttachmentRule::KeepWorld,
			false);
		ExplosionRadius->SetCollisionProfileName("EnemyMelee");
		ExplosionRadius->SetNotifyRigidBodyCollision(true);
	}
	
	if (ExplosionRadius)
	{
		ExplosionRadius->OnComponentHit.AddDynamic(this, &APyroxenesExplosion::OnHit);
		ExplosionRadius->OnComponentBeginOverlap.AddDynamic(this, &APyroxenesExplosion::onAttackOverlapBegin);
		ExplosionRadius->OnComponentEndOverlap.AddDynamic(this, &APyroxenesExplosion::onAttackOverlapEnd);
	}
	
}

// Called every frame
void APyroxenesExplosion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ExplosionRadius->SetSphereRadius(ExplosionRadius->GetScaledSphereRadius()+300.0f);
	if(ExplosionRadius->GetScaledSphereRadius() >= 600)
	{
		onDeath();
	}
}

void APyroxenesExplosion::onDeath()
{
	ConditionalBeginDestroy();
	GEngine->ForceGarbageCollection(true);
}

void APyroxenesExplosion::OnHit(UPrimitiveComponent* HitComponent, AActor* HitActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{

	if (ACPlayer* const player = Cast<ACPlayer>(HitActor))
	{
		UDamageComponent* pDmgComp = HitActor->FindComponentByClass<UDamageComponent>();
		if (pDmgComp)
		{
			pDmgComp->ReceiveDamage(damageAmount);
		}
	}

		if (ABaseNpc* const friendly = Cast <ABaseNpc>(HitActor))
		{
				UDamageComponent* pDmgComp = HitActor->FindComponentByClass<UDamageComponent>();
				if (pDmgComp)
				{
					pDmgComp->ReceiveDamage(damageAmount);
				}
		}
}


void APyroxenesExplosion::onAttackOverlapBegin(UPrimitiveComponent* const OverlappedComponent, AActor* const HitActor, UPrimitiveComponent* OtherComponent, int const BodyIndex, bool const FromSweep, FHitResult const& SweepResult)
{
	if (ACPlayer* const player = Cast<ACPlayer>(HitActor))
	{
		UDamageComponent* pDmgComp = HitActor->FindComponentByClass<UDamageComponent>();
		if (pDmgComp)
		{
			pDmgComp->ReceiveDamage(damageAmount);
		}
	}


	if (ABaseNpc* const friendly = Cast <ABaseNpc>(HitActor))
	{
		UDamageComponent* pDmgComp = HitActor->FindComponentByClass<UDamageComponent>();
		if (pDmgComp)
		{
			pDmgComp->ReceiveDamage(damageAmount);
		}
	}
}

void APyroxenesExplosion::onAttackOverlapEnd(UPrimitiveComponent* const OverlappedComponent, AActor* const HitActor, UPrimitiveComponent* OtherComponent, int const BodyIndex)
{

}
