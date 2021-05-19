///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "DamageComponent.h"

#include "GCAA/Interfaces/DeathInterface.h"
#include "GCAA/NPC/BaseNpc.h"
#include "GCAA/UI/Health/BaseHealthUI.h"

// Sets default values for this component's properties
UDamageComponent::UDamageComponent()
{
	// This component does not use Tick therefore we set it to false.
	PrimaryComponentTick.bCanEverTick = false;

	m_bIsInvuln			= false;
	m_bIsAwaitingDeath	= false;
	m_bNPCOwned			= false;
}

// Set our initial values when this component is created.
void UDamageComponent::BeginPlay()
{
	Super::BeginPlay();

	// Pair the owner.
	m_pcOwner = GetOwner();

	// If it's valid - Set our values.
	if (m_pcOwner)
	{
		UE_LOG(LogTemp, Warning, TEXT("UDamageComp created on: %s"), *m_pcOwner->GetName());

		// We set our logic values to the base values.
		m_fCurrentHealth = m_fBaseHealth;
		m_fCurrentDamage = m_fBaseDamage;
	}

	if ( WBP_Health_UI )
	{
		// Here, before we create the UI for the owner, we check if it's an NPC.
		if ( ABaseNpc* pOwner = Cast<ABaseNpc>(m_pcOwner) )
		{
			m_bNPCOwned = true;
		}
		else
		{
			m_pcHealthUI = CreateWidget<UBaseHealthUI>( GetWorld(), WBP_Health_UI );			
			m_pcHealthUI->SetOwner( m_pcOwner );
		}		
	}	
}

void UDamageComponent::InitValues(AActor* owner)
{
	m_pcOwner = owner;
	m_fCurrentHealth = m_fBaseHealth;
	m_fCurrentDamage = m_fBaseDamage;
}


void UDamageComponent::ReceiveDamage(AActor* DamagingActor)
{
	if ( !m_bIsInvuln )
	{
		// Attempt to find a component on the damaging actor.
		UDamageComponent* DamageComp = DamagingActor->FindComponentByClass<UDamageComponent>();
		
		if ( DamagingActor && DamageComp && !m_bIsAwaitingDeath )
		{
			m_bIsInvuln = true;
			
			const float kfActualDamage = DamageComp->Get_Damage();
			m_fCurrentHealth = m_fCurrentHealth - kfActualDamage;

			if ( m_pcHealthUI ) m_pcHealthUI->UpdateHealthBar( GetNormalizedHealth() );

			CheckForDeath();
			m_pcOwner->GetWorldTimerManager().SetTimer(m_sInvulnTimer, this, &UDamageComponent::SetInvulnState, m_fInvulnFrameInSeconds, false);
		}
	}
}

void UDamageComponent::ReceiveDamage( float Damage) 
{
	if ( !m_bIsInvuln )
	{
		if (!m_bIsAwaitingDeath )
		{
			m_bIsInvuln = true;

			m_fCurrentHealth -= Damage;

			if ( m_pcHealthUI )m_pcHealthUI->UpdateHealthBar( GetNormalizedHealth() );
			
			CheckForDeath();
			m_pcOwner->GetWorldTimerManager().SetTimer(m_sInvulnTimer, this, &UDamageComponent::SetInvulnState, m_fInvulnFrameInSeconds, false);
		}
	}
}


void UDamageComponent::CheckForDeath()
{
	if ( m_fCurrentHealth <= 0 )
	{
		// Here we check if the Owner implements a custom death function.
		// I highly recommend that NPCs and Player should have one.
		// IF it doesn't, it defaults to using the Actor.Destroy().
		IDeathInterface* OwnerInterface = Cast<IDeathInterface>( m_pcOwner );
		if ( OwnerInterface )
		{
			OwnerInterface->VOnDeath();
		}
		else
		{
			m_pcOwner->Destroy();
		}

		m_bIsAwaitingDeath = true;
	}
}

void UDamageComponent::SetInvulnState()
{
	m_bIsInvuln = false;
}

float UDamageComponent::GetNormalizedHealth() const
{
	return m_fCurrentHealth / m_fBaseHealth;
}



void UDamageComponent::HealEvent(float fHealAmount)
{
	m_fCurrentHealth += fHealAmount;
}

void UDamageComponent::SetHealth(float fHealth)
{
	m_fCurrentHealth = fHealth;
}

void UDamageComponent::SetUIVisibility(bool RemoveFromPort) const
{
	if ( WBP_Health_UI )
	{
		if ( RemoveFromPort )
		{
			m_pcHealthUI->RemoveFromViewport();
		}
		else
		{
			m_pcHealthUI->AddToViewport();
		}
	}
}

void UDamageComponent::SetUI(UBaseHealthUI* pUI)
{
	m_pcHealthUI = pUI;
}

void UDamageComponent::UpdateUI(float fValue) const
{
	if (m_pcHealthUI) m_pcHealthUI->UpdateHealthBar( fValue );
}


// Unused
void UDamageComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
