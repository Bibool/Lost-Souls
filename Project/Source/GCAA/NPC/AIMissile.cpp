///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "AIMissile.h"
#include "Camera/CameraShake.h"
#include "Camera/PlayerCameraManager.h"
#include "Components/DecalComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/DecalActor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GCAA/Player/CPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundBase.h"

AAIMissile::AAIMissile(const FObjectInitializer& ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	// Use a sphere as a simple collision representation
	CollisionComponent = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("CollisionComponent"));
	// Set the spheres collision radius
	CollisionComponent->InitSphereRadius(15.0f);
	// Set the root component to be the collision component
	RootComponent = CollisionComponent;

	// Construct Static Mesh Component
	MissileMesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("MissileMesh"));
	MissileMesh->SetupAttachment(RootComponent);

	// Construct Particles Component
	MissileParticles = ObjectInitializer.CreateDefaultSubobject<UParticleSystemComponent>(this, TEXT("MissileParticles"));
	MissileParticles->SetupAttachment(RootComponent);

	// Construct Projectile Movement Component
	ProjectileMovement = ObjectInitializer.CreateDefaultSubobject<UProjectileMovementComponent>(this, TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent				= CollisionComponent;
	ProjectileMovement->InitialSpeed					= 600.f;
	ProjectileMovement->MaxSpeed						= 1000.f;
	ProjectileMovement->HomingAccelerationMagnitude		= 0.f;
	ProjectileMovement->ProjectileGravityScale			= 0.f;
	ProjectileMovement->bRotationFollowsVelocity		= true;
	ProjectileMovement->bInitialVelocityInLocalSpace	= true;
	ProjectileMovement->bShouldBounce					= false;
	ProjectileMovement->bIsHomingProjectile				= false;
	ProjectileMovement->Velocity						= FVector(0, 0, 0);

	// Bind our OnOverlapBegin Event
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AAIMissile::OnOverlapBegin);

	// Adding damage component
	DamageableComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage Component"));

	// Set Default Values for Variables
	fDamageAmount		 = 10.0f;
	fDelayTimer			 = 0.f;
	fLifetimeCountdown	 = 15.f;
	fShakeRadius		 = 200.0f;
	fDecalPositionZ		 = 500.0f;
	fUpwardsLaunchAmount = 1000.0f;
	bHasFinishedDelay	 = false;
	bHasTargetPosition	 = false;
	bHasNoTarget		 = false;
	bCanBeDestroyed		 = false;
	PlayerInWorld		 = NULL;
	Target				 = NULL;
	//playerLocation	 = FVector(0, 0, 0);
}

// Called when the game starts or when spawned
void AAIMissile::BeginPlay()
{
	Super::BeginPlay();

	//FindPlayer();

	GetWorldTimerManager().SetTimer(DecalTimer, this, &AAIMissile::SpawnImpactDecal, 0.1f, true);

	//SpawnImpactDecal();

	// Before we find our target, launch the Missile upwards   
	//if( !bHasTargetPosition )
	//{
		ProjectileMovement->Velocity = GetActorUpVector() * fUpwardsLaunchAmount;
		UGameplayStatics::PlaySoundAtLocation(this, InitiateMissileSound, GetActorLocation(), 0.05f);
		// BeginPlay with collision disabled so that the missile doesn't interact with other actors
		this->SetActorEnableCollision(false);
	//}
}

void AAIMissile::FindPlayer()
{
	//class UWorld* const world = GetWorld();

	//if( world )
	//{
	//	for( TActorIterator<ACPlayer> ObstacleItr(world); ObstacleItr; ++ObstacleItr )
	//	{
	//		FName PlayerTagName = FName(TEXT("Player"));
	//		class ACPlayer* TargetFound = *ObstacleItr;

	//		if( TargetFound != nullptr )
	//		{
	//			if( TargetFound->ActorHasTag(PlayerTagName) )
	//			{
	//				if( PlayerInWorld != TargetFound )
	//				{
	//					PlayerInWorld = TargetFound;
	//				}
	//			}
	//		}
	//	}
	//}
}

// Called every frame
void AAIMissile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	this->SetActorEnableCollision(true);

	//if( !bHasFinishedDelay )
	//{
	//	DelayLogic(DeltaTime);
	//}
	//else
	//{
	//	// If a target is found, move the missile actor toward target
	//	if( bHasTargetPosition )
	//	{
	//		if( Target != NULL )
	//		{
	//			if( Target->IsValidLowLevel() )
	//			{
	//				FVector wantedDir = ( playerLocation - GetActorLocation() ).GetSafeNormal();
	//				wantedDir += Target->GetVelocity() * wantedDir.Size() / 200.f;
	//				ProjectileMovement->Velocity += wantedDir * 700.f * DeltaTime;
	//				ProjectileMovement->Velocity = ProjectileMovement->Velocity.GetSafeNormal() * 200.f;
	//			}
	//			else
	//			{
	//				if( !this->IsPendingKill() )
	//					if( this->IsValidLowLevel() )
	//						K2_DestroyActor();
	//			}
	//		}
	//		else
	//		{
	//			// If a target is NOT found, continue to move the missile actor upwards
	//			if( bHasNoTarget )
	//			{
	//				ProjectileMovement->Velocity = GetActorUpVector() * 200.f;
	//				bHasNoTarget = false;
	//			}
	//		}
	//	}
	//}
}

