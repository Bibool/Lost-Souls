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
	ACPlayer*			PlayerCharacter;

protected:

	// Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	// Called every frame.
	void Tick(float DeltaTime);

public:
	// Sets default values for this actors properties.
	AErosionEnemy(const FObjectInitializer& ObjectInitializer);
	~AErosionEnemy();

	// Function that spawns the Missiles
	void		SpawnMissile();

	// Function that spawns the Bullet
	void		SpawnBullet();

	void		PlayBulletAudio();

	// Function that spawns the Sniper Laser
	void		SpawnLaser();
	// Function that initiates the Sniper Laser
	void		InitiateLaser();
	void		StopLaser();
	void		PlayLaserAudio();

	// Function that sets what we want the Lasers target to be
	void		SetLaserTargetPoint(FVector Location);

	// Vector to set the position we want the Missiles to spawn, also used to set the distance between Missiles
	FVector		vMissilePosition;
	// Vector to set the position we want the second row of Missiles to spawn, also used to set the distance between Missiles
	FVector		vMissilePosition2;

	// Int to set how many Missiles
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Missile")
	int			iNumberOfMissiles;

	// Bullet shot sound
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
	USoundBase* SpawnBulletSound;

	// Laser initiated sound
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
	USoundBase* InitiateLaserSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Laser")
	float		fLaserStop;

	UPROPERTY()
	FTimerHandle LaserHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Laser")
	UParticleSystemComponent* LaserParticles;

	UPROPERTY(EditAnywhere, Category = "Missiles");
	TSubclassOf<class AAIMissile> MissileClass;

	UPROPERTY(EditAnywhere, Category = "Bullet");
	TSubclassOf<class AAIBullet> BulletClass;
};