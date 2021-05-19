#pragma once

#include "Runtime/Core/Public/UObject/NameTypes.h"
#include "Runtime/Core/Public/Containers/UnrealString.h"

//list of blackboard keys 
namespace bb_keys
{
	TCHAR const* const target_location = TEXT("TargetLocation");
	TCHAR const* const can_seePlayer = TEXT("CanSeePlayer");
	TCHAR const* const patrol_path_vector = TEXT("PatrolPathVector");
	TCHAR const* const patrol_path_index = TEXT("PatrolPathIndex");
	TCHAR const* const player_is_in_attack_range = TEXT("PlayerIsInAttackRange");
	TCHAR const* const patrolling_npc = TEXT("PatrollingNpc");
	TCHAR const* const moving_npc = TEXT("MovingNpc");
	TCHAR const* const seen_enemy = TEXT("SeenEnemy");
	TCHAR const* const hiding_spot = TEXT("HidingSpot");
	TCHAR const* const seen_ally = TEXT("SeenAlly");
	TCHAR const* const ally_location = TEXT("AllyLocation");
	TCHAR const* const is_investigating = TEXT("IsInvestigating");
	TCHAR const* const noise_location = TEXT("NoiseLocation");
	TCHAR const* const spawn_random_path = TEXT("SpawnRandomPath");
	TCHAR const* const is_npc_active = TEXT("IsNpcActive");
	TCHAR const* const charged_into_object = TEXT("ChargedIntoObject");
}
