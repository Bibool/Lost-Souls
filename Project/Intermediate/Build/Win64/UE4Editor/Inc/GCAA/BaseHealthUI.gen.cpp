// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/Health/BaseHealthUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseHealthUI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UBaseHealthUI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UBaseHealthUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
// End Cross Module References
	void UBaseHealthUI::StaticRegisterNativesUBaseHealthUI()
	{
	}
	UClass* Z_Construct_UClass_UBaseHealthUI_NoRegister()
	{
		return UBaseHealthUI::StaticClass();
	}
	struct Z_Construct_UClass_UBaseHealthUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcHealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcHealthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseHealthUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseHealthUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Health/BaseHealthUI.h" },
		{ "ModuleRelativePath", "UI/Health/BaseHealthUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcHealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BaseHealthUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Health/BaseHealthUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcHealthBar = { "m_pcHealthBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseHealthUI, m_pcHealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcHealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcHealthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcOwner_MetaData[] = {
		{ "ModuleRelativePath", "UI/Health/BaseHealthUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcOwner = { "m_pcOwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseHealthUI, m_pcOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcPlayer_MetaData[] = {
		{ "ModuleRelativePath", "UI/Health/BaseHealthUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcPlayer = { "m_pcPlayer", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseHealthUI, m_pcPlayer), Z_Construct_UClass_ACPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseHealthUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcHealthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseHealthUI_Statics::NewProp_m_pcPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseHealthUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseHealthUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseHealthUI_Statics::ClassParams = {
		&UBaseHealthUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseHealthUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHealthUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseHealthUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHealthUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseHealthUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseHealthUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseHealthUI, 2510381778);
	template<> GCAA_API UClass* StaticClass<UBaseHealthUI>()
	{
		return UBaseHealthUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseHealthUI(Z_Construct_UClass_UBaseHealthUI, &UBaseHealthUI::StaticClass, TEXT("/Script/GCAA"), TEXT("UBaseHealthUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseHealthUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
