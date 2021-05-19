// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCHealthBar.h"


void UNPCHealthBar::NativeConstruct()
{
}


void UNPCHealthBar::set_bar_value_percent(float const value)
{
	m_pcHealthBar->SetPercent(value);
}