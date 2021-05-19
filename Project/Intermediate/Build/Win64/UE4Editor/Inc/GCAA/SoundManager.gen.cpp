// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/SoundSystem/SoundManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundManager() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ASoundManager_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ASoundManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void ASoundManager::StaticRegisterNativesASoundManager()
	{
	}
	UClass* Z_Construct_UClass_ASoundManager_NoRegister()
	{
		return ASoundManager::StaticClass();
	}
	struct Z_Construct_UClass_ASoundManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainSCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainSCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepSinS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepSinS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepColS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepColS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpingS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpingS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHurtS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHurtS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDeathS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerDeathS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDashS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerDashS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAttacks1S_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AutoAttacks1S;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireballS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireballS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireballColS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireballColS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightningBolt1S_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightningBolt1S;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurifyS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurifyS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindblastS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindblastS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlinkS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushingBlocksS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PushingBlocksS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpeningDoorsS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpeningDoorsS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingPlatformsS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovingPlatformsS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatueRotatingS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatueRotatingS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatueAttackS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatueAttackS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PyroxenesFoostepsS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PyroxenesFoostepsS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PyroxenesChargingS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PyroxenesChargingS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PyroxenesAttackS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PyroxenesAttackS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantleShotgunAttackS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantleShotgunAttackS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantleChargeRoarS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantleChargeRoarS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantleChargeS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantleChargeS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantleLeapSoundS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantleLeapSoundS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantleLeapLandS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantleLeapLandS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErosionSniperS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ErosionSniperS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErosionFiringMissilesS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ErosionFiringMissilesS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErosionMissilesCollidingS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ErosionMissilesCollidingS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyFloatingS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyFloatingS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnavalaibleInteractionS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnavalaibleInteractionS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoundManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundSystem/SoundManager.h" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_MainS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Main Theme Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Main Theme Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_MainS = { "MainS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, MainS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_MainS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_MainS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_MainSCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_MainSCue = { "MainSCue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, MainSCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_MainSCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_MainSCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_CombatS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Combat Theme Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Combat Theme Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_CombatS = { "CombatS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, CombatS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_CombatS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_CombatS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_FootstepSinS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Footstep Singular Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Footstep Singular Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_FootstepSinS = { "FootstepSinS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, FootstepSinS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_FootstepSinS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_FootstepSinS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_FootstepColS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Footstep Collection Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Footstep Collection Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_FootstepColS = { "FootstepColS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, FootstepColS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_FootstepColS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_FootstepColS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_JumpingS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Jumping Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Jumping Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_JumpingS = { "JumpingS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, JumpingS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_JumpingS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_JumpingS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerHurtS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Player Hurt Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Player Hurt Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerHurtS = { "PlayerHurtS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, PlayerHurtS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerHurtS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerHurtS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerDeathS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Player Death Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Player Death Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerDeathS = { "PlayerDeathS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, PlayerDeathS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerDeathS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerDeathS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerDashS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Player Dash Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Player Dash Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerDashS = { "PlayerDashS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, PlayerDashS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerDashS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerDashS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_AutoAttacks1S_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Auto Attacks Varient 1 Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Auto Attacks Varient 1 Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_AutoAttacks1S = { "AutoAttacks1S", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, AutoAttacks1S), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_AutoAttacks1S_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_AutoAttacks1S_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_FireballS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Fireball Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Fireball Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_FireballS = { "FireballS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, FireballS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_FireballS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_FireballS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_FireballColS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Fireball Collision Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Fireball Collision Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_FireballColS = { "FireballColS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, FireballColS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_FireballColS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_FireballColS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_LightningBolt1S_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Lightning Bolt Varient 1 Sound \n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Lightning Bolt Varient 1 Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_LightningBolt1S = { "LightningBolt1S", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, LightningBolt1S), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_LightningBolt1S_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_LightningBolt1S_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_PurifyS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Purify Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Purify Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_PurifyS = { "PurifyS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, PurifyS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_PurifyS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_PurifyS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_WindblastS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Windblast Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Windblast Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_WindblastS = { "WindblastS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, WindblastS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_WindblastS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_WindblastS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_BlinkS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Blink Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Blink Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_BlinkS = { "BlinkS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, BlinkS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_BlinkS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_BlinkS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_PushingBlocksS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Pushing Blocks Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Pushing Blocks Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_PushingBlocksS = { "PushingBlocksS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, PushingBlocksS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_PushingBlocksS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_PushingBlocksS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_OpeningDoorsS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Opening Doors Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Opening Doors Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_OpeningDoorsS = { "OpeningDoorsS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, OpeningDoorsS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_OpeningDoorsS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_OpeningDoorsS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_CollectionS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Collection Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Collection Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_CollectionS = { "CollectionS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, CollectionS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_CollectionS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_CollectionS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_MovingPlatformsS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Moving Platforms Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Moving Platforms Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_MovingPlatformsS = { "MovingPlatformsS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, MovingPlatformsS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_MovingPlatformsS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_MovingPlatformsS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_StatueRotatingS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Statue Rotating Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Statue Rotating Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_StatueRotatingS = { "StatueRotatingS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, StatueRotatingS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_StatueRotatingS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_StatueRotatingS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_StatueAttackS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Statue Attack Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Statue Attack Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_StatueAttackS = { "StatueAttackS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, StatueAttackS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_StatueAttackS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_StatueAttackS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesFoostepsS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Pyroxenes Footsteps Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Pyroxenes Footsteps Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesFoostepsS = { "PyroxenesFoostepsS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, PyroxenesFoostepsS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesFoostepsS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesFoostepsS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesChargingS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Pyroxenes Charging Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Pyroxenes Charging Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesChargingS = { "PyroxenesChargingS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, PyroxenesChargingS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesChargingS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesChargingS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesAttackS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Pyroxenes Attack Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Pyroxenes Attack Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesAttackS = { "PyroxenesAttackS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, PyroxenesAttackS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesAttackS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesAttackS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleShotgunAttackS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Mantle Shotgun Attack Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Mantle Shotgun Attack Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleShotgunAttackS = { "MantleShotgunAttackS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, MantleShotgunAttackS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleShotgunAttackS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleShotgunAttackS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleChargeRoarS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Mantle Charge Roar Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Mantle Charge Roar Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleChargeRoarS = { "MantleChargeRoarS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, MantleChargeRoarS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleChargeRoarS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleChargeRoarS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleChargeS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Mantle Charge Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Mantle Charge Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleChargeS = { "MantleChargeS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, MantleChargeS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleChargeS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleChargeS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleLeapSoundS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Mantle Leap Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Mantle Leap Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleLeapSoundS = { "MantleLeapSoundS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, MantleLeapSoundS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleLeapSoundS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleLeapSoundS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleLeapLandS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Mantle Leap Land Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Mantle Leap Land Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleLeapLandS = { "MantleLeapLandS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, MantleLeapLandS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleLeapLandS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleLeapLandS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionSniperS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Erosion Sniper Firing Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Erosion Sniper Firing Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionSniperS = { "ErosionSniperS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, ErosionSniperS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionSniperS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionSniperS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionFiringMissilesS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Erosion Firing Missiles Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Erosion Firing Missiles Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionFiringMissilesS = { "ErosionFiringMissilesS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, ErosionFiringMissilesS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionFiringMissilesS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionFiringMissilesS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionMissilesCollidingS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Erosion Missiles Colliding Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Erosion Missiles Colliding Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionMissilesCollidingS = { "ErosionMissilesCollidingS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, ErosionMissilesCollidingS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionMissilesCollidingS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionMissilesCollidingS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_EnemyFloatingS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Enemy Floating Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Enemy Floating Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_EnemyFloatingS = { "EnemyFloatingS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, EnemyFloatingS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_EnemyFloatingS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_EnemyFloatingS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoundManager_Statics::NewProp_UnavalaibleInteractionS_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "// Unavailable Interaction Sound\n" },
		{ "ModuleRelativePath", "SoundSystem/SoundManager.h" },
		{ "ToolTip", "Unavailable Interaction Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundManager_Statics::NewProp_UnavalaibleInteractionS = { "UnavalaibleInteractionS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoundManager, UnavalaibleInteractionS), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::NewProp_UnavalaibleInteractionS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::NewProp_UnavalaibleInteractionS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoundManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_MainS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_MainSCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_CombatS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_FootstepSinS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_FootstepColS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_JumpingS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerHurtS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerDeathS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_PlayerDashS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_AutoAttacks1S,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_FireballS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_FireballColS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_LightningBolt1S,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_PurifyS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_WindblastS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_BlinkS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_PushingBlocksS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_OpeningDoorsS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_CollectionS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_MovingPlatformsS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_StatueRotatingS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_StatueAttackS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesFoostepsS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesChargingS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_PyroxenesAttackS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleShotgunAttackS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleChargeRoarS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleChargeS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleLeapSoundS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_MantleLeapLandS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionSniperS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionFiringMissilesS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_ErosionMissilesCollidingS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_EnemyFloatingS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundManager_Statics::NewProp_UnavalaibleInteractionS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoundManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoundManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASoundManager_Statics::ClassParams = {
		&ASoundManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASoundManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASoundManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASoundManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASoundManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASoundManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASoundManager, 829131464);
	template<> GCAA_API UClass* StaticClass<ASoundManager>()
	{
		return ASoundManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASoundManager(Z_Construct_UClass_ASoundManager, &ASoundManager::StaticClass, TEXT("/Script/GCAA"), TEXT("ASoundManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoundManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
