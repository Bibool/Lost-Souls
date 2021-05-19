// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/PlayerInventoryItemUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInventoryItemUI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UPlayerInventoryItemUI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UPlayerInventoryItemUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerInventoryItemUI::execInventoryItemButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InventoryItemButtonClicked();
		P_NATIVE_END;
	}
	void UPlayerInventoryItemUI::StaticRegisterNativesUPlayerInventoryItemUI()
	{
		UClass* Class = UPlayerInventoryItemUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InventoryItemButtonClicked", &UPlayerInventoryItemUI::execInventoryItemButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInventoryItemUI_InventoryItemButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInventoryItemUI_InventoryItemButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "UI/PlayerInventoryItemUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryItemUI_InventoryItemButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryItemUI, nullptr, "InventoryItemButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInventoryItemUI_InventoryItemButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryItemUI_InventoryItemButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInventoryItemUI_InventoryItemButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInventoryItemUI_InventoryItemButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerInventoryItemUI_NoRegister()
	{
		return UPlayerInventoryItemUI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInventoryItemUI_Statics
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
	UObject* (*const Z_Construct_UClass_UPlayerInventoryItemUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInventoryItemUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInventoryItemUI_InventoryItemButtonClicked, "InventoryItemButtonClicked" }, // 1189484942
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryItemUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerInventoryItemUI.h" },
		{ "ModuleRelativePath", "UI/PlayerInventoryItemUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryItemUI_Statics::NewProp_itemNameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerInventoryItemUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerInventoryItemUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryItemUI_Statics::NewProp_itemNameButton = { "itemNameButton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInventoryItemUI, itemNameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventoryItemUI_Statics::NewProp_itemNameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryItemUI_Statics::NewProp_itemNameButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventoryItemUI_Statics::NewProp_itemNameBP_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerInventoryItemUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerInventoryItemUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryItemUI_Statics::NewProp_itemNameBP = { "itemNameBP", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInventoryItemUI, itemNameBP), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventoryItemUI_Statics::NewProp_itemNameBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryItemUI_Statics::NewProp_itemNameBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInventoryItemUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryItemUI_Statics::NewProp_itemNameButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryItemUI_Statics::NewProp_itemNameBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInventoryItemUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInventoryItemUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInventoryItemUI_Statics::ClassParams = {
		&UPlayerInventoryItemUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerInventoryItemUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryItemUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInventoryItemUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryItemUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInventoryItemUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInventoryItemUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInventoryItemUI, 1724257795);
	template<> GCAA_API UClass* StaticClass<UPlayerInventoryItemUI>()
	{
		return UPlayerInventoryItemUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInventoryItemUI(Z_Construct_UClass_UPlayerInventoryItemUI, &UPlayerInventoryItemUI::StaticClass, TEXT("/Script/GCAA"), TEXT("UPlayerInventoryItemUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInventoryItemUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
