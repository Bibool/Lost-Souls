// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/PlayerInventoryUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInventoryUI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UPlayerInventoryUI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UPlayerInventoryUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UPlayerInventoryUI::StaticRegisterNativesUPlayerInventoryUI()
	{
	}
	UClass* Z_Construct_UClass_UPlayerInventoryUI_NoRegister()
	{
		return UPlayerInventoryUI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInventoryUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInventoryUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerInventoryUI.h" },
		{ "ModuleRelativePath", "UI/PlayerInventoryUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInventoryUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInventoryUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInventoryUI_Statics::ClassParams = {
		&UPlayerInventoryUI::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInventoryUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInventoryUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInventoryUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInventoryUI, 3414748245);
	template<> GCAA_API UClass* StaticClass<UPlayerInventoryUI>()
	{
		return UPlayerInventoryUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInventoryUI(Z_Construct_UClass_UPlayerInventoryUI, &UPlayerInventoryUI::StaticClass, TEXT("/Script/GCAA"), TEXT("UPlayerInventoryUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInventoryUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
