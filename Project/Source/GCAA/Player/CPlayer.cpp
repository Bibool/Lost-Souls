// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlayer.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GCAA/Enumerators/ESpellType.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Blueprint/UserWidget.h"
#include "GCAA/SaveSystem/SaveSystem.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GCAA/NPC/aiTags.h"
#include "Perception/AISense_Hearing.h"
#include "GCAA/UI/PlayerUI.h"
#include "GCAA/NPC/BaseNpc.h"
#include "Sound/SoundBase.h"
#include "GCAA/SoundSystem/SoundManager.h"

#define DEBUGLOG(text) UE_LOG(LogTemp, Warning, TEXT(text));
#define ONSCREENDEBUG(text) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT(text));
#define ONSCREENDEBUGNUM(num) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%f"), num));

FPlayerExitsPushingDelegate::FPlayerExitsPushingSignature FPlayerExitsPushingDelegate::FExitPushing;

FPlayerInteractingDelegate::FPlayerInteractingSignature FPlayerInteractingDelegate::FPlayerInteracting;

FPlayerPauseGameDelegate::FPlayerPauseGameSignature FPlayerPauseGameDelegate::FPlayerPauseGame;

// Sets default values
ACPlayer::ACPlayer()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize( 42.f, 96.0f );

	// set our turn rates for input
	m_fBaseTurnRateMultiplier = 45.f;
	m_fBaseLookUpRateMultiplier = 45.f;


	////////////////////////////////
	// Custom Camera Values
	m_fLineTraceDepth			= 5000.f;
	m_fCameraLockZOffSet		= 65.f;
	m_fCameraLockToSpeed		= 5.f;
	m_bLockedOn				= false;
	m_v3DepthLocation			= (FVector::ZeroVector);
	
	////////////////////////////////
	// Ability related variables

	m_bIsAutoAttackOnCD		= false;
	m_bIsAbility1OnCD		= false;
	m_bIsAbility2OnCD		= false;
	m_bIsAbility3OnCD		= false;
	m_bIsAbility4OnCD		= false;
	////////////////////////////////

	////////////////////////////////
	// Movement related variables
	bCanDodge				= true;
	fDodgeDistance			= 6000.f;
	fDodgeCooldown			= 1.0f;
	fDodgeStop				= 0.1f;

	fJumpHeight				= 600.f;

	fWalkingSpeed			= 600.f;
	fSprintSpeed			= 1000.f;

	fMaxAllowedAngleToPushInDegrees = 30.0f;
	////////////////////////////////
	///
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator( 0.0f, 540.0f, 0.0f ); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>( TEXT( "CameraBoom" ) );
	CameraBoom->SetupAttachment( RootComponent );
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>( TEXT( "FollowCamera" ) );
	FollowCamera->SetupAttachment( CameraBoom, USpringArmComponent::SocketName ); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	SpellSpawnLocation = CreateDefaultSubobject<USceneComponent>( TEXT( "SpellSpawnLocation" ) );
	AutoLeftLocation = CreateDefaultSubobject<USceneComponent>( TEXT( "Left Auto Attack Firing Location" ) );
	AutoRightLocation = CreateDefaultSubobject<USceneComponent>( TEXT( "Right Auto Attack Firing Location" ) );

	// Create component for the player inventory.
	pPlayerInventory = CreateDefaultSubobject<UCPlayerInventory> ( TEXT("Inventory") );

	// Create component for the player journal.
	pPlayerJournal = CreateDefaultSubobject<UCPlayerJournal> ( TEXT("Journal") );

	// Create the damage component.
	DamageableComponent = CreateDefaultSubobject<UDamageComponent>( TEXT("Damage Component"));


	bGameIsPaused = false;
	bIsPushing = false;

	//////////////////////////////////
	// Upgrade System 
	bUpgradeSystemUiActivated = false;
	UpgradeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("UpgradeBox"));
	//UpgradeBox->SetupAttachment(RootComponent);
	//////////////////////////////////

	//////////////////////////////////
	// Sound Variables
	bMainThemeActivated = true;
	bIsWalking = false;
	fFootstepTimeShiftDefault = 0.325f;
	fFootstepTimeShift = fFootstepTimeShiftDefault;
	fPreviousWorldTime = 0.0f;
	//////////////////////////////////

	// Initialize counter to 0.
	m_iSpawnCounter = 0;
}

void ACPlayer::VOnDeath()
{
	OnDeath_BP();

	// Play Death Sound
	PlayDeathAudio();
}


