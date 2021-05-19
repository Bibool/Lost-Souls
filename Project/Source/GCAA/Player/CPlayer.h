///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Abdallah Boutrif (A.B) - If did work on class add name here.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// A.B Work: Spell manager, Player UI, Damage Component, DeathInterface.
/// A.B Regions: Private_Structs, Spell_Casting_Notifies, Player_UI_Calls, Misc_Get_Set, Misc, Spell_Casting, Target Lock
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GCAA/SpellManager/SpellManager.h"
#include "GCAA/CPlayerInventory.h"
#include "GCAA/CPlayerJournal.h"
#include "GCAA/Components/DamageComponent.h"
#include "GCAA/Interfaces/DeathInterface.h"
#include "GCAA/Structures/FActorDistanceData.h"
#include "GCAA/UI/PlayerInventoryUI.h"
#include "GCAA/UI/PauseMenuUI.h"
#include "GCAA/UpgradeSystem/CUpgradeSystemWidget.h"

#include "CPlayer.generated.h"


class UPlayerUI;
enum class ESpellType;

// Event to signal player is exiting from pushing.
struct GCAA_API FPlayerExitsPushingDelegate
{
	DECLARE_MULTICAST_DELEGATE ( FPlayerExitsPushingSignature )
	static FPlayerExitsPushingSignature FExitPushing;
};

// Static event for player interacting with an environment controller.
struct GCAA_API FPlayerInteractingDelegate
{
	DECLARE_MULTICAST_DELEGATE ( FPlayerInteractingSignature )
	static FPlayerInteractingSignature FPlayerInteracting;
};

// Static event for pausing the game.
struct GCAA_API FPlayerPauseGameDelegate
{
	DECLARE_MULTICAST_DELEGATE ( FPlayerPauseGameSignature )
	static FPlayerPauseGameSignature FPlayerPauseGame;
};

UCLASS()
class GCAA_API ACPlayer : public ACharacter, public IDeathInterface
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true") )
	class USpringArmComponent* CameraBoom;
    /** Follow camera */
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true") )
	class UCameraComponent* FollowCamera;
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true") )
	class USceneComponent* SpellSpawnLocation;
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true") )
	class USceneComponent* AutoLeftLocation;	
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true") )
	class USceneComponent* AutoRightLocation;
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true") )
	class UDamageComponent* DamageableComponent;


