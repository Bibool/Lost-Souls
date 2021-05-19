// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/JournalItemUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalItemUI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UJournalItemUI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UJournalItemUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UJournalItemUI::execJournalItemButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JournalItemButtonClicked();
		P_NATIVE_END;
	}
	void UJournalItemUI::StaticRegisterNativesUJournalItemUI()
	{
		UClass* Class = UJournalItemUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JournalItemButtonClicked", &UJournalItemUI::execJournalItemButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJournalItemUI_JournalItemButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalItemUI_JournalItemButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "UI/JournalItemUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJournalItemUI_JournalItemButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalItemUI, nullptr, "JournalItemButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJournalItemUI_JournalItemButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalItemUI_JournalItemButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJournalItemUI_JournalItemButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJournalItemUI_JournalItemButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJournalItemUI_NoRegister()
	{
		return UJournalItemUI::StaticClass();
	}
	struct Z_Construct_UClass_UJournalItemUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemNameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_itemNameButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemNameBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_itemNameBP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJournalItemUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJournalItemUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJournalItemUI_JournalItemButtonClicked, "JournalItemButtonClicked" }, // 3223660861
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalItemUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/JournalItemUI.h" },
		{ "ModuleRelativePath", "UI/JournalItemUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalItemUI_Statics::NewProp_itemNameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "JournalItemUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/JournalItemUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJournalItemUI_Statics::NewProp_itemNameButton = { "itemNameButton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalItemUI, itemNameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJournalItemUI_Statics::NewProp_itemNameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalItemUI_Statics::NewProp_itemNameButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalItemUI_Statics::NewProp_itemNameBP_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "JournalItemUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/JournalItemUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJournalItemUI_Statics::NewProp_itemNameBP = { "itemNameBP", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalItemUI, itemNameBP), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJournalItemUI_Statics::NewProp_itemNameBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalItemUI_Statics::NewProp_itemNameBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJournalItemUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalItemUI_Statics::NewProp_itemNameButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalItemUI_Statics::NewProp_itemNameBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJournalItemUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJournalItemUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJournalItemUI_Statics::ClassParams = {
		&UJournalItemUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJournalItemUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJournalItemUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJournalItemUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalItemUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJournalItemUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJournalItemUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJournalItemUI, 1150350014);
	template<> GCAA_API UClass* StaticClass<UJournalItemUI>()
	{
		return UJournalItemUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJournalItemUI(Z_Construct_UClass_UJournalItemUI, &UJournalItemUI::StaticClass, TEXT("/Script/GCAA"), TEXT("UJournalItemUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJournalItemUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