// Called when the game starts or when spawned
void ACPlayer::BeginPlay()
{
	Super::BeginPlay();

	m_fStoredFoV = GetFollowCamera()->FieldOfView;
	
	// Upgrade System Display on collision
	//UpgradeBox->OnComponentBeginOverlap.AddDynamic(this, &ACPlayer::OnOverlapBegin);

	// Play Main Theme Sound
	PlayMainThemeAudio();

	SpellSpawnLocation->AttachToComponent( GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "spell_fire_location" );
	AutoLeftLocation->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "hand_lSocket");
	AutoRightLocation->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "hand_rSocket");

	/////////////////////////////////////////////////////////////////////////////////////////////////////

	if ( WBP_Player_UI )
	{
		m_pcPlayerUI = CreateWidget<UPlayerUI>( GetWorld(), WBP_Player_UI );
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////

	/////////////////////////////////////////////////////////////////////////////////////////////////////

	if (GetWorld() && BP_SpawnableManager)
	{		
		DEBUGLOG( "World is valid, spawning Spell Manager." );
		
		FActorSpawnParameters SpawnInfo;
		m_pcSpellManager = GetWorld()->SpawnActor<ASpellManager>( BP_SpawnableManager->GetAuthoritativeClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnInfo );
		m_pcSpellManager->SetPlayerReference( this );

		m_pcPlayerUI->SetCPlayer( this );
		m_pcPlayerUI->SetSpellManager( m_pcSpellManager );
		m_pcSpellManager->RequestUIResourcesUpdate( m_pcPlayerUI );

		DrawUI();
	}
	else
	{
		DEBUGLOG( "World or Manager was null, therefore not spawning manager" );
	}

	// Listener event handler to trigger game pause and journal entry display when collected.
	FJournalItemAdded::FJournalItemHasBeenAdded.AddUObject ( this, &ACPlayer::PauseGameAndDisplayJournalMenu);

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPlayer::PauseGameAndDisplayJournalMenu (int iJournalPageToDisplay)
{
	
	if (!bGameIsPaused)
	{

		// Get the player controller - to be used to set the mouse on/off properties.
		APlayerController* const pPlayerController = Cast<APlayerController> ( UGameplayStatics::GetPlayerController ( this, 0 ) );

		UGameplayStatics::SetGamePaused ( GetWorld (), true );
		bGameIsPaused = true;

		//-------------------------------------------
		if (UI_JournalMenu)
		{
						
			pJournalMenuUI = CreateWidget<UJournalMenuUI> ( GetWorld (), UI_JournalMenu );
			pJournalMenuUI->AddToViewport ();
			pJournalMenuUI->JournalMenuWasDisplayedInstantlyOnPickup = true;
			pJournalMenuUI->UpdateJournal ( iJournalPageToDisplay );

			// Set focus from game to UI so player not have to click on Widget first before selecting option.
			FInputModeUIOnly cInputModeUI;
			cInputModeUI.SetWidgetToFocus ( pJournalMenuUI->TakeWidget () );
			pPlayerController->SetInputMode ( cInputModeUI );

		}
		
		// Turn the mouse on.
		if (pPlayerController)
		{
			pPlayerController->bShowMouseCursor = true;
			pPlayerController->bEnableClickEvents = true;
			pPlayerController->bEnableMouseOverEvents = true;
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPlayer::PauseGame ()
{
	// New method to refactor pause menu out of player class.

	FPlayerPauseGameDelegate::FPlayerPauseGame.Broadcast ();

	// Desactivate Main Theme Sound
	bMainThemeActivated = false;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPlayer::PauseGameAndDisplayOptionsMenu ()
{
	if (!bGameIsPaused)
	{

		// Get the player controller - to be used to set the mouse on/off properties.
		APlayerController* const pPlayerController = Cast<APlayerController> ( UGameplayStatics::GetPlayerController ( this, 0 ) );

		UGameplayStatics::SetGamePaused ( GetWorld (), true );
		bGameIsPaused = true;

		//-------------------------------------------
		if (UI_PauseMenu)
		{
			pPauseMenuUI = CreateWidget<UPauseMenuUI> ( GetWorld (), UI_PauseMenu );
			pPauseMenuUI->AddToViewport ();

			// Set focus to game and UI so player not have to click on Widget first before selecting option.
			FInputModeGameAndUI cInputModeUI;
			cInputModeUI.SetWidgetToFocus ( pPauseMenuUI->TakeWidget () );
			pPlayerController->SetInputMode ( cInputModeUI );

		}
		//-------------------------------------------
		
		if (UI_Inventory)
		{
			pInventoryUI = CreateWidget<UPlayerInventoryUI> ( GetWorld (), UI_Inventory );
			pInventoryUI->AddToViewport ();
			pInventoryUI->UpdateInventory ( pPlayerInventory );
			pPauseMenuUI->AddPointerToPlayerInventory ( pInventoryUI );
		}
				
		// Turn the mouse on.
		if (pPlayerController)
		{
			pPlayerController->bShowMouseCursor = true;
			pPlayerController->bEnableClickEvents = true;
			pPlayerController->bEnableMouseOverEvents = true;
		}
	}
	else
	{
		ResumeGameFromOptionsMenu ();

	}


}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPlayer::ResumeGameFromOptionsMenu ()
{
	// Get the player controller - to be used to set the mouse on/off properties.
	APlayerController* const pPlayerController = Cast<APlayerController> ( UGameplayStatics::GetPlayerController ( this, 0 ) );

	//-------------------------------------------
	if (UI_PauseMenu)
	{
		pPauseMenuUI->RemoveFromViewport ();
	}
	//-------------------------------------------

	if (pInventoryUI)
	{
		pInventoryUI->RemoveFromViewport ();
		pInventoryUI->ClearInventory ();

		// Resume focus to game from UI
		FInputModeGameOnly cInputModeGame;
		pPlayerController->SetInputMode ( cInputModeGame );
	}

	// Turn the mouse off.
	if (pPlayerController)
	{
		pPlayerController->bShowMouseCursor = false;
		pPlayerController->bEnableClickEvents = false;
		pPlayerController->bEnableMouseOverEvents = false;
	}

	bGameIsPaused = false;
	UGameplayStatics::SetGamePaused ( GetWorld (), false );

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPlayer::ResumeGameFromJournalMenu ()
{
	// Get the player controller - to be used to set the mouse on/off properties.
	APlayerController* const pPlayerController = Cast<APlayerController> ( UGameplayStatics::GetPlayerController ( this, 0 ) );

	//-------------------------------------------
	if (UI_JournalMenu)
	{
		pJournalMenuUI->RemoveFromViewport ();
	}

	// Resume focus to game from UI
	FInputModeGameOnly cInputModeGame;
	pPlayerController->SetInputMode ( cInputModeGame );

	
	// Turn the mouse off.
	if (pPlayerController)
	{
		pPlayerController->bShowMouseCursor = false;
		pPlayerController->bEnableClickEvents = false;
		pPlayerController->bEnableMouseOverEvents = false;
	}

	bGameIsPaused = false;
	UGameplayStatics::SetGamePaused ( GetWorld (), false );

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPlayer::DropItem ()
{
	UCharacterMovementComponent* MovementComp = GetCharacterMovement ();

	if (pPlayerInventory)
	{
		if (MovementComp)
		{
			// Drop items not allowed if player is currently not on the ground.
			if (!MovementComp->IsFalling () && !MovementComp->IsFlying ())
			{
				pPlayerInventory->RemoveLastItemCollectedFromInventory ();
			}
		}
		else
		{
			DEBUGLOG ( "Movement Component is null" );
		}
	}
	else
	{
		DEBUGLOG ( "Player Inventory is null" );
	}
}

#pragma region UpgradeSystem

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Skill upgrade
/// Skill upgrade option (0 = lower delay, 1 = more damage)
void ACPlayer::UpgradeSkill(int upgradeIndex, float multiplier)
{
	UE_LOG(LogTemp, Warning, TEXT("Upgrading Skill ..."));
	UE_LOG(LogTemp, Warning, TEXT("Success."));

	switch (upgradeIndex)
	{
	case 0: // Called by pressing X button
		// Delay reduction - Multiply the cooldown
		m_pcSpellManager->FireBallStats.Cool_Down = m_pcSpellManager->FireBallStats.Cool_Down * multiplier;
		m_pcSpellManager->ChainLightningStats.Cool_Down = m_pcSpellManager->ChainLightningStats.Cool_Down * multiplier;
		UE_LOG(LogTemp, Warning, TEXT("[Skill Upgrade] Skill Cooldown was changed to %f s."), m_pcSpellManager->FireBallStats.Cool_Down);
		break;

	case 1: // Called by pressing V button
		// Damage increase - Multiply the damage
		// To look at : ASpellManager::SetACFireBallStats(FCFireBallStatsStruct sStats);
		m_pcSpellManager->FireBallStats.Splash_Damage = m_pcSpellManager->FireBallStats.Splash_Damage * multiplier;
		m_pcSpellManager->ChainLightningStats.Fork_Damage = m_pcSpellManager->ChainLightningStats.Fork_Damage * multiplier;
		UE_LOG(LogTemp, Warning, TEXT("[Skill Upgrade] Skill damage was changed to %f."), m_pcSpellManager->FireBallStats.Splash_Damage);
		break;
	}

	// Bib Edit - 19/05/2021 - Remove the call to the populate spell.
	// Reload the spell with the news spellStats values
	//pcSpellManager->PopulateSpells();
}

void ACPlayer::ResetSkills()
{
	// Reset default values of the skills
	// To Do
	// Get Stats values before making changes on the skills
	// Set the Stats with the default ones
}

void ACPlayer::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("UpgradeSystem")) 
	{
		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
		//DisplayUpgradeSystemMenu();
	}
}

// Call this function when the player overlaps with the UpgradeSystemBox 
void ACPlayer::DisplayUpgradeSystemMenu()
{
	if (!bGameIsPaused)
	{
		// Get the player controller - to be used to set the mouse on/off properties.
		APlayerController* const pPlayerController = Cast<APlayerController>(UGameplayStatics::GetPlayerController(this, 0));

		UGameplayStatics::SetGamePaused(GetWorld(), true);
		bGameIsPaused = true;

		UUserWidget* Widget = CreateWidget(GetWorld(), UpgradeMenuWidgetClass);
		if (Widget)
		{
			Widget->AddToViewport();
		}

		// Turn the mouse on.
		if (pPlayerController)
		{
			pPlayerController->bShowMouseCursor = true;
			pPlayerController->bEnableClickEvents = true;
			pPlayerController->bEnableMouseOverEvents = true;
		}
	}
	else
	{
		ResumeGameFromUpgradeSystemMenu();
	}
}

void ACPlayer::ResumeGameFromUpgradeSystemMenu()
{
	// Get the player controller - to be used to set the mouse on/off properties.
	APlayerController* const pPlayerController = Cast<APlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	
	// Resume focus to game from UI
	FInputModeGameOnly cInputModeGame;
	pPlayerController->SetInputMode(cInputModeGame);

	// Turn the mouse off.
	if (pPlayerController)
	{
		pPlayerController->bShowMouseCursor = false;
		pPlayerController->bEnableClickEvents = false;
		pPlayerController->bEnableMouseOverEvents = false;
	}

	bGameIsPaused = false;
	UGameplayStatics::SetGamePaused(GetWorld(), false);
}

void ACPlayer::CallUpgradeSkillDelay()
{
	ACPlayer::UpgradeSkill(0, 0.1f);
}

void ACPlayer::CallUpgradeSkillDamage()
{
	ACPlayer::UpgradeSkill(1, 10.0f);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma endregion UpgradeSystem

// Called every frame
void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
		
	LineTrace();
	LockOn( DeltaTime );
}

void ACPlayer::LineTrace()
{
	const FVector CurrentCameraPos = GetFollowCamera()->GetComponentLocation();
	const FVector CameraForwardVector = GetFollowCamera()->GetForwardVector();
	const FVector MultipliedForwardVector = CameraForwardVector * m_fTargetDistance;
	m_v3DepthLocation = CurrentCameraPos + MultipliedForwardVector;
	m_v3DepthLocation = FVector(m_v3DepthLocation.X, m_v3DepthLocation.Y, m_v3DepthLocation.Z + m_fTargetOffSet);

	FHitResult HitResults;
	GetWorld()->LineTraceSingleByChannel( HitResults, CurrentCameraPos, m_v3DepthLocation, ECC_Visibility );
	DrawDebugLine( GetWorld(), CurrentCameraPos, m_v3DepthLocation, FColor::Red, false, 0.3f);
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Restart Game Function 

void ACPlayer::RestartGame()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Level Transition Functions

//Call this function when the player overlaps with LevelTransitionBox
void ACPlayer::SwitchLevel(FName LevelName)
{
	UWorld* World = GetWorld();
		if (World)
		{
			FString CurrentLevel = World->GetMapName();

			FName CurrentLevelName(*CurrentLevel);

			if (CurrentLevelName != LevelName)
			{
				UGameplayStatics::OpenLevel(World, LevelName);
			}
		}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Save and Load Game Functions
// Save Player Position
void ACPlayer::SaveGame()
{
	USaveSystem* SaveGameInstance = Cast<USaveSystem>(UGameplayStatics::CreateSaveGameObject(USaveSystem::StaticClass()));
	SaveGameInstance->PlayerLocation = this->GetActorLocation();

	UGameplayStatics::SaveGameToSlot(SaveGameInstance, TEXT("slot"), 0);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Game Saved."));
}

// Load Player Position
void ACPlayer::LoadGame()
{
	USaveSystem* SaveGameInstance = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot("slot", 0));

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Game Loaded."));
	//SaveGameInstance = Cast<USaveSystem>(UGameplayStatics::LoadGameFromSlot("slot", 0));

	this->SetActorLocation(SaveGameInstance->PlayerLocation);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Called to bind functionality to input
void ACPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up gameplay key bindings
	check( PlayerInputComponent );
	PlayerInputComponent->BindAction( "Jump",			IE_Pressed,		this,	&ACharacter::Jump			);
	PlayerInputComponent->BindAction( "Jump",			IE_Released,	this,	&ACharacter::StopJumping	);
	PlayerInputComponent->BindAction( "Sprint",			IE_Pressed,		this,	&ACPlayer::Sprint			);
	PlayerInputComponent->BindAction( "Sprint",			IE_Released,	this,	&ACPlayer::SetWalkSpeed		);
	PlayerInputComponent->BindAction( "Jump",			IE_Pressed,		this,	&ACPlayer::DoubleJump		);
	PlayerInputComponent->BindAction( "Dodge",			IE_Pressed,		this,	&ACPlayer::Dodge			);
	PlayerInputComponent->BindAction( "TargetLock",		IE_Pressed,		this,	&ACPlayer::AcquireTargets	);
	PlayerInputComponent->BindAction( "Drop",			IE_Pressed,		this,	&ACPlayer::DropItem			);
	PlayerInputComponent->BindAction( "GetLeftTarget",	IE_Pressed,		this,	&ACPlayer::GetLeftTarget );
	PlayerInputComponent->BindAction( "GetRightTarget",	IE_Pressed,		this,	&ACPlayer::GetRightTarget	);
	PlayerInputComponent->BindAction( "Interact",		IE_Pressed,		this,   &ACPlayer::Interact );


	// Pause button requires special action to allow resuming game when un-pausing
	FInputActionBinding& cToggle = PlayerInputComponent->BindAction ( "PauseGame", IE_Pressed, this, &ACPlayer::PauseGameAndDisplayOptionsMenu );
	cToggle.bExecuteWhenPaused = true; 

	// Upgrade skill
	PlayerInputComponent->BindAction ( "Upgrade1", IE_Pressed, this, &ACPlayer::CallUpgradeSkillDelay);
	PlayerInputComponent->BindAction ( "Upgrade2", IE_Pressed, this, &ACPlayer::CallUpgradeSkillDamage);
	PlayerInputComponent->BindAction("UpgradeSystemUI", IE_Pressed, this, &ACPlayer::DisplayUpgradeSystemMenu);

	//Save and Load Game
	PlayerInputComponent->BindAction("Save", IE_Pressed, this, &ACPlayer::SaveGame);
	PlayerInputComponent->BindAction("Load", IE_Pressed, this, &ACPlayer::LoadGame);

	//
	PlayerInputComponent->BindAxis( "AutoAttack", this, &ACPlayer::AutoAttackAxisEvent );
	PlayerInputComponent->BindAxis( "Ability1", this, &ACPlayer::Ability1AxisEvent );
	PlayerInputComponent->BindAxis( "Ability2", this, &ACPlayer::Ability2AxisEvent );
	PlayerInputComponent->BindAxis( "Ability3", this, &ACPlayer::Ability3AxisEvent );
	PlayerInputComponent->BindAxis( "Ability4", this, &ACPlayer::Ability4AxisEvent );
	PlayerInputComponent->BindAxis( "Ability5", this, &ACPlayer::HealAxisEvent);

	//
	PlayerInputComponent->BindAxis( "MoveForward", this, &ACPlayer::MoveForward );
	PlayerInputComponent->BindAxis( "MoveRight", this, &ACPlayer::MoveRight );

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis( "Turn", this, &APawn::AddControllerYawInput );
	PlayerInputComponent->BindAxis( "TurnRate", this, &ACPlayer::TurnAtRate );
	PlayerInputComponent->BindAxis( "LookUp", this, &APawn::AddControllerPitchInput );
	PlayerInputComponent->BindAxis( "LookUpRate", this, &ACPlayer::LookUpAtRate );
}

#pragma region Abilities

void ACPlayer::SendFireball()
{
	m_pcSpellManager->RequestSpell( ESpellType::Fireball );
	GetWorldTimerManager().SetTimer( m_sAbility1Timer, this, &ACPlayer::Ability1CoolDownDelegateTimer, m_pcSpellManager->FireBallStats.Cool_Down, false );
	m_pcPlayerUI->RequestUpdate( UPlayerUI::EUpdateType::Fireball );

	// Play Fireball Sound
	PlayFireballAudio();
}

void ACPlayer::SendLightning()
{
	m_pcSpellManager->RequestSpell( ESpellType::Lightning );
	GetWorldTimerManager().SetTimer( m_sAbility2Timer, this, &ACPlayer::Ability2CoolDownDelegateTimer, m_pcSpellManager->ChainLightningStats.Cool_Down, false );
	m_pcPlayerUI->RequestUpdate( UPlayerUI::EUpdateType::Lightning );

	// Play Lightning Sound
	PlayLightningAudio();
}

void ACPlayer::SendBasic()
{
	m_pcSpellManager->RequestSpell( ESpellType::Default );
	GetWorldTimerManager().SetTimer( m_sAutoAttackTimer, this, &ACPlayer::AutoAttackCoolDownDelegateTimer, m_pcSpellManager->BasicSpellStats.Cool_Down, false );

	// Play AutoAttack Sound
	PlayAutoAttackAudio();
}

void ACPlayer::SendWindblast()
{
	m_pcSpellManager->RequestSpell( ESpellType::WindBlast );
	GetWorldTimerManager().SetTimer( m_sAbility3Timer, this, &ACPlayer::Ability3CoolDownDelegateTimer, m_pcSpellManager->WindBlastStats.Cool_Down, false );
	m_pcPlayerUI->RequestUpdate( UPlayerUI::EUpdateType::Windblast );
	
	// Play WindBlast Sound
	PlayWindBlastAudio();
}

void ACPlayer::DrawUI() const
{
	DamageableComponent->SetUIVisibility(false);
	m_pcPlayerUI->AddToViewport();
}

void ACPlayer::AutoAttackAxisEvent(float Value)
{
	static bool bDoOnce = false;
	
	if (IsPressing( Value ))
	{
		if (!m_bIsAutoAttackOnCD && !GetMesh()->GetAnimInstance()->Montage_IsPlaying( nullptr ) )
		{
			bDoOnce = true;
			m_bIsAutoAttackOnCD = true;
			
			if (m_iSpawnCounter == 0)
			{
				m_v3CurrentAutoSpawnLocation = AutoLeftLocation->GetComponentLocation();				
				if ( m_pcSpellManager->BasicSpellStats.Animation_Left )
				{
					m_pcCurrentBasicSpellComponent = AutoLeftLocation;
					PlayAnimMontage( m_pcSpellManager->BasicSpellStats.Animation_Left );
				}
			}
			else
			{
				m_v3CurrentAutoSpawnLocation = AutoRightLocation->GetComponentLocation();			
				if ( m_pcSpellManager->BasicSpellStats.Animation_Right )
				{
					m_pcCurrentBasicSpellComponent = AutoRightLocation;
					PlayAnimMontage( m_pcSpellManager->BasicSpellStats.Animation_Right );
				}
			}
			
			m_iSpawnCounter++;

			if (m_iSpawnCounter >= 2 )
			{
				m_iSpawnCounter = 0;
			}
		}
	}
	else
	{
		if (bDoOnce)
		{
			bDoOnce = false;
			GetWorldTimerManager().SetTimer(m_sDoOnceTimer, this, &ACPlayer::AutoAttackCoolDownDelegateTimer, 0.1f, false);
		}
	}
}

void ACPlayer::Ability1AxisEvent(float Value)
{

	if ( IsPressing( Value ) && BP_SpawnableManager)
	{
		if (!m_bIsAbility1OnCD)
		{
			m_bIsAbility1OnCD = true;
			
			if (m_pcSpellManager->FireBallStats.Animation)
			{				
				PlayAnimMontage( m_pcSpellManager->FireBallStats.Animation , 1, "UpperBody");
			}
		}		
	}
}

void ACPlayer::Ability2AxisEvent( float Value )
{
	if (IsPressing( Value ) && BP_SpawnableManager)
	{
		if (!m_bIsAbility2OnCD)
		{
			m_bIsAbility2OnCD = true;

			if ( Get_IsLockedOn() && m_pcSpellManager->ChainLightningStats.Animation)
			{
				PlayAnimMontage( m_pcSpellManager->ChainLightningStats.Animation, 1, "UpperBody" );
			}
		}																													
	}																														
}																															
																															
void ACPlayer::Ability3AxisEvent( float Value )																				
{																															
	if (IsPressing( Value ) && BP_SpawnableManager)
	{
		if (!m_bIsAbility3OnCD)																								
		{
			m_bIsAbility3OnCD = true;

			if (m_pcSpellManager->WindBlastStats.Animation)
			{
				PlayAnimMontage( m_pcSpellManager->WindBlastStats.Animation, 1, "UpperBody" );
			}
		}																													
	}																														
}																															
																															
void ACPlayer::Ability4AxisEvent( float Value )																				
{																															
	if (IsPressing( Value ) && BP_SpawnableManager)
	{																														
		if (!m_bIsAbility4OnCD)																								
		{
			m_bIsAbility4OnCD = true;
			m_pcSpellManager->RequestSpell( ESpellType::Blink );
		}
	}
}

void ACPlayer::HealAxisEvent(float Value)
{
	static bool sbDoOnce = false;
	
	if ( IsPressing( Value ) && BP_SpawnableManager)
	{
		
		if ( m_pcSpellManager->HealStats.Automagically_End_Spell && DamageableComponent->Get_Health() < DamageableComponent->m_fBaseHealth )
		{
			m_pcSpellManager->RequestSpell( ESpellType::Heal );
			sbDoOnce = true;
			GetCharacterMovement()->MaxWalkSpeed -= m_pcSpellManager->HealStats.Movement_Penalty;
		}
		else
		{
			m_pcSpellManager->RequestSpell( ESpellType::Heal );
			sbDoOnce = true;
			GetCharacterMovement()->MaxWalkSpeed -= m_pcSpellManager->HealStats.Movement_Penalty;
		}
	}
	else
	{
		if ( sbDoOnce )
		{
			sbDoOnce = false;
			m_pcSpellManager->RequestHealEnd();
		}		
	}
}

void ACPlayer::Ability1CoolDownDelegateTimer()
{
	m_bIsAbility1OnCD = false;
}
void ACPlayer::Ability2CoolDownDelegateTimer() 
{
	m_bIsAbility2OnCD = false;
}
void ACPlayer::Ability3CoolDownDelegateTimer() 
{
	m_bIsAbility3OnCD = false;
}

void ACPlayer::Ability4CoolDownDelegateTimer() 
{
	m_bIsAbility4OnCD = false;
}

void ACPlayer::AutoAttackCoolDownDelegateTimer()
{
	m_bIsAutoAttackOnCD = false;
}

void ACPlayer::SetBlinkCD(float fTime)
{
	GetWorldTimerManager().SetTimer( m_sAbility4Timer, this, &ACPlayer::Ability4CoolDownDelegateTimer, fTime, false );
}

void ACPlayer::UpdateBlinkUI() const
{
	m_pcPlayerUI->RequestUpdate( UPlayerUI::EUpdateType::Blink );
}

void ACPlayer::UpdateChargesPBUI() const
{
	m_pcPlayerUI->RequestUpdate( UPlayerUI::EUpdateType::BlinkChargesPB);
}

void ACPlayer::UpdateChargesTXTUI() const
{
	m_pcPlayerUI->RequestUpdate( UPlayerUI::EUpdateType::BlinkChargesNUM );
}


ACPlayer::SReturnData ACPlayer::GetAbilityCoolDown(ESpellType eSpellType) const
{
	SReturnData sTime;

	switch (eSpellType)
	{
		case ESpellType::Fireball:
			if (GetWorldTimerManager().IsTimerActive( m_sAbility1Timer ))
			{
				sTime.fSecond = GetWorldTimerManager().GetTimerRemaining( m_sAbility1Timer );
				sTime.iSecond = static_cast<int>(sTime.fSecond);
			}
			break;
		
		case ESpellType::Lightning:
			if (GetWorldTimerManager().IsTimerActive( m_sAbility2Timer ))
			{
				sTime.fSecond = GetWorldTimerManager().GetTimerRemaining( m_sAbility2Timer );
				sTime.iSecond = static_cast<int>(sTime.fSecond);
			}
			break;		
		
		case ESpellType::Blink:
			if (GetWorldTimerManager().IsTimerActive( m_sAbility4Timer ))
			{
				sTime.fSecond = GetWorldTimerManager().GetTimerRemaining( m_sAbility4Timer );
				sTime.iSecond = static_cast<int>(sTime.fSecond);
			}
			break;

		case ESpellType::WindBlast:
			if (GetWorldTimerManager().IsTimerActive( m_sAbility3Timer ))
			{
				sTime.fSecond = GetWorldTimerManager().GetTimerRemaining( m_sAbility3Timer );
				sTime.iSecond = static_cast<int>(sTime.fSecond);
			}
			break;

	case ESpellType::Heal:
		if (GetWorldTimerManager().IsTimerActive( m_sAbility4Timer ))
		{
			sTime.fSecond = GetWorldTimerManager().GetTimerRemaining( m_sAbility4Timer );
			sTime.iSecond = static_cast<int>(sTime.fSecond);
		}
		break;
		
		case ESpellType::Default:
			break;
	}
	return sTime;
}
#pragma endregion Abilities

void ACPlayer::SetWalkSpeed()
{
	GetCharacterMovement()->MaxWalkSpeed = fWalkingSpeed; // Set the MaxWalkingSpeed for the Player to be the same as fWalkingSpeed
}

void ACPlayer::Sprint()
{
	GetCharacterMovement()->MaxWalkSpeed = fSprintSpeed; // When Player reaches MaxWalkingSpeed, they're able to Sprint

	// Play Sprint Sound
	PlaySprintAudio();
}

void ACPlayer::Dodge()
{
	if( bCanDodge ) // If the Player can dodge
	{
		GetCharacterMovement()->BrakingFrictionFactor = 0.0f; // Set BrakingFriction to 0, as we don't want the Player to slow down once they touch ground again
		// Launches the Player in whichever X or Y axis the Player is facing using DodgeDistance, Both Overrides set to True as we want to replace all velocities
		LaunchCharacter(FVector(GetActorForwardVector().X, GetActorForwardVector().Y, 0).GetSafeNormal() * fDodgeDistance, true, true);
		
		// Play Dodge Sound
		PlayDodgeAudio();

		bCanDodge = false; // Set to False as we don't want the Player to be able to dodge before the fDodgeCooldown runs out
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &ACPlayer::StopDodge, fDodgeStop, false);
	}
}

void ACPlayer::StopDodge()
{
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->BrakingFrictionFactor = 1.0f;
	// Here we call ResetDodge function then fDodgeCooldown that makes it so the Player can't use dodge again for an amount of time
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ACPlayer::ResetDodge, fDodgeCooldown, false);
}

void ACPlayer::ResetDodge()
{
	bCanDodge = true; // Player can use Dodge again once fDodgeCooldown is depleted
}

void ACPlayer::Landed(const FHitResult& Hit)
{
	m_iDoubleJumpCounter = 0; // Once Player lands, the DoubleJumpCounter resets back to 0.
}

void ACPlayer::DoubleJump()
{
	if( m_iDoubleJumpCounter <= 1 ) // If the DoubleJumpCounter is less or equal than one
	{
		// Launch the Player, set the X & Y to 0, and then the JumpHeight which sets the axis upwards. The XYOverride is set to False,
		// as we don't need to replace the XY Velocity because the DoubleJump only applies upwards. ZOverride is set to True because we
		// are replacing the Z axis
		ACPlayer::LaunchCharacter(FVector(0, 0, fJumpHeight), false, true);

		// Play Jump Sound
		PlayJumpingAudio();

		m_iDoubleJumpCounter++; // After Player jumps, set the value of the DoubleJumpCounter to be plus one. This makes it so we can only jump twice
	}
}
 


bool ACPlayer::IsPressing(float Value)
{
	return (Value) ? 1 : 0;
}

#pragma region Movement

void ACPlayer::MoveForward(float Value)
{
	if (!bIsPushing)
	{	
		if ((Controller != nullptr) && (Value != 0.0f))
		{
			// find out which way is forward
			const FRotator Rotation = Controller->GetControlRotation ();
			const FRotator YawRotation ( 0, Rotation.Yaw, 0 );

			// get forward vector
			const FVector Direction = FRotationMatrix ( YawRotation ).GetUnitAxis ( EAxis::X );
			AddMovementInput ( Direction, Value );

			// Add sound on footsteps
			PlayFootstepAudio();
		}
	}
	else
	{
		if ((Controller != nullptr) && (Value > 0.0f))	
{
			// find out which way is forward
			const FRotator Rotation = Controller->GetControlRotation ();
			const FRotator YawRotation ( 0, Rotation.Yaw, 0 );

			// get forward vector
			const FVector Direction = FRotationMatrix ( YawRotation ).GetUnitAxis ( EAxis::X );

			// Calculate the angle between the players direction and the impact normal coming from the surface of the block being pushed.
			float fDotProduct = FVector::DotProduct ( Direction, cPushingBlockImpactNormal );
			float fAngleInDegrees = FMath::RadiansToDegrees(FMath::Acos ( fDotProduct ));

			if (fAngleInDegrees > (180.0f - fMaxAllowedAngleToPushInDegrees))
			{
				//Allow player to push forward in this direction.
				AddMovementInput ( Direction, Value );
			}
			else
			{
				//Player is attempting to push at too great an angle away from the surface of the blocks impact normal so exit pushing state.
				FPlayerExitsPushingDelegate::FExitPushing.Broadcast ();
			}
		}

		// player pulls back on stick to trigger exit pushing state 
		if ((Controller != nullptr) && (Value < 0.0f && bIsPushing))
		{
			FPlayerExitsPushingDelegate::FExitPushing.Broadcast ();
		}
	}
}

void ACPlayer::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f) && (!bIsPushing))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation( 0, Rotation.Yaw, 0 );

		// get right vector 
		const FVector Direction = FRotationMatrix( YawRotation ).GetUnitAxis( EAxis::Y );
		// add movement in that direction
		AddMovementInput( Direction, Value );
		
		// Add sound on footsteps
		PlayFootstepAudio();
	}
}

