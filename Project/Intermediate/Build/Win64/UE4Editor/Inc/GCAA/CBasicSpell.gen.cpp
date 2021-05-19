// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/SpellManager/Spells/CBasicSpell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBasicSpell() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ACBasicSpell_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACBasicSpell();
	GCAA_API UClass* Z_Construct_UClass_ASpell();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void ACBasicSpell::StaticRegisterNativesACBasicSpell()
	{
	}
	UClass* Z_Construct_UClass_ACBasicSpell_NoRegister()
	{
		return ACBasicSpell::StaticClass();
	}
	struct Z_Construct_UClass_ACBasicSpell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACBasicSpell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpell,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACBasicSpell_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpellManager/Spells/CBasicSpell.h" },
		{ "ModuleRelativePath", "SpellManager/Spells/CBasicSpell.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACBasicSpell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACBasicSpell>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACBasicSpell_Statics::ClassParams = {
		&ACBasicSpell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACBasicSpell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACBasicSpell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACBasicSpell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACBasicSpell_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACBasicSpell, 2977988652);
	template<> GCAA_API UClass* StaticClass<ACBasicSpell>()
	{
		return ACBasicSpell::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACBasicSpell(Z_Construct_UClass_ACBasicSpell, &ACBasicSpell::StaticClass, TEXT("/Script/GCAA"), TEXT("ACBasicSpell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACBasicSpell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
