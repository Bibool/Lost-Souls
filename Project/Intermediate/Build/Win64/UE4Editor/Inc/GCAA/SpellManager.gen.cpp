// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/SpellManager/SpellManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellManager() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ASpellManager_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ASpellManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GCAA_API UClass* Z_Construct_UClass_ACFireBall_NoRegister();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FCFireBallStatsStruct();
	GCAA_API UClass* Z_Construct_UClass_ACLightning_NoRegister();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FCChainLightningStatsStruct();
	GCAA_API UClass* Z_Construct_UClass_ACBasicSpell_NoRegister();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FCBasicSpellStatsStruct();
	GCAA_API UClass* Z_Construct_UClass_ACBlink_NoRegister();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FBlinkStatsStruct();
	GCAA_API UClass* Z_Construct_UClass_ACWindblast_NoRegister();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FWindBlastStatsStruct();
	GCAA_API UClass* Z_Construct_UClass_ACHeal_NoRegister();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FHealStatsStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
// End Cross Module References
	void ASpellManager::StaticRegisterNativesASpellManager()
	{
	}
	UClass* Z_Construct_UClass_ASpellManager_NoRegister()
	{
		return ASpellManager::StaticClass();
	}
	struct Z_Construct_UClass_ASpellManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireBallBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireBallBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireBallStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireBallStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainLightningBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChainLightningBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainLightningStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChainLightningStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicSpellBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BasicSpellBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicSpellStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasicSpellStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlinkBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlinkStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindBlastBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WindBlastBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindBlastStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindBlastStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HealBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HealStats;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_apcSpellsAsActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_apcSpellsAsActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_apcSpellsAsActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcBlink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcBlink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcHeal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcHeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpellManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpellManager/SpellManager.h" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallBP_MetaData[] = {
		{ "Category", "Spells|Fireball" },
		{ "Comment", "/* The blueprints that will spawn */" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "The blueprints that will spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallBP = { "FireBallBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, FireBallBP), Z_Construct_UClass_ACFireBall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallStats_MetaData[] = {
		{ "Category", "Spells|Fireball" },
		{ "Comment", "/* This holds all values that the ACFireBall will use.*/" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "This holds all values that the ACFireBall will use." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallStats = { "FireBallStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, FireBallStats), Z_Construct_UScriptStruct_FCFireBallStatsStruct, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningBP_MetaData[] = {
		{ "Category", "Spells|Chain Lightning" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningBP = { "ChainLightningBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, ChainLightningBP), Z_Construct_UClass_ACLightning_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningStats_MetaData[] = {
		{ "Category", "Spells|Chain Lightning" },
		{ "Comment", "/* This holds all values that the ACFireBall will use.*/" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "This holds all values that the ACFireBall will use." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningStats = { "ChainLightningStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, ChainLightningStats), Z_Construct_UScriptStruct_FCChainLightningStatsStruct, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_BasicSpellBP_MetaData[] = {
		{ "Category", "Spells| Basic Attack" },
		{ "Comment", "/* The blueprint version of the class that will spawn. */" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "The blueprint version of the class that will spawn." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_BasicSpellBP = { "BasicSpellBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, BasicSpellBP), Z_Construct_UClass_ACBasicSpell_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_BasicSpellBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_BasicSpellBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_BasicSpellStats_MetaData[] = {
		{ "Category", "Spells| Basic Attack" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_BasicSpellStats = { "BasicSpellStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, BasicSpellStats), Z_Construct_UScriptStruct_FCBasicSpellStatsStruct, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_BasicSpellStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_BasicSpellStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkBP_MetaData[] = {
		{ "Category", "Spells|Blink" },
		{ "Comment", "/* The Blink blueprint that the manager will spawn. */" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "The Blink blueprint that the manager will spawn." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkBP = { "BlinkBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, BlinkBP), Z_Construct_UClass_ACBlink_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkStats_MetaData[] = {
		{ "Category", "Spells|Blink" },
		{ "Comment", "/* This holds all values that the blink will use.*/" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "This holds all values that the blink will use." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkStats = { "BlinkStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, BlinkStats), Z_Construct_UScriptStruct_FBlinkStatsStruct, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_WindBlastBP_MetaData[] = {
		{ "Category", "Spells|WindBlast" },
		{ "Comment", "/* The Blink blueprint that the manager will spawn. */" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "The Blink blueprint that the manager will spawn." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_WindBlastBP = { "WindBlastBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, WindBlastBP), Z_Construct_UClass_ACWindblast_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_WindBlastBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_WindBlastBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_WindBlastStats_MetaData[] = {
		{ "Category", "Spells|WindBlast" },
		{ "Comment", "/* This holds all values that the blink will use.*/" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "This holds all values that the blink will use." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_WindBlastStats = { "WindBlastStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, WindBlastStats), Z_Construct_UScriptStruct_FWindBlastStatsStruct, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_WindBlastStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_WindBlastStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_HealBP_MetaData[] = {
		{ "Category", "Spells|Heal" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_HealBP = { "HealBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, HealBP), Z_Construct_UClass_ACHeal_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_HealBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_HealBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_HealStats_MetaData[] = {
		{ "Category", "Spells|Heal" },
		{ "Comment", "/* This holds all values that the heal will use.*/" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "This holds all values that the heal will use." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_HealStats = { "HealStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, HealStats), Z_Construct_UScriptStruct_FHealStatsStruct, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_HealStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_HealStats_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_m_apcSpellsAsActors_Inner = { "m_apcSpellsAsActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_m_apcSpellsAsActors_MetaData[] = {
		{ "Comment", "/** A copy of the above as actors (used for spells to ignore). */" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "A copy of the above as actors (used for spells to ignore)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_m_apcSpellsAsActors = { "m_apcSpellsAsActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, m_apcSpellsAsActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_m_apcSpellsAsActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_m_apcSpellsAsActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcBlink_MetaData[] = {
		{ "Comment", "/**  Pointer to the current blink spell. Used since we need some extra info from it. */" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "Pointer to the current blink spell. Used since we need some extra info from it." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcBlink = { "m_pcBlink", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, m_pcBlink), Z_Construct_UClass_ACBlink_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcBlink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcBlink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcHeal_MetaData[] = {
		{ "Comment", "/**  Pointer to the current heal. Used as it has extra requirements. */" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "Pointer to the current heal. Used as it has extra requirements." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcHeal = { "m_pcHeal", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, m_pcHeal), Z_Construct_UClass_ACHeal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcHeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcHeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcPlayer_MetaData[] = {
		{ "Comment", "/** Pointer to the player character. */" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "Pointer to the player character." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcPlayer = { "m_pcPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, m_pcPlayer), Z_Construct_UClass_ACPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpellManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_BasicSpellBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_BasicSpellStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_WindBlastBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_WindBlastStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_HealBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_HealStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_m_apcSpellsAsActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_m_apcSpellsAsActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcBlink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcHeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_m_pcPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpellManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpellManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpellManager_Statics::ClassParams = {
		&ASpellManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpellManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpellManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpellManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpellManager, 2239033831);
	template<> GCAA_API UClass* StaticClass<ASpellManager>()
	{
		return ASpellManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpellManager(Z_Construct_UClass_ASpellManager, &ASpellManager::StaticClass, TEXT("/Script/GCAA"), TEXT("ASpellManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpellManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
