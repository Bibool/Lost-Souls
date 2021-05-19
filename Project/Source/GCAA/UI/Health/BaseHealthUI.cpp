// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseHealthUI.h"

#include "Components/ProgressBar.h"

void UBaseHealthUI::UpdateHealthBar( float fNormalizedValue ) const
{
	if ( m_pcHealthBar )
	{
		m_pcHealthBar->SetPercent( fNormalizedValue );
	}
}

void UBaseHealthUI::UpdateHealthBar(float fCurrentValue, float fTopValue) const
{
	if ( m_pcHealthBar )
	{
		m_pcHealthBar->SetPercent( fCurrentValue / fTopValue );
	}
}

void UBaseHealthUI::SetOwner(AActor* pOwner)
{
	m_pcOwner = pOwner;
}

void UBaseHealthUI::SetPlayer(ACPlayer* pPlayer)
{
	m_pcPlayer = pPlayer;
}
