// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/MainMenu/OldMainMenu/MainMenuPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuPlayerController() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AMainMenuPlayerController_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AMainMenuPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void AMainMenuPlayerController::StaticRegisterNativesAMainMenuPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMainMenuPlayerController_NoRegister()
	{
		return AMainMenuPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UI/MainMenu/OldMainMenu/MainMenuPlayerController.h" },
		{ "ModuleRelativePath", "UI/MainMenu/OldMainMenu/MainMenuPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuPlayerController_Statics::ClassParams = {
		&AMainMenuPlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuPlayerController, 1745905963);
	template<> GCAA_API UClass* StaticClass<AMainMenuPlayerController>()
	{
		return AMainMenuPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuPlayerController(Z_Construct_UClass_AMainMenuPlayerController, &AMainMenuPlayerController::StaticClass, TEXT("/Script/GCAA"), TEXT("AMainMenuPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
