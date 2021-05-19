// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/IsPlayerInAttackRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsPlayerInAttackRange() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UIsPlayerInAttackRange_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UIsPlayerInAttackRange();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UIsPlayerInAttackRange::StaticRegisterNativesUIsPlayerInAttackRange()
	{
	}
	UClass* Z_Construct_UClass_UIsPlayerInAttackRange_NoRegister()
	{
		return UIsPlayerInAttackRange::StaticClass();
	}
	struct Z_Construct_UClass_UIsPlayerInAttackRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsPlayerInAttackRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerInAttackRange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/IsPlayerInAttackRange.h" },
		{ "ModuleRelativePath", "NPC/IsPlayerInAttackRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsPlayerInAttackRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsPlayerInAttackRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsPlayerInAttackRange_Statics::ClassParams = {
		&UIsPlayerInAttackRange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsPlayerInAttackRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInAttackRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsPlayerInAttackRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsPlayerInAttackRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsPlayerInAttackRange, 545049438);
	template<> GCAA_API UClass* StaticClass<UIsPlayerInAttackRange>()
	{
		return UIsPlayerInAttackRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsPlayerInAttackRange(Z_Construct_UClass_UIsPlayerInAttackRange, &UIsPlayerInAttackRange::StaticClass, TEXT("/Script/GCAA"), TEXT("UIsPlayerInAttackRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsPlayerInAttackRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
