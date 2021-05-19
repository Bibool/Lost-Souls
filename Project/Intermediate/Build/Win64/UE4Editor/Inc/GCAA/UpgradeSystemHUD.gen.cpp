// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UpgradeSystem/UpgradeSystemHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgradeSystemHUD() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AUpgradeSystemHUD_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AUpgradeSystemHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void AUpgradeSystemHUD::StaticRegisterNativesAUpgradeSystemHUD()
	{
	}
	UClass* Z_Construct_UClass_AUpgradeSystemHUD_NoRegister()
	{
		return AUpgradeSystemHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUpgradeSystemHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUpgradeSystemHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpgradeSystemHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UpgradeSystem/UpgradeSystemHUD.h" },
		{ "ModuleRelativePath", "UpgradeSystem/UpgradeSystemHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpgradeSystemHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpgradeSystemHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpgradeSystemHUD_Statics::ClassParams = {
		&AUpgradeSystemHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUpgradeSystemHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUpgradeSystemHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUpgradeSystemHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUpgradeSystemHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUpgradeSystemHUD, 1323584633);
	template<> GCAA_API UClass* StaticClass<AUpgradeSystemHUD>()
	{
		return AUpgradeSystemHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUpgradeSystemHUD(Z_Construct_UClass_AUpgradeSystemHUD, &AUpgradeSystemHUD::StaticClass, TEXT("/Script/GCAA"), TEXT("AUpgradeSystemHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUpgradeSystemHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
