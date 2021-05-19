// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/SpellManager/Spells/CLightning.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCLightning() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ACLightning_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACLightning();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	GCAA_API UClass* Z_Construct_UClass_ASpellManager_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FCChainLightningStatsStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	GCAA_API UClass* Z_Construct_UClass_UPoolStatusIdentifier_NoRegister();
// End Cross Module References
	void ACLightning::StaticRegisterNativesACLightning()
	{
	}
	UClass* Z_Construct_UClass_ACLightning_NoRegister()
	{
		return ACLightning::StaticClass();
	}
	struct Z_Construct_UClass_ACLightning_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSpellManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSpellManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_sStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPreviousTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPreviousTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcCurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcCurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sTriggerTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_sTriggerTimer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_sTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_sTypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACLightning_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLightning_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpellManager/Spells/CLightning.h" },
		{ "ModuleRelativePath", "SpellManager/Spells/CLightning.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcSpellManager_MetaData[] = {
		{ "ModuleRelativePath", "SpellManager/Spells/CLightning.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcSpellManager = { "m_pcSpellManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLightning, m_pcSpellManager), Z_Construct_UClass_ASpellManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcSpellManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcSpellManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcPlayer_MetaData[] = {
		{ "ModuleRelativePath", "SpellManager/Spells/CLightning.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcPlayer = { "m_pcPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLightning, m_pcPlayer), Z_Construct_UClass_ACPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLightning_Statics::NewProp_m_sStats_MetaData[] = {
		{ "ModuleRelativePath", "SpellManager/Spells/CLightning.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACLightning_Statics::NewProp_m_sStats = { "m_sStats", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLightning, m_sStats), Z_Construct_UScriptStruct_FCChainLightningStatsStruct, METADATA_PARAMS(Z_Construct_UClass_ACLightning_Statics::NewProp_m_sStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLightning_Statics::NewProp_m_sStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcPreviousTarget_MetaData[] = {
		{ "ModuleRelativePath", "SpellManager/Spells/CLightning.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcPreviousTarget = { "m_pcPreviousTarget", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLightning, m_pcPreviousTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcPreviousTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcPreviousTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcCurrentTarget_MetaData[] = {
		{ "ModuleRelativePath", "SpellManager/Spells/CLightning.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcCurrentTarget = { "m_pcCurrentTarget", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLightning, m_pcCurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcCurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcCurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTriggerTimer_MetaData[] = {
		{ "ModuleRelativePath", "SpellManager/Spells/CLightning.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTriggerTimer = { "m_sTriggerTimer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLightning, m_sTriggerTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTriggerTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTriggerTimer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTypes_Inner = { "m_sTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTypes_MetaData[] = {
		{ "ModuleRelativePath", "SpellManager/Spells/CLightning.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTypes = { "m_sTypes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLightning, m_sTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTypes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACLightning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcSpellManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLightning_Statics::NewProp_m_sStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcPreviousTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLightning_Statics::NewProp_m_pcCurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTriggerTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLightning_Statics::NewProp_m_sTypes,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACLightning_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPoolStatusIdentifier_NoRegister, (int32)VTABLE_OFFSET(ACLightning, IPoolStatusIdentifier), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACLightning_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACLightning>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACLightning_Statics::ClassParams = {
		&ACLightning::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACLightning_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACLightning_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACLightning_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACLightning_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACLightning()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACLightning_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACLightning, 3813321465);
	template<> GCAA_API UClass* StaticClass<ACLightning>()
	{
		return ACLightning::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACLightning(Z_Construct_UClass_ACLightning, &ACLightning::StaticClass, TEXT("/Script/GCAA"), TEXT("ACLightning"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACLightning);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