void ACPlayer::TurnAtRate(float Rate)
{
	const float kfCompensatedTurnRateValue = Rate * m_fBaseTurnRateMultiplier * GetWorld()->GetDeltaSeconds();
	AddControllerYawInput( kfCompensatedTurnRateValue );
}

void ACPlayer::LookUpAtRate( float Rate )
{
	const float kfCompensatedLookRateValue = Rate * m_fBaseLookUpRateMultiplier * GetWorld()->GetDeltaSeconds();
	AddControllerPitchInput( kfCompensatedLookRateValue );
}


#pragma endregion Movement

#pragma region Sound

// Sound Function 

void ACPlayer::PlayMainThemeAudio()
{
	if (bMainThemeActivated == true)
	{
		UGameplayStatics::SpawnSoundAtLocation(this, MainTheme, GetActorLocation(), FRotator::ZeroRotator, 0.25f);
	}
}
void ACPlayer::PlayJumpingAudio()
{
	UGameplayStatics::SpawnSoundAtLocation(this, JumpSound, GetActorLocation());
}

void ACPlayer::PlayDodgeAudio()
{
	UGameplayStatics::SpawnSoundAtLocation(this, DodgeSound, GetActorLocation());
}

void ACPlayer::PlaySprintAudio()
{
	UGameplayStatics::SpawnSoundAtLocation(this, SprintSound, GetActorLocation());
}