// This function is for implementing collision
void AAIMissile::OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& hitResult)
{
	// Gets Player object
	class ACPlayer* PlayerCharacter = Cast<ACPlayer>(otherActor);
	// Gets Ground object
	class AStaticMeshActor* GroundActor = Cast<AStaticMeshActor>(otherActor);

	// When Missile has collided with Player
	if( ACPlayer* const player = Cast<ACPlayer>(otherActor) )
	{
		// Gets Damage Component and is applied
		UDamageComponent* pDmgComp = otherActor->FindComponentByClass<UDamageComponent>();
		if( pDmgComp )
		{
			// Calls function that plays audio effect on collision with Player
			ImpactAudio();
			// Calls function that plays particle effect on collision with Player
			ImpactParticles();
			if( this->IsValidLowLevel() )
				// Destroys the Missile
				Destroy();
			// Missile implements damage amount to Player
			pDmgComp->ReceiveDamage(fDamageAmount);
		}
	}

	// When Missile has collided with Ground
	if( GroundActor != nullptr )
	{
		// Gets Player object
		class ACPlayer* PlayerChar = Cast<ACPlayer>(UGameplayStatics::GetPlayerCharacter(this, 0));
		// Calls function that plays audio effect on collision with Ground
		ImpactAudio();
		// Calls function that plays particle effect on collision with Ground
		ImpactParticles();

		// If the distance is less than camera shake radius
		if (GetDistanceTo (PlayerChar) < fShakeRadius )
		{
			// Missile collision to Ground makes Camera shake by getting the Players Camera
			GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartMatineeCameraShake(CamShake, 1.0f);
		}

		if( this->IsValidLowLevel() )
			// Destroys the Missile
			Destroy();
	}
}

// Function that sets how many seconds pass before Missiles come back down, in this case its one second
void AAIMissile::DelayLogic(float deltaTime)
{
	//if( !bHasFinishedDelay )
	//{
	//	// Delay value + one and then times by deltaTime so its framerate compensated
	//	fDelayTimer += 1 * deltaTime;

	//	if( fDelayTimer > 1.f )
	//	{
	//		UpdateTarget();
	//		this->SetActorEnableCollision(true);
	//		bHasFinishedDelay = true;
	//	}
	//}
}

void AAIMissile::UpdateTarget()
{
	//if( !bHasTargetPosition )
	//{
	//	if( PlayerInWorld != NULL )
	//	{
	//		if( PlayerInWorld->IsValidLowLevel() )
	//		{
	//			//playerLocation = PlayerInWorld->GetActorLocation() + FMath::FRandRange(-100, 200);
	//			Target = PlayerInWorld;
	//			bHasTargetPosition = true;
	//			bHasNoTarget = false;

	//			//Keep Our Mesh Rotation Offset
	//			//FRotator rotVal = MissileMesh->GetComponentRotation();
	//			//rotVal.Roll = 0.f;
	//			//rotVal.Pitch = -90.f;
	//			//rotVal.Yaw = 0.f;
	//			//MissileMesh->SetRelativeRotation(rotVal);
	//		}
	//		else
	//		{
	//			Target = nullptr;
	//			bHasTargetPosition = true;
	//			bHasNoTarget = true;
	//		}
	//	}
	//	else
	//	{
	//		Target = nullptr;
	//		bHasTargetPosition = true;
	//		bHasNoTarget = true;
	//	}
	//}
}

void AAIMissile::ImpactParticles()
{
	PlayExplosion(ExplosionSystem);
}

void AAIMissile::ImpactAudio()
{
	PlayExplosionSound(ExplosionSound);
}

void AAIMissile::SpawnImpactDecal()
{
	FHitResult OutHit;

	// Gets the start position of where we want the line trace to begin
	FVector Start = GetActorLocation();
	// Sets the end position of the line trace which is the start position + the Missiles down vector * by how close to the missile we want it to spawn
	FVector End = ( Start + ( -GetActorUpVector() * fDecalPositionZ ) );

	FCollisionQueryParams CollisionParams;

	//if( bHasTargetPosition )
	//{
		//DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 1, 0, 1);

		bool isHit = GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, CollisionParams);

		UGameplayStatics::SpawnDecalAtLocation(GetWorld(), Decal, FVector(50, 50, 60), End, GetActorRotation(), 0.5f);

		if( isHit )
		{
			if( OutHit.bBlockingHit )
			{
				if( OutHit.bBlockingHit )
				{
					//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("You are hitting: %s"), *OutHit.GetActor()->GetName()));
					//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Impact Point: %s"), *OutHit.ImpactPoint.ToString()));
					//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Normal Point: %s"), *OutHit.ImpactNormal.ToString()));
				}
			}
		}
	//}
}

UParticleSystemComponent* AAIMissile::PlayExplosion(UParticleSystem* explosion)
{
	class UParticleSystemComponent* MissilesParticles = NULL;

	if( explosion )
	{
		class UWorld* const world = GetWorld();
		{
			FVector vParticlesPosition	= GetActorLocation();
			FRotator rParticlesRotation	= GetActorRotation();

			MissilesParticles = UGameplayStatics::SpawnEmitterAtLocation(world, explosion, vParticlesPosition, rParticlesRotation, true);
		}
	}
	return MissilesParticles;
}

UAudioComponent* AAIMissile::PlayExplosionSound(USoundBase* sound)
{
	class UAudioComponent* ImpactAudio = NULL;

	if( sound )
		ImpactAudio = UGameplayStatics::SpawnSoundAttached(sound, this->GetRootComponent());

	return ImpactAudio;
}