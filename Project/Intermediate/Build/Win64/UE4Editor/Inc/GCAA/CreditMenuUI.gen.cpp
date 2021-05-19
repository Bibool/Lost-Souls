// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/CreditMenuUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreditMenuUI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UCreditMenuUI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UCreditMenuUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	DEFINE_FUNCTION(UCreditMenuUI::execReturnButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnButtonClicked();
		P_NATIVE_END;
	}
	void UCreditMenuUI::StaticRegisterNativesUCreditMenuUI()
	{
		UClass* Class = UCreditMenuUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReturnButtonClicked", &UCreditMenuUI::execReturnButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreditMenuUI_ReturnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreditMenuUI_ReturnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "UI/CreditMenuUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreditMenuUI_ReturnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreditMenuUI, nullptr, "ReturnButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreditMenuUI_ReturnButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreditMenuUI_ReturnButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreditMenuUI_ReturnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreditMenuUI_ReturnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreditMenuUI_NoRegister()
	{
		return UCreditMenuUI::StaticClass();
	}
	struct Z_Construct_UClass_UCreditMenuUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreditMenuUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreditMenuUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreditMenuUI_ReturnButtonClicked, "ReturnButtonClicked" }, // 2480809268
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreditMenuUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CreditMenuUI.h" },
		{ "ModuleRelativePath", "UI/CreditMenuUI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreditMenuUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreditMenuUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreditMenuUI_Statics::ClassParams = {
		&UCreditMenuUI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCreditMenuUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreditMenuUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreditMenuUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreditMenuUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreditMenuUI, 3451004219);
	template<> GCAA_API UClass* StaticClass<UCreditMenuUI>()
	{
		return UCreditMenuUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreditMenuUI(Z_Construct_UClass_UCreditMenuUI, &UCreditMenuUI::StaticClass, TEXT("/Script/GCAA"), TEXT("UCreditMenuUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreditMenuUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