void ACPlayer::PlayFireballAudio()
{
	UGameplayStatics::SpawnSoundAtLocation(this, FireballSound, GetActorLocation());
}

void ACPlayer::PlayLightningAudio()
{
	UGameplayStatics::SpawnSoundAtLocation(this, LightningSound, GetActorLocation());
}

void ACPlayer::PlayWindBlastAudio()
{
	UGameplayStatics::SpawnSoundAtLocation(this, WindBlastSound, GetActorLocation());
}

void ACPlayer::PlayAutoAttackAudio()
{
	UGameplayStatics::SpawnSoundAtLocation(this, AutoAttackSound, GetActorLocation());
}

void ACPlayer::PlayDeathAudio()
{
	UGameplayStatics::SpawnSoundAtLocation(this, DeathSound, GetActorLocation());
}

void ACPlayer::PlayFootstepAudio()
{
	// Only call the function each period of time for the footsteps, prevent multiple calls
	if (GetWorld()->GetRealTimeSeconds() - fPreviousWorldTime > fFootstepTimeShift && !IsJumping())
	{
		UGameplayStatics::PlaySound2D(this, FootStepSound, 0.15f, 1.0f);
		fPreviousWorldTime = GetWorld()->GetRealTimeSeconds();
	}
}

// Set Jump state to stop footstep sound playing while jumping
bool ACPlayer::IsJumping()
{
	if (GetCharacterMovement() && !GetCharacterMovement()->IsFalling())
		return false;
	else
		return true;
}

