// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SoundManager.generated.h"

UCLASS()
class GCAA_API ASoundManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASoundManager();

	// Sounds UPROPERTIES

	// Main Theme Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* MainS;

	UPROPERTY(EditAnywhere, Category = "Audio")
		class USoundCue* MainSCue;

	// Combat Theme Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* CombatS;

	// Footstep Singular Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* FootstepSinS;

	// Footstep Collection Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* FootstepColS;

	// Jumping Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* JumpingS;

	// Player Hurt Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* PlayerHurtS;

	// Player Death Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* PlayerDeathS;

	// Player Dash Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* PlayerDashS;

	// Auto Attacks Varient 1 Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* AutoAttacks1S;

	// Fireball Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* FireballS;

	// Fireball Collision Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* FireballColS;

	// Lightning Bolt Varient 1 Sound 
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* LightningBolt1S;

	// Purify Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* PurifyS;

	// Windblast Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* WindblastS;

	// Blink Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* BlinkS;

	// Pushing Blocks Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* PushingBlocksS;

	// Opening Doors Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* OpeningDoorsS;

	// Collection Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* CollectionS;

	// Moving Platforms Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* MovingPlatformsS;

	// Statue Rotating Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* StatueRotatingS;

	// Statue Attack Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* StatueAttackS;

	// Pyroxenes Footsteps Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* PyroxenesFoostepsS;

	// Pyroxenes Charging Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* PyroxenesChargingS;

	// Pyroxenes Attack Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* PyroxenesAttackS;

	// Mantle Shotgun Attack Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* MantleShotgunAttackS;

	// Mantle Charge Roar Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* MantleChargeRoarS;

	// Mantle Charge Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* MantleChargeS;

	// Mantle Leap Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* MantleLeapSoundS;

	// Mantle Leap Land Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* MantleLeapLandS;

	// Erosion Sniper Firing Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* ErosionSniperS;

	// Erosion Firing Missiles Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* ErosionFiringMissilesS;

	// Erosion Missiles Colliding Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* ErosionMissilesCollidingS;

	// Enemy Floating Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* EnemyFloatingS;

	// Unavailable Interaction Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* UnavalaibleInteractionS;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sound Functions

	// Main Theme Sound Function
	void VMainS();

	// Combat Theme Sound Function
	void VCombatS();

	// Footstep Singular Sound Function
	void VFootstepSinS();

	// Footstep Collection Sound Function
	void VFootstepColS();

	// Jumping Sound Function
	void VJumpingS();

	// Player Hurt Sound Function
	void VPlayerHurtS();

	// Player Death Sound Function
	void VPlayerDeathS();

	// Player Dash Sound Function
	void VPlayerDashS();
	
	// Auto Attacks Varient 1 Sound Function
	void VAutoAttacks1S();

	// Fireball Sound Function
	void VFireballS();

	// Fireball Collision Sound Function
	void VFireballColS();

	// Lightning Bolt Varient 1 Sound Function
	void VLightningBolt1S();

	// Purify Sound Function
	void VPurifyS();

	// Windblast Sound Function
	void VWindblastS();

	// Blink Sound Function
	void VBlinkS();

	// Pushing Blocks Sound Function
	void VPushingBlocksS();

	// Opening Doors Sound Function
	void VOpeningDoorsS();

	// Collection Sound Function
	void VCollectionS();

	// Moving Platforms Sound Function
	void VMovingPlatformsS();

	// Statue Rotating Sound Function
	void VStatueRotatingS();
	
	// Statue Attack Sound Function
	void VStatueAttackS();

	// Pyroxenes Footsteps Sound Function
	void VPyroxenesFoostepsS();

	// Pyroxenes Charging Sound Function
	void VPyroxenesChargingS();

	// Pyroxenes Attack Sound Function
	void VPyroxenesAttackS();

	// Mantle Shotgun Attack Sound Function
	void VMantleShotgunAttackS();

	// Mantle Charge Roar Sound Function
	void VMantleChargeRoarS();

	// Mantle Charge Sound Function
	void VMantleChargeS();

	// Mantle Leap Sound Function
	void VMantleLeapSoundS();

	// Mantle Leap Land Sound Function
	void VMantleLeapLandS();

	// Erosion Sniper Firing Sound Function
	void VErosionSniperS();

	// Erosion Firing Missiles Sound Function
	void VErosionFiringMissilesS();

	// Erosion Missiles Colliding Sound Function
	void VErosionMissilesCollidingS();

	// Enemy Floating Sound Function
	void VEnemyFloatingS();

	// Unavailable Interaction Sound Function
	void VUnavalaibleInteractionS();

private:
	UAudioComponent* MainAudioComponent;


};
