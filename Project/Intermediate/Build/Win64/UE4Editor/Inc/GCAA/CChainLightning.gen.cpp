// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Deprecated/Spells/CChainLightning.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCChainLightning() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ACChainLightning_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACChainLightning();
	GCAA_API UClass* Z_Construct_UClass_ASpell();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ACChainLightning::StaticRegisterNativesACChainLightning()
	{
	}
	UClass* Z_Construct_UClass_ACChainLightning_NoRegister()
	{
		return ACChainLightning::StaticClass();
	}
	struct Z_Construct_UClass_ACChainLightning_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pcActorTargetToRemember_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcActorTargetToRemember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mpcActorTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mpcActorTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACChainLightning_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpell,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACChainLightning_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Deprecated/Spells/CChainLightning.h" },
		{ "ModuleRelativePath", "Deprecated/Spells/CChainLightning.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACChainLightning_Statics::NewProp_pcActorTargetToRemember_MetaData[] = {
		{ "ModuleRelativePath", "Deprecated/Spells/CChainLightning.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACChainLightning_Statics::NewProp_pcActorTargetToRemember = { "pcActorTargetToRemember", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACChainLightning, pcActorTargetToRemember), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACChainLightning_Statics::NewProp_pcActorTargetToRemember_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACChainLightning_Statics::NewProp_pcActorTargetToRemember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACChainLightning_Statics::NewProp_mpcActorTarget_MetaData[] = {
		{ "Comment", "// The struct that holds all the stats for this spell.\n" },
		{ "ModuleRelativePath", "Deprecated/Spells/CChainLightning.h" },
		{ "ToolTip", "The struct that holds all the stats for this spell." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACChainLightning_Statics::NewProp_mpcActorTarget = { "mpcActorTarget", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACChainLightning, mpcActorTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACChainLightning_Statics::NewProp_mpcActorTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACChainLightning_Statics::NewProp_mpcActorTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACChainLightning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACChainLightning_Statics::NewProp_pcActorTargetToRemember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACChainLightning_Statics::NewProp_mpcActorTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACChainLightning_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACChainLightning>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACChainLightning_Statics::ClassParams = {
		&ACChainLightning::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACChainLightning_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACChainLightning_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACChainLightning_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACChainLightning_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACChainLightning()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACChainLightning_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACChainLightning, 1969125984);
	template<> GCAA_API UClass* StaticClass<ACChainLightning>()
	{
		return ACChainLightning::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACChainLightning(Z_Construct_UClass_ACChainLightning, &ACChainLightning::StaticClass, TEXT("/Script/GCAA"), TEXT("ACChainLightning"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACChainLightning);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
