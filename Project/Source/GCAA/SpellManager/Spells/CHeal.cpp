///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CHeal.h"

#include "GCAA/Player/CPlayer.h"
#include "GCAA/UI/PlayerUI.h"
#include "GCAA/SpellManager/SpellManager.h"

#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACHeal::ACHeal()
{
	PrimaryActorTick.bCanEverTick = true;

	m_bCanCast			= false;
	m_bDoOnce			= false;
	m_fOriginalSpeed	= 0.f;

	SetSpellType( ESpellType::Heal );
	m_eHealType = EHealType::Off;
}

void ACHeal::BeginPlay()
{
	Super::BeginPlay();	
}

void ACHeal::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	
	Regen( DeltaTime );
}

void ACHeal::VFireEvent()
{
	Heal();
}

void ACHeal::Heal()
{
	UE_LOG(LogTemp, Warning, TEXT("Healing."));
	
	m_pcPlayer = Cast<ACPlayer>(GetWorld()->GetFirstPlayerController()->GetCharacter());

	// Stores the original speed of the player.
	static const float kfOriginalSpeed = m_pcPlayer->GetCharacterMovement()->MaxWalkSpeed;
	m_fOriginalSpeed = kfOriginalSpeed;
	// Then we set the penalized speed to be used later.
	static const float kfPenalizedSpeed = (kfOriginalSpeed - m_sSpellStats.Tick_Speed);

	// If our cast is successful, heal depending on the blueprint values.
	if (m_pcPlayer)
	{
		m_pcPlayer->GetCharacterMovement()->MaxWalkSpeed = kfPenalizedSpeed;
		m_pcPlayer->GetPlayerUI()->PlayPulse();
		if ( m_sSpellStats.Animation && m_pcPlayer )
		{
			m_pcPlayer->PlayAnimMontage( m_sSpellStats.Animation, 1.f, "UpperBody");
		}
	
		if ( m_sSpellStats.Use_Gradual_Regeneration )
		{
			m_eHealType = EHealType::Regen;
		}
		else
		{
			if ( !m_bDoOnce )
			{
				m_eHealType = EHealType::Tick;
				GetWorldTimerManager().SetTimer(m_sHealTick, this,  &ACHeal::CB_Heal,  m_sSpellStats.Tick_Speed, true);
				m_bDoOnce = true;
			}
		}
	}
	else
	{
		m_eHealType = EHealType::Off;
		UE_LOG(LogTemp, Warning, TEXT("Cast:Not valid."));
	}
}

void ACHeal::Regen(float DeltaTime)
{
	if ( m_eHealType == EHealType::Regen )
	{
		if ( m_pcPlayer->GetDamageComponent()->Get_Health() < m_pcPlayer->GetDamageComponent()->Get_Max_Health() )
		{
			m_pcPlayer->GetDamageComponent()->SetHealth	( UKismetMathLibrary::FInterpTo(m_pcPlayer->GetDamageComponent()->Get_Health(), m_pcPlayer->GetDamageComponent()->Get_Max_Health() + m_kfOverLap, DeltaTime, m_sSpellStats.Regeneration_Speed  ) );
			m_pcPlayer->GetDamageComponent()->UpdateUI	(  m_pcPlayer->GetDamageComponent()->GetNormalizedHealth() );
		}
		else
		{
			if ( m_sSpellStats.Automagically_End_Spell )
			{
				HealEnd();
			}
		}
	}	
}

void ACHeal::CB_Heal()
{			
	if ( m_pcPlayer->GetDamageComponent()->Get_Health()  <  m_pcPlayer->GetDamageComponent()->m_fBaseHealth )
	{
		if ( m_eHealType == EHealType::Tick )
		{
			m_pcPlayer->GetDamageComponent()->HealEvent( m_sSpellStats.Heal_Amount);
			m_pcPlayer->GetDamageComponent()->UpdateUI(  m_pcPlayer->GetDamageComponent()->GetNormalizedHealth() );
		}
	}
	else
	{
		if ( m_sSpellStats.Automagically_End_Spell )
		{
			HealEnd();
		}
	}
}

void ACHeal::HealEnd()
{
	GetWorldTimerManager().ClearTimer(m_sHealTick);
	if (m_pcPlayer)
	{
		m_pcPlayer->GetPlayerUI()->StopPulse();
		m_pcPlayer->GetCharacterMovement()->MaxWalkSpeed = m_fOriginalSpeed;
	}
	m_eHealType = EHealType::Off;
	m_bDoOnce = false;
	m_bCanCast = false;
}

void ACHeal::SetStats(FHealStatsStruct sStats)
{
	m_sSpellStats = sStats;
}

void ACHeal::SetPlayer(ACPlayer* pcPlayer)
{
	m_pcPlayer = pcPlayer;
}

void ACHeal::SetSpellManager(ASpellManager* pcManager)
{
	m_pcManager = pcManager;
}