#pragma endregion Sound

#pragma region Target_Lock

void ACPlayer::AcquireTargets()
{	
	// TODO: Use Dot product/another method to find the target closest to facing direction.
	TArray<AActor*>				apcPotentialTargets;
	TArray<AActor*>				apcValidTargets;
	m_apcTargets.Empty();
	m_asSortedActors.Empty();
	
	// The HitResults for our first Sphere Trace.
	TArray<FHitResult> asHitResults;

	// To narrow results down, type of collision channels to check for.	
	TArray < TEnumAsByte<EObjectTypeQuery > > sTypes;
	sTypes.Add( UEngineTypes::ConvertToObjectType( ECollisionChannel::ECC_Pawn ) );

	// Holds the actors we will want to ignore, in our case; the spells, player and the current hit target.
	TArray<AActor*> acActorsToIgnore;
	acActorsToIgnore.Add( this );

	// The class type we are looking for on the actor.
	const TSubclassOf<ABaseNpc> acClassToCheck;

	// The actual sphere trace.
	const bool bhit = UKismetSystemLibrary::SphereOverlapActors( GetWorld(), GetActorLocation(), m_fDistanceThresholdForLock, sTypes, acClassToCheck, acActorsToIgnore, apcPotentialTargets );

	for (AActor* Element : apcPotentialTargets)
	{
		if (Element->WasRecentlyRendered(0) )
		{
			m_apcTargets.Add( Element );
		}
	}
	SortTArrayByDistance( m_apcTargets, m_asSortedActors, false );

	// Did find a target?
	if (m_apcTargets.IsValidIndex(0) && IsValid(m_apcTargets[0]))
	{
		m_pcCurrentTarget = m_apcTargets[0];
	}
	
	if ( !m_bLockedOn )
	{
		BeginLock();
		DEBUGLOG("LOCKED ON")
	}
	else
	{
		EndLock();
		DEBUGLOG("LOCKED OFF")
	}
}

