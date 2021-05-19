///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageComponent.generated.h"


class UBaseHealthUI;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GCAA_API UDamageComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDamageComponent();

	//////////////////////////////////////////////////////////////////////////////////
	//////////////               UDAMAGECOMPONENT README				//////////////
	//////////////////////////////////////////////////////////////////////////////////
	/// This component is made to handle damage and health systems, all in one.
	/// /!\ I HIGHLY RECOMMEND TO USE THE IDEATHINTERFACE AND OVERRIDE THE EVENT /!\
	/// Otherwise, it will default to using Actor->Destroy().
	/// It comes with a variety of functions and utility that will ease everything.
	/// Importantly, it has 3 blueprint settable value that should be used:
	/// BaseHealth - The Base health is the original max health of the actor.
	/// BaseDamage - The damage that this actor will deal. (FOR NPCs)
	/// InvulnFrameInSeconds - A safety check to ensure no overlapping events.
	/// Example usage: https://i.imgur.com/tYDQ8BT.png
	//////////////////////////////////////////////////////////////////////////////////
	/// Anything that should be set in blueprints, should be added as bellow.
	//////////////////////////////////////////////////////////////////////////////////
	/////////////////////	    USING THE AUTO UI UPDATER		 /////////////////////
	//////////////////////////////////////////////////////////////////////////////////
	/// This is valid ONLY if the owner of this component is an NPC!
	/// The component will NOT automagically create the UI for you.
	/// Instead you must create a widget OF BASE TYPE UBaseHealthUI on the NPC.
	/// After you have created your widget and component, call SetUI on the component.
	/// Provide it with a pointer to the UI created and it will manage it as normal.
	/// Example usage: https://i.imgur.com/8CMocu7.png
	//////////////////////////////////////////////////////////////////////////////////

	/** This function will do the damage calculation.
	 *If it fails to find a component. It will instead use the TakeDamage() function.
	 * @param pcDamagingActor - The actor that is causing the damage.
	 * it will attempt to find a UDamageComponent to connect to.
	 */
	UFUNCTION(BlueprintCallable)
    void ReceiveDamage( AActor* pcDamagingActor );

	/** Overloaded ReceiveDamage.
	 *Instead of automagically apply damage, will accept a float as damage taken.
	 * @param fDamage - Damage to deal.
	 */
	void ReceiveDamage( float fDamage );
	
	/** The base Max Health of this actor.  **/
	UPROPERTY(EditAnywhere)
	float m_fBaseHealth = 100.f;

	/** The base Damage this actor will do.
	 * It's worth noting this would only be used by the NPCs as the
	 * Spells have their own damage taken from the Spell manager.
	 */
	UPROPERTY(EditAnywhere)
	float m_fBaseDamage = 10.f;

	/** The period of time before damage can be applied again.
	 * This is to avoid things applying damage more than once per frame.
	 */
	UPROPERTY(EditAnywhere)
	float m_fInvulnFrameInSeconds = 0.2f;

	// Set the upgradable values.
	UFUNCTION(BlueprintCallable)
    void Upgrade_Health(float value ) { m_fBaseHealth += value; }
	UFUNCTION(BlueprintCallable)
    void Upgrade_Damage(float value ) { m_fBaseDamage += value; }

	// Get the current values.
	UFUNCTION(BlueprintCallable)
    FORCEINLINE float Get_Health()		const { return m_fCurrentHealth;	}
	UFUNCTION(BlueprintCallable)
    FORCEINLINE float Get_Max_Health()	const { return m_fBaseHealth;		}
	UFUNCTION(BlueprintCallable)
    FORCEINLINE float Get_Damage()		const { return m_fCurrentDamage;	}

	/**
	 * This function can be used to heal NPCs, or player.
	 * There is a dedicated healing spell for the player so that should be used.
	 * @param fHealAmount - The amount to add to the health.
	 */
	void HealEvent(float fHealAmount);
	/**
	 * Sets the health.
	 * @param fHealth - The new health value to replace CurrentHealth with.
	 */
	void SetHealth( float fHealth );

	void SetUIVisibility( bool bRemoveFromPort ) const;

	/** Updates the pointer to the UI.
	 * Use this function if you are adding this component to an NPC.
	 * You MUST call this after instantiating both component and UI otherwise it won't update it for you.
	 * @param pcUI Pointer to the base type of UBaseHealthUI.
	 */
	void SetUI( UBaseHealthUI* pcUI);

	/** Sets the UIs progress bar percent to the given value.
	 * @param fValue New value for the progress bar. Should be normalized.
	 */
	void UpdateUI( float fValue ) const;

	/** Returns the health as a normalized value. */
	float GetNormalizedHealth() const;
	
	UPROPERTY ( EditAnywhere )
	TSubclassOf<UBaseHealthUI> WBP_Health_UI;
	UPROPERTY()
	UBaseHealthUI* m_pcHealthUI;

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	// Initialize values
	void InitValues(AActor* owner);

	// The current health of this actor.
	float m_fCurrentHealth;

	// The current damage of this actor.
	float m_fCurrentDamage;

	// Anything that improves the health will go into this value.
	float m_fEnhancedHealth;

	// Anything that improves the damage will go into this value.
	float m_fEnhancedDamage;

	UPROPERTY()
	AActor* m_pcOwner;

private:
	void CheckForDeath();
	void SetInvulnState();
	

	bool m_bIsInvuln;
	bool m_bIsAwaitingDeath;
	bool m_bNPCOwned;
	FTimerHandle m_sInvulnTimer;
		
};