public:
	// Sets default values for this character's properties
	ACPlayer();

	/** Setting this will toggle debug info on the player, such as traces and logs. */
	UPROPERTY ( EditAnywhere )
	bool m_kbDebugInfo;
	
	// Player Inventory.
	UPROPERTY ( VisibleAnywhere, BlueprintReadOnly, Category = PlayerInventory )
	class UCPlayerInventory* pPlayerInventory;

	// Player Journal.
	UPROPERTY ( VisibleAnywhere, BlueprintReadOnly, Category = PlayerJournal )
	class UCPlayerJournal* pPlayerJournal;

	/** Blueprint function called by the OnDeath interface function. */
	UFUNCTION(BlueprintImplementableEvent)
	void OnDeath_BP();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = Camera )
	float m_fBaseTurnRateMultiplier;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = Camera )
	float m_fBaseLookUpRateMultiplier;

	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "Camera\|Depth Targetting") 
	float m_fLineTraceDepth;

	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "Combat\|Lock-On") 
	float m_fCameraLockZOffSet;

	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "Combat\|Lock-On") 
	float m_fCameraLockToSpeed;

	/** Radius to find targets on directional lock.*/
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "Combat\|Lock-On") 
	float m_fTargetSeekRadius;

	/** Offset value on Z-Axis on target. This will cause to aim above the target.*/
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "Combat\|Lock-On") 
	float m_fTargetOffSet;
	
	/** Multiplier for the center of the screen point projected to world space.
	 * The lower the value, the farther up the projectile will fire off when not locked on.
	 * The higher the value the lower the projectile will be when fired off.
	 */
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "Combat\|Lock-On", meta = (ClampMin = "0.0", ClampMax = "10000.0", UIMin = "0.0", UIMax = "10000.0")) 
	float m_fTargetDistance;

	/** How far can it look for target to lock on to.*/
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "Combat\|Lock-On" , meta = (ClampMin = "0.0", ClampMax = "10000.0", UIMin = "0.0", UIMax = "10000.0"))
	float m_fDistanceThresholdForLock;

	/** The blueprint based on the spell manager. */
	UPROPERTY( BlueprintReadOnly, EditAnywhere, Category = "Blueprints\|SpellManager" )
	TSubclassOf<ASpellManager> BP_SpawnableManager;

	/** The widget blueprint based on Player UI. */
	UPROPERTY( EditAnywhere, Category = "Blueprints\|UI" )
	TSubclassOf<UUserWidget> WBP_Player_UI;
	
	
	UFUNCTION()
		void Dodge();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
		float fDodgeDistance;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
		float fDodgeCooldown;

	UPROPERTY()
		bool bCanDodge;

	UPROPERTY(EditAnywhere)
		float fDodgeStop;

	UFUNCTION()
		void StopDodge();

	UFUNCTION()
		void ResetDodge();

	UPROPERTY()
		FTimerHandle UnusedHandle;

	UFUNCTION()
		void Sprint();

	UFUNCTION()
		void SetWalkSpeed();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
		float fWalkingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
		float fSprintSpeed;

	UPROPERTY ( EditAnywhere, BlueprintReadOnly, Category = "Movement" )
		float fMaxAllowedAngleToPushInDegrees;

	UPROPERTY ( BlueprintReadOnly)
		bool bIsPushing;

	bool IsPushing () const { return bIsPushing; }

	FVector cPushingBlockImpactNormal;

	void ResumeGameFromOptionsMenu ();
	void ResumeGameFromJournalMenu ();


	UPROPERTY ( EditAnywhere, Category = "UI" )
	TSubclassOf<UUserWidget> UI_Inventory;
	UPROPERTY()
	UPlayerInventoryUI* pInventoryUI;

	UPROPERTY ( EditAnywhere, Category = "UI" )
	TSubclassOf<UUserWidget> UI_PauseMenu;
	UPROPERTY()
	UPauseMenuUI* pPauseMenuUI;

	UPROPERTY ( EditAnywhere, Category = "UI" )
	TSubclassOf<UUserWidget> UI_JournalMenu;
	UPROPERTY()
	UJournalMenuUI* pJournalMenuUI;

	UPROPERTY(EditAnywhere, Category = "UI")
		TSubclassOf<UUserWidget> WBP_UpgradeSystem;
	UPROPERTY()
		UCUpgradeSystemWidget* pUpgradeSystemUI;


	//////////////////////////////////////////////////////////////////////////////////////////////////////
	// Level Transition Functions
	// Called when the player transition from a level to another
	void SwitchLevel(FName LevelName);

	//////////////////////////////////////////////////////////////////////////////////////////////////////


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Called for forwards/backward input */
	void MoveForward( float Value );

	/** Called for side to side input */
	void MoveRight( float Value );

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate( float Rate );

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate( float Rate );
	
	void Interact ();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent( class UInputComponent* PlayerInputComponent ) override;

	virtual void Landed(const FHitResult& Hit) override;

	UFUNCTION()
		void DoubleJump();

	UPROPERTY()
		int m_iDoubleJumpCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float fJumpHeight;

	// Called to restart the level when the player dies
	void RestartGame		()						;

	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
private:
#pragma region Private_Structs
	/** Used by UI to display cooldown remaining on spells. Returns as float or int. */
	struct SReturnData
	{
		int		iSecond = 0;
		float	fSecond = 0.f;
	};

	/** Returns lock data, either the actor, or the cursor location in world space.*/
	struct STargetLockData
	{
		AActor* ATargetLockedActor;
		FVector CursorInWorldVector;
	};
#pragma endregion
public:
#pragma region Spell_Cast_Notifies
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///											SPELL CAST NOTIFIES												///
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// Fireball
	void SendFireball();
	/// Lightning
	void SendLightning();
	/// Windblast
	void SendWindblast();
	/// Basic Spell
	void SendBasic();
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma endregion
#pragma region Player_UI_Calls
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///											UI UPDATE CALLS													///
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/** Draws the UI to the screen. */
	void DrawUI() const;
	/** Updates the blink UI. */
	void UpdateBlinkUI() const;
	/** Updates the blink charges UI - ProgressBar. */
	void UpdateChargesPBUI() const;
	/** Updates the blink charges UI - Text. */
	void UpdateChargesTXTUI() const;
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma endregion
#pragma region Misc_Get_Set
	/** Returns the target lock data. */
	STargetLockData GetTargetLockData() const;
	
	/** Sets the current cooldown of blink (usually when failed) */
	void SetBlinkCD(float fTime);
	
	/** Gets the current cooldown of this ability, as float or int.
	* @param eSpellType The spell to query the current cooldown.
	*/
	SReturnData GetAbilityCoolDown( ESpellType eSpellType ) const;