void ACPlayer::EndLock()
{
	m_bLockedOn = false;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	m_pcCurrentTarget = nullptr;
}

void ACPlayer::BeginLock()
{
	m_bLockedOn = true;
	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
}


void ACPlayer::LockOn(float fDeltaTime)
{
	// Are we locked and is this target valid?
	if ( m_bLockedOn && m_pcCurrentTarget )
	{
		// We use the controller (to manipulate the camera unto the enemy.
		// We store the controller rotation into a variable.
		const FRotator CurrentControllerRotation = GetController()->GetControlRotation();

		// We store an offset on Z Vector to be used for the LookAt function.
		const FVector  OffSetTargetVector = FVector( m_pcCurrentTarget->GetActorLocation().X, m_pcCurrentTarget->GetActorLocation().Y, m_pcCurrentTarget->GetActorLocation().Z - m_fCameraLockZOffSet );

		// Using the FindLookAtRotation, we retrieve the Rotator that we will use to point the controller at.
		const FRotator LookAtRotator = UKismetMathLibrary::FindLookAtRotation( FollowCamera->GetComponentLocation(), OffSetTargetVector );

		// Since we don't want a hard (instant lock), we Interpolate to it, with speed.
		const FRotator InterpolatedRotator = UKismetMathLibrary::RInterpTo( CurrentControllerRotation, LookAtRotator, fDeltaTime, m_fCameraLockToSpeed );
		
		// And finally we set the Interped Rotator to the controller rotation.
		GetController()->SetControlRotation( InterpolatedRotator );
	}
	if ( !m_pcCurrentTarget )
	{
		EndLock();
	}
}

