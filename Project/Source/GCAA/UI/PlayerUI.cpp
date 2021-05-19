///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "PlayerUI.h"

#include "GCAA/Player/CPlayer.h"
#include "GCAA/SpellManager/SpellManager.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"

#include "Blueprint/WidgetBlueprintLibrary.h"


void UPlayerUI::NativeConstruct()
{
	Super::NativeConstruct();
}

void UPlayerUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick( MyGeometry, InDeltaTime );	
}

void UPlayerUI::RequestUpdate(EUpdateType eAbilityToUpdate)
{
	switch (eAbilityToUpdate)
	{
		case EUpdateType::Fireball:
			GetWorld()->GetTimerManager().SetTimer( m_sFireballUpdater, this, &UPlayerUI::Content_Fireball, 0.0001, true);
			break;
		
		case EUpdateType::Lightning:
			GetWorld()->GetTimerManager().SetTimer( m_sLightningUpdater, this, &UPlayerUI::Content_Lightning, 0.0001, true);
			break;
		
		case EUpdateType::Blink:
			GetWorld()->GetTimerManager().SetTimer( m_sBlinkUpdater, this, &UPlayerUI::Content_Blink, 0.0001, true);
			break;
		
		case EUpdateType::BlinkChargesPB:
			GetWorld()->GetTimerManager().SetTimer( m_sBlinkChargesUpdater, this, &UPlayerUI::Content_BlinkCharges, 0.0001, true);
			break;
		case EUpdateType::BlinkChargesNUM:
			UpdateContent( EUpdateType::BlinkChargesNUM );
			break;
		
		case EUpdateType::Windblast:
			GetWorld()->GetTimerManager().SetTimer( m_sWindblastUpdater, this, &UPlayerUI::Content_Windblast, 0.0001, true);
			break;
		
		default:
			UE_DEBUG_BREAK();
			break;
	}
}

void UPlayerUI::SetSkillIcons( ESkill eSkillToUpdate, UTexture2D* pcResource ) const
{
	if ( pcResource )
	{
		switch ( eSkillToUpdate )
		{
		case ESkill::Blink:
			BlinkProgressBar	->WidgetStyle.BackgroundImage.SetResourceObject( pcResource	);
			break;
		case ESkill::Heal:
			HealProgressBar		->WidgetStyle.BackgroundImage.SetResourceObject( pcResource	);
			break;
		case ESkill::Lightning:
			LightningProgressBar->WidgetStyle.BackgroundImage.SetResourceObject( pcResource	);
			break;
		case ESkill::Windblast:
			WindblastProgressBar->WidgetStyle.BackgroundImage.SetResourceObject( pcResource	);
			break;
		case ESkill::FireBall:
			FireBallProgressBar	->WidgetStyle.BackgroundImage.SetResourceObject( pcResource	);
			break;
		}
	}
}

void UPlayerUI::Content_Fireball() const
{
	if (IsValid()) UpdateContent( EUpdateType::Fireball, m_pcPlayer->GetAbilityCoolDown( ESpellType::Fireball).fSecond, m_pcSpellManager->FireBallStats.Cool_Down, m_sFireballUpdater );
}

void UPlayerUI::Content_Lightning() const
{
	if (IsValid()) UpdateContent( EUpdateType::Lightning, m_pcPlayer->GetAbilityCoolDown( ESpellType::Lightning).fSecond, m_pcSpellManager->ChainLightningStats.Cool_Down, m_sLightningUpdater );
}

void UPlayerUI::Content_Blink() const
{
	if (IsValid()) UpdateContent( EUpdateType::Blink, m_pcPlayer->GetAbilityCoolDown( ESpellType::Blink).fSecond, m_pcSpellManager->BlinkStats.Cool_Down, m_sBlinkUpdater );
}