#pragma endregion 
	

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// Upgrade System
	/// 
	bool bUpgradeSystemUiActivated;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UpgradeSystem)
	class UBoxComponent* UpgradeBox;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UpgradeSystem)
		TSubclassOf<class UUserWidget> UpgradeMenuWidgetClass;

	// Upgrade System Functions
	void CallUpgradeSkillDelay();
	void CallUpgradeSkillDamage();
	void DisplayUpgradeSystemMenu();
	void ResumeGameFromUpgradeSystemMenu();

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Getters
	FORCEINLINE USceneComponent*			GetCurrentComponent()			const { return m_pcCurrentBasicSpellComponent; }
	FORCEINLINE USpringArmComponent*		GetCameraBoom()					const { return CameraBoom;			}
	FORCEINLINE UCameraComponent*			GetFollowCamera()				const { return FollowCamera;		}
	FORCEINLINE USceneComponent* 			GetSpellSpawnSceneComponent()	const { return SpellSpawnLocation;	}
	FORCEINLINE	UDamageComponent* 			GetDamageComponent()			const { return DamageableComponent;	}	
	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool						Get_IsLockedOn()				const { return m_bLockedOn;			}
	FORCEINLINE UPlayerUI*					GetPlayerUI()					const { return m_pcPlayerUI;			}
	FORCEINLINE AActor*						GetCurrentTarget()				const { return m_pcCurrentTarget;	}
	FORCEINLINE FTimerHandle&				GetBlinkTimer() 					  { return m_sAbility4Timer;		}
	FORCEINLINE FTimerHandle&				GetWindblastTimer()					  { return m_sAbility3Timer;		}
	FORCEINLINE float						GetFOV()						const { return m_fStoredFoV;			}
	UFUNCTION(BlueprintCallable)
	FORCEINLINE USoundBase*					GetMainMenuSound()				const { return MainTheme;			}

	// Setters
	FORCEINLINE void						SetCanBlink		( bool b )		{ m_bIsAbility4OnCD = b;	}
	FORCEINLINE void						SetCanWindblast	( bool b )		{ m_bIsAbility3OnCD = b;	}

private:	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Save and Load Game

	// Called to save the player location
	void SaveGame();

	// Called to load the player location
	void LoadGame();

	// Called to pause the game
	void PauseGame ();
	void PauseGameAndDisplayOptionsMenu ();
	void PauseGameAndDisplayJournalMenu (int iJournalPageToDisplay);
	bool bGameIsPaused;

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Sound 

	// Main Theme Sound 
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* MainTheme;
	bool bMainThemeActivated;
	void PlayMainThemeAudio();
	
	// Jump Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* JumpSound;
	bool bJumpSoundActivated;
	bool IsJumping();
	void PlayJumpingAudio();

	// Dodge Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* DodgeSound;
	bool bDodgeSoundActivated;
	void PlayDodgeAudio();

	// Sprint Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* SprintSound;
	bool bSprintSoundActivated;
	void PlaySprintAudio();

	// Footstep Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* FootStepSound;
	bool bFootStepSoundActivated;
	bool bIsWalking;
	void PlayFootstepAudio();
	float fPreviousWorldTime;
	float fFootstepTimeShiftDefault;
	float fFootstepTimeShift;

	// Fireball Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* FireballSound;
	bool bFireballSoundActivated;
	void PlayFireballAudio();

	// Lightning Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* LightningSound;
	bool bLightningSoundActivated;
	void PlayLightningAudio();

	// WindBlast Sound
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* WindBlastSound;
	bool bWindBlastSoundActivated;
	void PlayWindBlastAudio();

	// AutoAttack Sound 
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* AutoAttackSound;
	bool bAutoAttackSoundActivated;
	void PlayAutoAttackAudio();

	// Death Sound 
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* DeathSound;
	bool bDeathSoundActivated;
	void PlayDeathAudio();

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Sound base for the player to be selected in the editor, will be used for a noise event which can alert some
	//  npcs and cause them to investigate where the sound came from 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound", meta = (AllowPrivateAccess = "true"))
	USoundBase* Distraction_sound;

		
	void DropItem();

	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// Skill upgrade
	/// Skill upgrade option (0 = lower delay, 1 = more damage)
	void UpgradeSkill(int upgradeIndex, float multiplier);
	void ResetSkills();
	////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region Misc
	/** The base FOV of the player. Used by blink to revert FOV effect.*/
	float m_fStoredFoV;
	
	/** Pointer to the player UI we create from the blueprint value. */
	UPROPERTY()
	UPlayerUI* m_pcPlayerUI;

	/** Traces into the middle of the screen. Sets a vector for non locked on spells. */
	void LineTrace();
	/** Location of cursor in world space. Cursor is static and defaulted at the middle of the screen. */
	FVector m_v3DepthLocation;

	/** Called when the player dies. Virtual function. */
	virtual void VOnDeath() override;
