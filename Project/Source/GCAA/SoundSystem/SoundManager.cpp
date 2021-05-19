// Fill out your copyright notice in the Description page of Project Settings.


#include "SoundManager.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"
#include "GameFramework/Actor.h"
#include "GCAA/Player/CPlayer.h"

#define DEBUGLOG(text) UE_LOG(LogTemp, Warning, TEXT(text));

// Sets default values
ASoundManager::ASoundManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder iTeleport(TEXT("/GCAA/SoundSystem/Main_Theme"));
	//USoundCue* MainS = iTeleport.Object;

	//static ConstructorHelpers::FObjectFinder<USoundCue>MainSCueObject(TEXT("SoundCue'/Game/Sounds/Main_SoundCue.Main_SoundCue'"));
	//if (MainSCueObject.Succeeded())
	//{
		//MainSCue = MainSCueObject.Object;

		//MainAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("MainAudioComponent"));
		//MainAudioComponent->SetupAttachment(RootComponent);
		//MainAudioComponent->SetSound(MainSCue);
	//}
}

// Called when the game starts or when spawned
void ASoundManager::BeginPlay()
{ 
	Super::BeginPlay();
	
	VMainS();
}

// Called every frame
void ASoundManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Sound Functions to run the sound, are called where/when needed in other classes

void ASoundManager::VMainS()
{
	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);

	ACPlayer* pPlayer = Cast<ACPlayer>(pCharacter);
	
	//AActor* OwningActor = UGameplayStatics::GetPlayerCharacter(this, 0);
	//pCharacter = .CreateDefaultSubobject<UCapsuleComponent>(this, TEXT("CollisionCylinder"));
	//RootComponent = pCharacter;
	//pPlayer->ActorToWorld();
	//UGameplayStatics::PlaySoundAtLocation(this, MainS, GetOwner()->GetActorLocation());
	UGameplayStatics::SpawnSoundAtLocation(this, MainS, pPlayer->GetActorLocation());
	//AActor* pCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	//UGameplayStatics::PlaySound2D(pCharacter, MainS, 1.0f, 1.0f, 0);
	DEBUGLOG("Sound Working");

	//UAudioComponent* AudioComponent = UGameplayStatics::SpawnSoundAtLocation(this, MainS, location, FRotator::ZeroRotator, volume_multiplier, pitch_amount, 0.0f, nullptr, nullptr, true); 
}

void ASoundManager::VCombatS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, CombatS, GetActorLocation());
}

void ASoundManager::VFootstepSinS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, FootstepSinS, GetActorLocation());
}

void ASoundManager::VFootstepColS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, FootstepColS, GetActorLocation());
}

void ASoundManager::VJumpingS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, JumpingS, GetActorLocation());
}

void ASoundManager::VPlayerHurtS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, PlayerHurtS, GetActorLocation());
}

void ASoundManager::VPlayerDeathS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, PlayerDeathS, GetActorLocation());
}

void ASoundManager::VPlayerDashS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, PlayerDashS, GetActorLocation());
}

void ASoundManager::VAutoAttacks1S()
{
	UGameplayStatics::SpawnSoundAtLocation(this, AutoAttacks1S, GetActorLocation());
}

void ASoundManager::VFireballS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, FireballS, GetActorLocation());
}

void ASoundManager::VFireballColS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, FireballColS, GetActorLocation());
}

void ASoundManager::VLightningBolt1S()
{
	UGameplayStatics::SpawnSoundAtLocation(this, LightningBolt1S, GetActorLocation());
}

void ASoundManager::VPurifyS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, PurifyS, GetActorLocation());
}

void ASoundManager::VWindblastS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, WindblastS, GetActorLocation());
}

void ASoundManager::VBlinkS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, BlinkS, GetActorLocation());
}

void ASoundManager::VPushingBlocksS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, PushingBlocksS, GetActorLocation());
}

void ASoundManager::VOpeningDoorsS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, OpeningDoorsS, GetActorLocation());
}

void ASoundManager::VCollectionS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, CollectionS, GetActorLocation());
}

void ASoundManager::VMovingPlatformsS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, MovingPlatformsS, GetActorLocation());
}

void ASoundManager::VStatueRotatingS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, StatueRotatingS, GetActorLocation());
}

void ASoundManager::VStatueAttackS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, StatueAttackS, GetActorLocation());
}

void ASoundManager::VPyroxenesFoostepsS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, PyroxenesFoostepsS, GetActorLocation());
}

void ASoundManager::VPyroxenesChargingS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, PyroxenesChargingS, GetActorLocation());
}

void ASoundManager::VPyroxenesAttackS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, PyroxenesAttackS, GetActorLocation());
}

void ASoundManager::VMantleShotgunAttackS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, MantleShotgunAttackS, GetActorLocation());
}

void ASoundManager::VMantleChargeRoarS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, MantleChargeRoarS, GetActorLocation());
}

void ASoundManager::VMantleChargeS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, MantleChargeS, GetActorLocation());
}

void ASoundManager::VMantleLeapSoundS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, MantleLeapSoundS, GetActorLocation());
}

void ASoundManager::VMantleLeapLandS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, MantleLeapLandS, GetActorLocation());
}

void ASoundManager::VErosionSniperS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, ErosionSniperS, GetActorLocation());
}

void ASoundManager::VErosionFiringMissilesS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, ErosionFiringMissilesS, GetActorLocation());
}

void ASoundManager::VErosionMissilesCollidingS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, ErosionMissilesCollidingS, GetActorLocation());
}

void ASoundManager::VEnemyFloatingS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, EnemyFloatingS, GetActorLocation());
}

void ASoundManager::VUnavalaibleInteractionS()
{
	UGameplayStatics::SpawnSoundAtLocation(this, UnavalaibleInteractionS, GetActorLocation());
}

