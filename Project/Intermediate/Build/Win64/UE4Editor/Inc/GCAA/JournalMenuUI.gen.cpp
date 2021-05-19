// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/JournalMenuUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalMenuUI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UJournalMenuUI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UJournalMenuUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UJournalMenuUI::execUpdateJournalPage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_iPageToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateJournalPage(Z_Param_iPageToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJournalMenuUI::execReturnButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnButtonClicked();
		P_NATIVE_END;
	}
	void UJournalMenuUI::StaticRegisterNativesUJournalMenuUI()
	{
		UClass* Class = UJournalMenuUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReturnButtonClicked", &UJournalMenuUI::execReturnButtonClicked },
			{ "UpdateJournalPage", &UJournalMenuUI::execUpdateJournalPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJournalMenuUI_ReturnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalMenuUI_ReturnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "UI/JournalMenuUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJournalMenuUI_ReturnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalMenuUI, nullptr, "ReturnButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJournalMenuUI_ReturnButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalMenuUI_ReturnButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJournalMenuUI_ReturnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJournalMenuUI_ReturnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics
	{
		struct JournalMenuUI_eventUpdateJournalPage_Parms
		{
			int32 iPageToDisplay;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iPageToDisplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics::NewProp_iPageToDisplay = { "iPageToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalMenuUI_eventUpdateJournalPage_Parms, iPageToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics::NewProp_iPageToDisplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "UI/JournalMenuUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalMenuUI, nullptr, "UpdateJournalPage", nullptr, nullptr, sizeof(JournalMenuUI_eventUpdateJournalPage_Parms), Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJournalMenuUI_NoRegister()
	{
		return UJournalMenuUI::StaticClass();
	}
	struct Z_Construct_UClass_UJournalMenuUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JournalImageBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JournalImageBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JournalMenuWasDisplayedInstantlyOnPickup_MetaData[];
#endif
		static void NewProp_JournalMenuWasDisplayedInstantlyOnPickup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JournalMenuWasDisplayedInstantlyOnPickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJournalMenuUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJournalMenuUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJournalMenuUI_ReturnButtonClicked, "ReturnButtonClicked" }, // 2122553057
		{ &Z_Construct_UFunction_UJournalMenuUI_UpdateJournalPage, "UpdateJournalPage" }, // 4032608381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalMenuUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/JournalMenuUI.h" },
		{ "ModuleRelativePath", "UI/JournalMenuUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalImageBP_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "JournalMenuUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/JournalMenuUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalImageBP = { "JournalImageBP", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalMenuUI, JournalImageBP), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalImageBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalImageBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalMenuWasDisplayedInstantlyOnPickup_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "JournalMenuUI" },
		{ "ModuleRelativePath", "UI/JournalMenuUI.h" },
	};
#endif
	void Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalMenuWasDisplayedInstantlyOnPickup_SetBit(void* Obj)
	{
		((UJournalMenuUI*)Obj)->JournalMenuWasDisplayedInstantlyOnPickup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalMenuWasDisplayedInstantlyOnPickup = { "JournalMenuWasDisplayedInstantlyOnPickup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UJournalMenuUI), &Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalMenuWasDisplayedInstantlyOnPickup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalMenuWasDisplayedInstantlyOnPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalMenuWasDisplayedInstantlyOnPickup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJournalMenuUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalImageBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalMenuUI_Statics::NewProp_JournalMenuWasDisplayedInstantlyOnPickup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJournalMenuUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJournalMenuUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJournalMenuUI_Statics::ClassParams = {
		&UJournalMenuUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJournalMenuUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJournalMenuUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJournalMenuUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalMenuUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJournalMenuUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJournalMenuUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJournalMenuUI, 1056493196);
	template<> GCAA_API UClass* StaticClass<UJournalMenuUI>()
	{
		return UJournalMenuUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJournalMenuUI(Z_Construct_UClass_UJournalMenuUI, &UJournalMenuUI::StaticClass, TEXT("/Script/GCAA"), TEXT("UJournalMenuUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJournalMenuUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