#pragma endregion

#pragma region Spell_Casting
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///											SPELL CASTING												 ///
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// A pointer to the spell manager, which will deal with any request for spells
	UPROPERTY()
	ASpellManager* m_pcSpellManager;

	// Auto attack and spells event logic
	// We have each individual timer for each spell and auto attack. This is to ensure that the player can use spells and attacks at the same time.
	// It is unclear from design if the player can do that, if not, then it can be refactored to have one timer for all.
	FTimerHandle m_sAutoAttackTimer;
	FTimerHandle m_sAbility1Timer;
	FTimerHandle m_sAbility2Timer;
	FTimerHandle m_sAbility3Timer;
	FTimerHandle m_sAbility4Timer;	

	// The booleans are used to check if the player is actively holding down the key
	// Since we use Axis instead of Actions, we do not have the exit function
	// This is intentional, otherwise every spell/attack would required twice as much functions vs 4 Booleans.
	bool m_bIsAutoAttackOnCD  ;
	bool m_bIsAbility1OnCD	;
	bool m_bIsAbility2OnCD	;
	bool m_bIsAbility3OnCD	;
	bool m_bIsAbility4OnCD	;

	// This is the event that checks whether or not the player is holding down the key.
	void AutoAttackAxisEvent( float fValue );
	void Ability1AxisEvent	( float fValue );
	void Ability2AxisEvent	( float fValue );
	void Ability3AxisEvent	( float fValue );
	void Ability4AxisEvent	( float fValue );
	void HealAxisEvent		( float fValue );

	// And this is the event that the timer will trigger ever x seconds. This is where we really request the wanted spell.
	void AutoAttackCoolDownDelegateTimer()  ;
	void Ability1CoolDownDelegateTimer()	;
	void Ability2CoolDownDelegateTimer()	;
	void Ability3CoolDownDelegateTimer()	;
	void Ability4CoolDownDelegateTimer()	;

	/** The Axis event pass in their floats here, and it will return true or false depending if the player is holding or not.
	 *This is used to effectively know when the player is holding the key down or not.
	 *@param fValue The axis value to check for.
	 */
	static bool IsPressing( float fValue );
	
	/** Set by a function and used to return the current socket (right or left) for basic attacks. */
    UPROPERTY()
    USceneComponent* m_pcCurrentBasicSpellComponent;
   
    /** The location of the current basic attack socket. */
    FVector			m_v3CurrentAutoSpawnLocation;
   
    /** Used to reset the auto attack timer. */
    FTimerHandle	m_sDoOnceTimer;

	/** Counter to switch socket location (left to right). */
	int				m_iSpawnCounter;
#pragma endregion
	
#pragma region Target_Lock
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///											TARGET LOCK													 ///
	////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	/** The current target we are tracking. */
	UPROPERTY()
	AActor*			m_pcCurrentTarget;
	
	/** Our possible targets. */
	UPROPERTY()
	TArray<AActor*> m_apcTargets;

	/** The sorted array of structs. */
	UPROPERTY()
	TArray<FActorDistanceData> m_asSortedActors;
	
	/** Set when locked or not. */
	bool m_bLockedOn;
	
	/** Fired when target lock is pressed.
	 * Will find the nearest target to the player and follow it.
	 */ 
	void AcquireTargets();
	/** If target locked and looking for find left target is pressed.
	 * Will attempt to lock to a target left to the current target.
	 */
	void GetRightTarget();
	/** If target locked and looking for find right target is pressed.
	* Will attempt to lock to a target right to the current target.
	*/
	void GetLeftTarget();
	/** This does the actual direction target seeking work.
	 * This is called to find either a target to the left or to the right.
	 * @param bSeekLeft Should it find a target to the left?
	 */
	void GetTarget( bool bSeekLeft = true );

	/** Tracks a target if player request a target lock.
	 * Forces the camera to always face the target.
	 * @param fDeltaTime Frame compensation for Interpolated effect.
	 */
	void LockOn(float fDeltaTime);

	/** Called when target is no longer valid. */
	void EndLock();

	/** Called when lock begins. */
	void BeginLock();

	/** Sort given array into provided array.
	* @param apcArrayToSort In array to cycle through and sort.
	* @param arcSortedArray Out array of struct holding the actor and it's distance.
	* @param bIsDescending Sort method (Descending or Ascending).
	*/
	void SortTArrayByDistance( TArray<AActor*> apcArrayToSort, TArray<FActorDistanceData> &arcSortedArray, bool bIsDescending ) const;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma endregion
	
};
