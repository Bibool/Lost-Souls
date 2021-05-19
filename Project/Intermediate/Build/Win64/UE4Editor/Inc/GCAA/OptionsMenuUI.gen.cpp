// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/OptionsMenuUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionsMenuUI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UOptionsMenuUI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UOptionsMenuUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	DEFINE_FUNCTION(UOptionsMenuUI::execReturnButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptionsMenuUI::execCreditsButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreditsButtonClicked();
		P_NATIVE_END;
	}
	void UOptionsMenuUI::StaticRegisterNativesUOptionsMenuUI()
	{
		UClass* Class = UOptionsMenuUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreditsButtonClicked", &UOptionsMenuUI::execCreditsButtonClicked },
			{ "ReturnButtonClicked", &UOptionsMenuUI::execReturnButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOptionsMenuUI_CreditsButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionsMenuUI_CreditsButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "UI/OptionsMenuUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionsMenuUI_CreditsButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionsMenuUI, nullptr, "CreditsButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptionsMenuUI_CreditsButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsMenuUI_CreditsButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptionsMenuUI_CreditsButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOptionsMenuUI_CreditsButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptionsMenuUI_ReturnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionsMenuUI_ReturnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "UI/OptionsMenuUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionsMenuUI_ReturnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionsMenuUI, nullptr, "ReturnButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptionsMenuUI_ReturnButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsMenuUI_ReturnButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptionsMenuUI_ReturnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOptionsMenuUI_ReturnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOptionsMenuUI_NoRegister()
	{
		return UOptionsMenuUI::StaticClass();
	}
	struct Z_Construct_UClass_UOptionsMenuUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptionsMenuUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptionsMenuUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptionsMenuUI_CreditsButtonClicked, "CreditsButtonClicked" }, // 3329979898
		{ &Z_Construct_UFunction_UOptionsMenuUI_ReturnButtonClicked, "ReturnButtonClicked" }, // 1043472212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionsMenuUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/OptionsMenuUI.h" },
		{ "ModuleRelativePath", "UI/OptionsMenuUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptionsMenuUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionsMenuUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOptionsMenuUI_Statics::ClassParams = {
		&UOptionsMenuUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptionsMenuUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsMenuUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptionsMenuUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOptionsMenuUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOptionsMenuUI, 248557257);
	template<> GCAA_API UClass* StaticClass<UOptionsMenuUI>()
	{
		return UOptionsMenuUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOptionsMenuUI(Z_Construct_UClass_UOptionsMenuUI, &UOptionsMenuUI::StaticClass, TEXT("/Script/GCAA"), TEXT("UOptionsMenuUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionsMenuUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
