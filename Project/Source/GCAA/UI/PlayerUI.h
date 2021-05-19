///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerUI.generated.h"

class ASpellManager;
class ACPlayer;
class UButton;
class UTextBlock;
class UProgressBar;

UCLASS()
class GCAA_API UPlayerUI : public UUserWidget
{
	GENERATED_BODY()
public:
	
	// Setters
	void SetCPlayer		( ACPlayer*			player			);
	void SetSpellManager( ASpellManager*	spellManager	);

	/** TODO: Implement those functions in C++. Figure out how to play a widget animation inside here. */
	UFUNCTION(BlueprintImplementableEvent)
	void PlayPulse();
	UFUNCTION(BlueprintImplementableEvent)
	void StopPulse();

	/** Enum to dictate which part of the UI to update instead of using multiple functions. */
	enum class EUpdateType
	{
		Fireball		= 0,
		Lightning		= 1,
		Blink			= 2,
		BlinkChargesPB	= 3,
		BlinkChargesNUM	= 4,
		Windblast		= 5
	};

	/** Public function to request a certain UI element to be updated
	 * @param eAbilityToUpdate The abilitys UI to update.
	 */
	void RequestUpdate( EUpdateType eAbilityToUpdate );

	/** Public function to update the progress bar background image to be the desired ones.
	*/
	enum class ESkill
	{
		FireBall = 0, Lightning	= 1, Blink = 2, Windblast = 3,	Heal = 4
	};
	void SetSkillIcons( ESkill eSkillToUpdate, UTexture2D* pcResource ) const;
	
protected:
	//////////////////////////////////////////////////////////////////
	///					ABILITY ON SCREEN UI                       ///
	//---------------         FIREBALL			--------------------//
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UTextBlock* FireBallCooldownText = nullptr;
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UProgressBar* FireBallProgressBar = nullptr;

	//---------------         LIGHTNING			--------------------//
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UTextBlock* LightningCooldownText = nullptr;
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UProgressBar* LightningProgressBar = nullptr;

	//---------------           BLINK			--------------------//
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UTextBlock* BlinkCooldownText = nullptr;
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UProgressBar* BlinkProgressBar = nullptr;

	//---------------      BLINK ( CHARGES )	--------------------//
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UTextBlock* BlinkChargesCooldownText = nullptr;
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UProgressBar* BlinkChargesProgressBar = nullptr;

	//---------------         WINDBLAST			--------------------//
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UTextBlock* WindblastCooldownText = nullptr;
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UProgressBar* WindblastProgressBar = nullptr;

	//---------------           HEAL			--------------------//
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UProgressBar* HealProgressBar = nullptr;	

private:
	UPROPERTY()
	ACPlayer*		m_pcPlayer;
	UPROPERTY()
	ASpellManager*	m_pcSpellManager;

	FTimerHandle 	m_sFireballUpdater;
	FTimerHandle 	m_sLightningUpdater;
	FTimerHandle 	m_sBlinkUpdater;
	FTimerHandle 	m_sBlinkChargesUpdater;
	FTimerHandle 	m_sWindblastUpdater;

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	/** This function does all the work to update the UI depending on the enum given.
	 * It will then update the progress bar and text to the current cooldown.
	 * @param eAbilityToUpdate Enum that changes which Widget to update.
	 * @param fCurrentCooldown The current cooldown of this ability. e.g 1.2s left of the 2.0s cooldown.
	 * @param fCooldown The maximum cooldown of this ability. e.g current cooldown: 1.2s left of the maximum cool down of 2.0s
	 * @param sCurrentTimer Timer to stop once cooldown reaches 0 to avoid un-required function calls.
	 */
	void UpdateContent(EUpdateType eAbilityToUpdate, float fCurrentCooldown = 0.f, float fCooldown = 0.f, FTimerHandle sCurrentTimer = FTimerHandle() ) const;
	void Content_Fireball		() const;
	void Content_Lightning		() const;
	void Content_Blink			() const;
	void Content_BlinkCharges	() const;
	void Content_Windblast		() const;
	

	// Returns the state of the player and manager pointer.
	bool IsValid				() const;
};
