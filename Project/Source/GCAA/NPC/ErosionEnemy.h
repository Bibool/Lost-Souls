///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "MovingNpc.h"
#include "Sound/SoundBase.h"
#include "ErosionEnemy.generated.h"

class ACPlayer;

UCLASS()
class GCAA_API AErosionEnemy : public AMovingNpc
{
	GENERATED_BODY()

private:
	// Timer handle for repeating Projectile fire.
	//FTimerHandle MissileHandle;
	//FTimerHandle BulletHandle;
	//AAIMissile* Missile;

	ACPlayer*			PlayerCharacter;

	//FVector playerLocation;

	//UAudioComponent*	SpawnBulletComponent;

protected:

	// Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	// Called every frame.
	void Tick(float DeltaTime);

public:
	// Sets default values for this actors properties.
	AErosionEnemy(const FObjectInitializer& ObjectInitializer);
	~AErosionEnemy();

	//void InitMissileLaunch();
	// Function that spawns the Missiles
	void		SpawnMissile();
	//void StopSpawningMissile();

	// Function that spawns the Bullet
	void		SpawnBullet();
	// Function that initiates Bullet launch
	//void		InitBulletLaunch();
	//void StopSpawningBullet();
	void		PlayBulletAudio();

	// Function that spawns the Sniper Laser
	void		SpawnLaser();
	// Function that initiates the Sniper Laser
	void		InitiateLaser();
	void		StopLaser();
	void		PlayLaserAudio();

	// Function that sets what we want the Lasers target to be
	void		SetLaserTargetPoint(FVector Location);

	//FVector		SpawnLocation;
	// Vector to set the position we want the Missiles to spawn, also used to set the distance between Missiles
	FVector		vMissileDistance;
	// Vector to set the position we want the second row of Missiles to spawn, also used to set the distance between Missiles
	FVector		vMissileDistance2;

	//FVector		m_spawnPoint;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Missile")
	//float		fMissileCooldown;

	//float		fMissileStop;

	//bool		bCanUseMissile;

	// Int to set how many Missiles
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Missile")
	int			iNumberOfMissiles;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Bullet")
	//float		fBulletCooldown;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Laser")
	//float		fLaserCooldown;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
	//	class USoundCue* SpawnBulletSoundCue;

	// Bullet shot sound
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
	USoundBase* SpawnBulletSound;

	// Laser initiated sound
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
	USoundBase* InitiateLaserSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Laser")
	float		fLaserStop;

	//bool		bCanUseBullet;

	//float		fBulletWait;

	UPROPERTY()
	FTimerHandle LaserHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Laser")
	UParticleSystemComponent* LaserParticles;

	UPROPERTY(EditAnywhere, Category = "Missiles");
	TSubclassOf<class AAIMissile> MissileClass;

	UPROPERTY(EditAnywhere, Category = "Bullet");
	TSubclassOf<class AAIBullet> BulletClass;
};