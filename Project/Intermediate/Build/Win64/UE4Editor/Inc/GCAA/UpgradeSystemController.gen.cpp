// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UpgradeSystem/UpgradeSystemController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgradeSystemController() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AUpgradeSystemController_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AUpgradeSystemController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void AUpgradeSystemController::StaticRegisterNativesAUpgradeSystemController()
	{
	}
	UClass* Z_Construct_UClass_AUpgradeSystemController_NoRegister()
	{
		return AUpgradeSystemController::StaticClass();
	}
	struct Z_Construct_UClass_AUpgradeSystemController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUpgradeSystemController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpgradeSystemController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UpgradeSystem/UpgradeSystemController.h" },
		{ "ModuleRelativePath", "UpgradeSystem/UpgradeSystemController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpgradeSystemController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpgradeSystemController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpgradeSystemController_Statics::ClassParams = {
		&AUpgradeSystemController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUpgradeSystemController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUpgradeSystemController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUpgradeSystemController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUpgradeSystemController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUpgradeSystemController, 2520327934);
	template<> GCAA_API UClass* StaticClass<AUpgradeSystemController>()
	{
		return AUpgradeSystemController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUpgradeSystemController(Z_Construct_UClass_AUpgradeSystemController, &AUpgradeSystemController::StaticClass, TEXT("/Script/GCAA"), TEXT("AUpgradeSystemController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUpgradeSystemController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
