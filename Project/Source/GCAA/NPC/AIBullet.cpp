///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "AIBullet.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GCAA/Player/CPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

AAIBullet::AAIBullet(const FObjectInitializer& ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	// Use a sphere as a simple collision representation
	CollisionComponent = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("CollisionComponent"));
	// Set the spheres collision radius
	CollisionComponent->InitSphereRadius(1.0f);
	// Set the root component to be the collision component
	RootComponent = CollisionComponent;

	// Use this component to drive this projectiles movement
	ProjectileMovementComponent = ObjectInitializer.CreateDefaultSubobject<UProjectileMovementComponent>(this, TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->Bounciness = 0.3f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = true;

	// Adding damage component
	DamageableComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage Component"));

	// Sets default damage value
	fDamageAmount = 20.0f;

	// Bind our OnOverlapBegin Event
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AAIBullet::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AAIBullet::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAIBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// This function is for implementing collision
void AAIBullet::OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& hitResult)
{
	// Gets Player object
	class ACPlayer* PlayerCharacter = Cast<ACPlayer>(otherActor);
	// Gets Ground object
	class AStaticMeshActor* GroundActor = Cast<AStaticMeshActor>(otherActor);

	// When Bullet has collided with Player
	if( ACPlayer* const player = Cast<ACPlayer>(otherActor) )
	{
		// Gets Damage Component and is applied
		UDamageComponent* pDmgComp = otherActor->FindComponentByClass<UDamageComponent>();
		if( pDmgComp )
		{
			// Play particle effect on collision with Player
			PlayExplosion(ExplosionSystem);

			if( this->IsValidLowLevel() )
				// Destroys the Bullet
				Destroy();
			// Bullet implements damage amount to Player
			pDmgComp->ReceiveDamage(fDamageAmount);
		}
	}
}

// This function calls the particle system
void AAIBullet::ExplodeOnImpact()
{
	// Play particle effect on collision with Player
	PlayExplosion(ExplosionSystem);
}

UParticleSystemComponent* AAIBullet::PlayExplosion(UParticleSystem* explosion)
{
	class UParticleSystemComponent* BulletParticles = NULL;

	if( explosion )
	{
		class UWorld* const world = GetWorld();

		if( world )
		{
			FVector vParticlesPosition = GetActorLocation();
			FRotator rParticlesRotation = GetActorRotation();

			BulletParticles = UGameplayStatics::SpawnEmitterAtLocation(world, explosion, vParticlesPosition, rParticlesRotation, true);
		}
	}
	return BulletParticles;
}