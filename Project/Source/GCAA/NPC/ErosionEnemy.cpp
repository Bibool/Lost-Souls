///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ErosionEnemy.h"
#include "Components/StaticMeshComponent.h"
#include "GCAA/NPC/AIBullet.h"
#include "GCAA/NPC/AIMissile.h"
#include "GCAA/Player/CPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"

AErosionEnemy::AErosionEnemy(const FObjectInitializer& ObjectInitializer)
{
	LaserParticles = CreateDefaultSubobject<UParticleSystemComponent>(FName("LaserParticles"));

	//fMissileCooldown	= 2.0f;
	//fMissileStop		= 0.1f;
	//fBulletCooldown		= 1.0f;
	fLaserStop			= 3.0f;
	//fLaserCooldown		= 1.0f;
	iNumberOfMissiles	= 5;
	//bCanUseMissile		= true;
	//bCanUseBullet		= true;
}

AErosionEnemy::~AErosionEnemy()
{

}

// Called when the game starts or when spawned
void AErosionEnemy::BeginPlay()
{
	Super::BeginPlay();
	//InitMissileLaunch();
	//InitBulletLaunch();

	// Gets Player object
	PlayerCharacter = Cast<ACPlayer>(UGameplayStatics::GetPlayerCharacter(this, 0));

	//FVector const PlayerLoc = PlayerCharacter->GetActorLocation();
}

// Called every frame
void AErosionEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//void AErosionEnemy::InitMissileLaunch()
//{
//	//bCanUseMissile = true;
//	//GetWorldTimerManager().SetTimer(MissileHandle, this, &AErosionEnemy::SpawnMissile, fMissileCooldown, false);
//}

void AErosionEnemy::SpawnMissile()
{
	//if( bCanUseMissile )
	//{
	// Missile position above Enemy
	vMissilePosition = GetActorRightVector() - 350;
	vMissilePosition2 = GetActorRightVector() - 350;

	if( MissileClass != NULL )
	{
		class UWorld* const world = GetWorld();
		if( world != NULL )
		{
			for( int i = 0; i < iNumberOfMissiles; i++ )
			{
				FVector vCurrentPos = FVector(GetActorLocation().X + vMissilePosition.X, GetActorLocation().Y + vMissilePosition.Y + 200, GetActorLocation().Z);
				FRotator rCurrentRot = FRotator(0, 0, 0);

				FActorSpawnParameters spawnParams;
				spawnParams.Owner = this;

				class AAIMissile* FiredMissile = world->SpawnActor<AAIMissile>(MissileClass, vCurrentPos, rCurrentRot, spawnParams);

				vMissilePosition = vMissilePosition + ( GetActorRightVector() + 130 );

				for( int j = 0; j < 1; j++ )
				{
					FVector currentPosition = FVector(GetActorLocation().X + vMissilePosition2.X, GetActorLocation().Y + vMissilePosition2.Y + 500, GetActorLocation().Z);
					FRotator currentRotation = FRotator(0, 0, 0);

					FActorSpawnParameters spawnParamss;
					spawnParamss.Owner = this;

					class AAIMissile* FiredMissiles = world->SpawnActor<AAIMissile>(MissileClass, currentPosition, currentRotation, spawnParamss);

					vMissilePosition2 = vMissilePosition2 + ( GetActorRightVector() + 130 );

					//FiredMissile->setTargetLocation(FiredMissile->GetTargetLocation() + FMath::FRandRange (-100, 200));

					//if( FiredMissile != nullptr )
					//{
					//	// Set Mesh Rotation Offset
					//	FRotator meshRot = FiredMissile->MissileMesh->GetComponentRotation();
					//	meshRot.Roll = 0.f;
					//	meshRot.Pitch = -90.f;
					//	meshRot.Yaw = 0.f;
					//	FiredMissile->MissileMesh->SetRelativeRotation(meshRot);
					//}
					//bCanUseMissile = false;
					//GetWorldTimerManager().SetTimer(UnusedHandle, this, &AErosionEnemy::StopSpawningMissile, fMissileStop, false);
				}
			}
		}
	}
}