void UPlayerUI::Content_BlinkCharges() const
{
	if (IsValid()) UpdateContent( EUpdateType::BlinkChargesPB, m_pcSpellManager->GetBlinkRechargeTimer(), m_pcSpellManager->BlinkStats.Recharge_Rate, m_sBlinkChargesUpdater  );
}

void UPlayerUI::Content_Windblast() const
{
	if (IsValid()) UpdateContent( EUpdateType::Windblast, m_pcPlayer->GetAbilityCoolDown( ESpellType::WindBlast).fSecond , m_pcSpellManager->WindBlastStats.Cool_Down, m_sWindblastUpdater );
}

bool UPlayerUI::IsValid() const
{
	return ( m_pcPlayer && m_pcSpellManager );
}

void UPlayerUI::UpdateContent( EUpdateType eAbilityToUpdate, float fCurrentCooldown, float fCooldown, FTimerHandle sCurrentTimer ) const
{
	// Pointer to the Text block and Progress we want to update. This is set inside the switch.
	UTextBlock*		pcTextToUpdate			= nullptr;
	UProgressBar*	pcProgressBarToUpdate	= nullptr;

	// Get the cooldown as a single decimal value, e.g 1.243000 becomes 1.2. This will be used for the Text block.
	const float fRoundedCooldown = static_cast<int>(FMath::Floor( fCurrentCooldown * 10.f ))  / 10.f;
	// Current cooldown value divided by the cooldown to get a range from 0 to 1. Used by the progress bar percent.
	const float fNormalizedRange = fRoundedCooldown / fCooldown;
	
	// The text that will be set. By default has the cooldown text.
	FText sCooldownText = FText::AsNumber( fRoundedCooldown );
	// In case the current cooldown is 0, or less than 0 (which is unlikely), clears the text.
	// and in which case, stop updating.
	if (fRoundedCooldown <= 0 && eAbilityToUpdate != EUpdateType::BlinkChargesNUM )
	{
		sCooldownText = FText::FromString(" ");
		GetWorld()->GetTimerManager().ClearTimer( sCurrentTimer );
	}
	if ( eAbilityToUpdate == EUpdateType::BlinkChargesNUM )
	{
		sCooldownText = FText::AsNumber( m_pcSpellManager->GetBlinkCount() );
	}
	
	switch (eAbilityToUpdate)
	{
	case EUpdateType::Fireball:
		pcTextToUpdate			= FireBallCooldownText;
		pcProgressBarToUpdate	= FireBallProgressBar;
		break;
			
	case EUpdateType::Lightning:
		pcTextToUpdate			= LightningCooldownText;
		pcProgressBarToUpdate	= LightningProgressBar;
		break;
			
	case EUpdateType::Blink:
		pcTextToUpdate			= BlinkCooldownText;
		pcProgressBarToUpdate	= BlinkProgressBar;
		break;
			
	case EUpdateType::BlinkChargesPB:
		pcProgressBarToUpdate	= BlinkChargesProgressBar;
		break;
		
	case EUpdateType::BlinkChargesNUM:
		pcTextToUpdate			= BlinkChargesCooldownText;
		break;
			
	case EUpdateType::Windblast:
		pcTextToUpdate			= WindblastCooldownText;
		pcProgressBarToUpdate	= WindblastProgressBar;
		break;
			
	default:
		break;
	}

	// Necessary to split them, since we don't want to update the text when it's the blink recharge.
	if ( pcTextToUpdate )
	{
		pcTextToUpdate		 -> SetText		( sCooldownText		);		
	}
	if ( pcProgressBarToUpdate )
	{
		pcProgressBarToUpdate -> SetPercent	( fNormalizedRange	);
	}
	
}

#pragma region Setters
void UPlayerUI::SetCPlayer(ACPlayer* player)
{
	m_pcPlayer = player;
}

void UPlayerUI::SetSpellManager(ASpellManager* spellManager)
{
	m_pcSpellManager = spellManager;
}

#pragma endregion