void ACPlayer::GetRightTarget()
{
	if ( m_bLockedOn )
	{
		GetTarget(false);
	}
}

void ACPlayer::GetLeftTarget()
{
	if ( m_bLockedOn )
	{
		GetTarget(true);
	}	
}


void ACPlayer::GetTarget( bool bSeekLeft)
{
	// First, we check if our current target is valid. We don't want this to fire off if it's null (would cause a crash).
	if (m_pcCurrentTarget)
	{
		DEBUGLOG("SEEKED TARGET");
		TArray < TEnumAsByte<EObjectTypeQuery > > sTypes;
		sTypes.Add( UEngineTypes::ConvertToObjectType( ECollisionChannel::ECC_Pawn ) );

		// Actors we don't want to find in the trace.
		TArray<AActor*> acActorsToIgnore;
		acActorsToIgnore.Add( this );			// - Player
		acActorsToIgnore.Add( m_pcCurrentTarget );	// - Target

		// This will hold all actors found by the trace.
		TArray<AActor*> acPossibleTargets;

		// Check whether we face the NPC or it's back.
		const float fFacingDirectionDotProduct = UKismetMathLibrary::Dot_VectorVector(GetActorForwardVector(), m_pcCurrentTarget->GetActorForwardVector());
		
		// Store it in a bool.
		const bool bIsFacingBack = fFacingDirectionDotProduct >= 0.f;		
		UE_LOG(LogTemp, Warning, TEXT("PLAYER DIRECTION DOT PRODUCT: %f, IS FACING BACK: %s"), fFacingDirectionDotProduct, bIsFacingBack ? TEXT("true") : TEXT("false"));

		// Finally we trace in a sphere around the current target. We are looking only for classes of type ABaseNpc
		const bool kbHit = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), m_pcCurrentTarget->GetActorLocation(), m_fTargetSeekRadius, sTypes, ABaseNpc::StaticClass(), acActorsToIgnore, acPossibleTargets );

		// If the trace picks up on anything.
		if (kbHit)
		{
			// The sorted actors (by checking the dot product)
			TArray<AActor*> acValidTargets;
			
			// Begin iterating through our possible targets.
			for (auto actor : acPossibleTargets)
			{
				// This is a value that will multiply the ActorRightVector with.
				// Since * -1 gives us the opposite value, by default, we set it to 1
				// We set it to -1 which effectively gives us the left vector.
				float fDirection = 1.f;

				// and depending whether we are facing the back of the enemy, we swap it accordingly
				// Since if you face the back of the enemy, its left becomes your right and its right your left.
				if ( bSeekLeft )
				{
					if (!bIsFacingBack)
					{
						fDirection = -1.f;
					}					
				}
				else
				{
					fDirection = -1.f;
					
					if (!bIsFacingBack)
					{
						fDirection = 1.f;
					}					
				}

				// We calculate the DotProduct of the currently targeted NPC against this iterated actor.
				const FVector	kv3SubtractedVector = m_pcCurrentTarget->GetActorLocation() - actor->GetActorLocation();
				const FVector	kv3NormalizedVector = kv3SubtractedVector.GetSafeNormal();
				const float		kfDotProduct = UKismetMathLibrary::Dot_VectorVector(m_pcCurrentTarget->GetActorRightVector() * fDirection, kv3NormalizedVector );

				// Is it on it's side?
				if (kfDotProduct > 0.f)
				{
					// Then add it to an array of valid actors.
					acValidTargets.Add( actor );
				}
			}



			// We first check if we do have a valid target stored in our array
			if ( acValidTargets.IsValidIndex(0) && IsValid(acValidTargets[0]) )
			{
				// A temporary pointer to an actor, this will be used to hold the closest actor to the wanted side.
				// We set it to this instance in case we fail to find any other.
				AActor* pcClosestActor = pcClosestActor = acValidTargets[0];

				// Then we iterate through our valid targets to find the closest match.
				for (auto actor : acValidTargets)
				{
					if ( m_pcCurrentTarget != actor )
					{
						const float fDistanceA = actor->GetDistanceTo(m_pcCurrentTarget);
						const float fDistanceB = pcClosestActor->GetDistanceTo(m_pcCurrentTarget);

						if ( fDistanceA < fDistanceB )
						{
							pcClosestActor = actor;
						}					
					}
				}

				// Closest actor was set in the foreach loop so we can set out target to that.
				m_pcCurrentTarget = pcClosestActor;				
			}
		}
	}
}