//void AErosionEnemy::StopSpawningMissile()
//{
//	//GetWorldTimerManager().SetTimer(UnusedHandle, this, &AErosionEnemy::InitMissileLaunch, fMissileCooldown, false);
//}

//void AErosionEnemy::InitBulletLaunch()
//{
	//bCanUseBullet = true;
	//LaserParticles->Activate();
	//GetWorldTimerManager().SetTimer(BulletHandle, this, &AErosionEnemy::SpawnBullet, fBulletCooldown, false);
//}

void AErosionEnemy::SpawnBullet()
{
	//if( bCanUseBullet )
	{
		if( BulletClass != NULL )
		{
			class UWorld* const world = GetWorld();

			if( world != NULL )
			{
					// Gets curent position of Enemy which is the start point for the Bullet to spawn and gets their rotation
					FVector vCurrentPos = GetActorLocation();
					FRotator rCurrentRot = FRotator(GetActorRotation());

					FActorSpawnParameters spawnParams;
					spawnParams.Owner = this;

					//LaserParticles->SetBeamSourcePoint(0, GetActorLocation(), 0);
					//LaserParticles->SetBeamTargetPoint(0, PlayerCharacter->GetActorLocation(), 0);
					// Spawn Bullet at Enemy location
					class AAIBullet* FiredBullet = world->SpawnActor<AAIBullet>(BulletClass, vCurrentPos, rCurrentRot, spawnParams);

					// When Bullet is spawned, calls this function where the Sniper Laser deactivates
					StopLaser();
					// Calls this function to play Bullet sound when fired
					PlayBulletAudio();
					//FiredBullet->setTargetLocation(PlayerCharacter->GetActorLocation());
					//if( FiredBullet != nullptr )
					//{
					//	// Set Mesh Rotation Offset
					//	FRotator meshRot = FiredBullet->ProjectileMeshComponent->GetComponentRotation();
					//	meshRot.Roll = 0.f;
					//	meshRot.Pitch = -90.f;
					//	meshRot.Yaw = 0.f;
					//	FiredBullet->ProjectileMeshComponent->SetRelativeRotation(meshRot);
					//}
					//bCanUseBullet = false;
					//GetWorldTimerManager().SetTimer(UnusedHandle, this, &AErosionEnemy::StopSpawningBullet, fBulletStop, false);
				//}
			}
		}
	}
}

void AErosionEnemy::PlayBulletAudio()
{
	UGameplayStatics::PlaySoundAtLocation(this, SpawnBulletSound, GetActorLocation(), 1.0f);
}

//void AErosionEnemy::StopSpawningBullet()
//{
//	//GetWorldTimerManager().SetTimer(UnusedHandle, this, &AErosionEnemy::InitBulletLaunch, fBulletCooldown, false);
//	//LaserParticles->DeactivateSystem();
//}

void AErosionEnemy::InitiateLaser()
{
	LaserParticles->Activate();
	PlayLaserAudio();
}

void AErosionEnemy::PlayLaserAudio()
{
	UGameplayStatics::PlaySoundAtLocation(this, InitiateLaserSound, GetActorLocation(), 5.0f);
}

void AErosionEnemy::SetLaserTargetPoint(FVector Location)
{
	LaserParticles->SetBeamTargetPoint(0, Location, 0);
}

void AErosionEnemy::SpawnLaser()
{
	InitiateLaser();
	LaserParticles->SetBeamSourcePoint(0, GetActorLocation(), 0);
	LaserParticles->SetBeamTargetPoint(0, PlayerCharacter->GetActorLocation(), 0);
	GetWorldTimerManager().SetTimer(LaserHandle, this, &AErosionEnemy::SpawnBullet, fLaserStop, false);
}

void AErosionEnemy::StopLaser()
{
	LaserParticles->DeactivateSystem();
}