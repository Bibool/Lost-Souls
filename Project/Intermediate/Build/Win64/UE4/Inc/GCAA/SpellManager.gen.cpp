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
	GCAA_API UClass* Z_Construct_UClass_ACChainLightning_NoRegister();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FCChainLightningStatsStruct();
	GCAA_API UClass* Z_Construct_UClass_ACBlink_NoRegister();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FBlinkStatsStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlinkBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlinkStats;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_acSpellsAsleep_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acSpellsAsleep_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_acSpellsAsleep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mpcBlink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mpcBlink;
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningBP = { "ChainLightningBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, ChainLightningBP), Z_Construct_UClass_ACChainLightning_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningBP_MetaData)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_acSpellsAsleep_Inner = { "acSpellsAsleep", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_acSpellsAsleep_MetaData[] = {
		{ "Comment", "// DONE AS OF 10/02/2021 > TODO: Move this to use AActor*\n// The current logic follows as such:\n// Player requests Fireball > SpellManager finds a Sleeping fireball and moves it to the Awake  > launches it > Fireball dies and goes to Sleeping.\n// We now use a single pool to handle all spells.\n" },
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
		{ "ToolTip", "DONE AS OF 10/02/2021 > TODO: Move this to use AActor*\nThe current logic follows as such:\nPlayer requests Fireball > SpellManager finds a Sleeping fireball and moves it to the Awake  > launches it > Fireball dies and goes to Sleeping.\nWe now use a single pool to handle all spells." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_acSpellsAsleep = { "acSpellsAsleep", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, acSpellsAsleep), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_acSpellsAsleep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_acSpellsAsleep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpellManager_Statics::NewProp_mpcBlink_MetaData[] = {
		{ "ModuleRelativePath", "SpellManager/SpellManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpellManager_Statics::NewProp_mpcBlink = { "mpcBlink", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpellManager, mpcBlink), Z_Construct_UClass_ACBlink_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpellManager_Statics::NewProp_mpcBlink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpellManager_Statics::NewProp_mpcBlink_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpellManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_FireBallStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_ChainLightningStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_BlinkStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_acSpellsAsleep_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_acSpellsAsleep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellManager_Statics::NewProp_mpcBlink,
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
	IMPLEMENT_CLASS(ASpellManager, 1990658628);
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