ACPlayer::STargetLockData ACPlayer::GetTargetLockData() const
{
	// This will return valuable data that spells can use to query the current target data.	
	STargetLockData sData;
	sData.ATargetLockedActor = nullptr;

	if (m_pcCurrentTarget)
	{
		sData.ATargetLockedActor = m_pcCurrentTarget;
	}
	else
	{
		sData.CursorInWorldVector = m_v3DepthLocation;
	}

	return sData;
}

// Sort an array into another array
// Credits to NEBULAGAMES for original implementation, improved by myself.
void ACPlayer::SortTArrayByDistance( TArray<AActor*> apArrayToSort, TArray<FActorDistanceData>& arSortedArry, bool bIsDescending ) const
{
	if (apArrayToSort.Num() > 0)																// Is not empty?
	{
		TArray <FActorDistanceData> asTempSort;													// Temporary array that holds the sorted data
		FActorDistanceData			sCurrentLoopActor;											// Current iterated struct
		const FVector v3PlayerLocation = GetActorLocation();										// Players location that will be compared against

		for (int i = 0; i < apArrayToSort.Num(); ++i)											// Iterate to populate array
		{
			FVector v3OtherActorsLocation = apArrayToSort[i]->GetActorLocation();				// Current iterated actor's location
			sCurrentLoopActor.fDistance = (v3PlayerLocation - v3OtherActorsLocation).Size();    // Set the distance between player and iterated actor
			sCurrentLoopActor.pcActor = apArrayToSort[i];										// Set the current iterated actor
			asTempSort.Add( sCurrentLoopActor );                                				// Store it to temporary array
		}

		for (FActorDistanceData Element : asTempSort)											// Iterate through populated array
		{
			int32 m = asTempSort.Num();															// run basic bubble sort algorithm
			int32 i1, i2;																		// iterators to sort
			bool bDidSwap = false;																// True if elements swapped
			for (i1 = 0; i1 < (m - 1); i1++)
			{
				if (bIsDescending == true)														// Shouldn't be low to high
				{
					for (i2 = 0; i2 < m - i1 - 1; i2++)
					{
						if (asTempSort[i2].fDistance < asTempSort[i2 + 1].fDistance)			// Swap places with element
						{
							const FActorDistanceData sTemp = asTempSort[i2];
							asTempSort[i2] = asTempSort[i2 + 1];
							asTempSort[i2 + 1] = sTemp;
							bDidSwap = true;
						}
					}

					if (bDidSwap == false)
					{
						break;																	// break out of loop if failed to swap
					}
				}

				else																			// Should be low to high
				{
					for (i2 = 0; i2 < m - i1 - 1; i2++)
					{
						if (asTempSort[i2].fDistance > asTempSort[i2 + 1].fDistance)
						{
							const FActorDistanceData z = asTempSort[i2];
							asTempSort[i2] = asTempSort[i2 + 1];
							asTempSort[i2 + 1] = z;
							bDidSwap = true;
						}
					}

					if (bDidSwap == false)
					{
						break;
					}
				}
			}

			arSortedArry = asTempSort;															// Set the given array to our results
		}
	}
}

#pragma endregion

void ACPlayer::Interact ()
{
	FPlayerInteractingDelegate::FPlayerInteracting.Broadcast ();
}