// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UpgradeSystem/CUpgradeSystemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUpgradeSystemWidget() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UCUpgradeSystemWidget_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UCUpgradeSystemWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCUpgradeSystemWidget::execVUpgradeDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VUpgradeDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCUpgradeSystemWidget::execVUpgradeSkill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VUpgradeSkill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCUpgradeSystemWidget::execVQuitUpgradeMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VQuitUpgradeMenu();
		P_NATIVE_END;
	}
	void UCUpgradeSystemWidget::StaticRegisterNativesUCUpgradeSystemWidget()
	{
		UClass* Class = UCUpgradeSystemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VQuitUpgradeMenu", &UCUpgradeSystemWidget::execVQuitUpgradeMenu },
			{ "VUpgradeDamage", &UCUpgradeSystemWidget::execVUpgradeDamage },
			{ "VUpgradeSkill", &UCUpgradeSystemWidget::execVUpgradeSkill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCUpgradeSystemWidget_VQuitUpgradeMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUpgradeSystemWidget_VQuitUpgradeMenu_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the QuitUpgradeMenu Button is clicked\n" },
		{ "ModuleRelativePath", "UpgradeSystem/CUpgradeSystemWidget.h" },
		{ "ToolTip", "Called when the QuitUpgradeMenu Button is clicked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUpgradeSystemWidget_VQuitUpgradeMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUpgradeSystemWidget, nullptr, "VQuitUpgradeMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUpgradeSystemWidget_VQuitUpgradeMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUpgradeSystemWidget_VQuitUpgradeMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUpgradeSystemWidget_VQuitUpgradeMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUpgradeSystemWidget_VQuitUpgradeMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the Upgrade Damage Button is clicked\n" },
		{ "ModuleRelativePath", "UpgradeSystem/CUpgradeSystemWidget.h" },
		{ "ToolTip", "Called when the Upgrade Damage Button is clicked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUpgradeSystemWidget, nullptr, "VUpgradeDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeSkill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeSkill_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the UpgradeSkill Button is clicked\n" },
		{ "ModuleRelativePath", "UpgradeSystem/CUpgradeSystemWidget.h" },
		{ "ToolTip", "Called when the UpgradeSkill Button is clicked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUpgradeSystemWidget, nullptr, "VUpgradeSkill", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCUpgradeSystemWidget_NoRegister()
	{
		return UCUpgradeSystemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCUpgradeSystemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeSystemLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpgradeSystemLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpgradeSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpgradeDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitUpgradeMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitUpgradeMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUpgradeSystemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCUpgradeSystemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUpgradeSystemWidget_VQuitUpgradeMenu, "VQuitUpgradeMenu" }, // 315643428
		{ &Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeDamage, "VUpgradeDamage" }, // 2176205487
		{ &Z_Construct_UFunction_UCUpgradeSystemWidget_VUpgradeSkill, "VUpgradeSkill" }, // 2675719119
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUpgradeSystemWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UpgradeSystem/CUpgradeSystemWidget.h" },
		{ "ModuleRelativePath", "UpgradeSystem/CUpgradeSystemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeSystemLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UpgradeSystem/CUpgradeSystemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeSystemLabel = { "UpgradeSystemLabel", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCUpgradeSystemWidget, UpgradeSystemLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeSystemLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeSystemLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeSkill_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UpgradeSystem/CUpgradeSystemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeSkill = { "UpgradeSkill", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCUpgradeSystemWidget, UpgradeSkill), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeDamage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UpgradeSystem/CUpgradeSystemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeDamage = { "UpgradeDamage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCUpgradeSystemWidget, UpgradeDamage), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_QuitUpgradeMenu_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UpgradeSystem/CUpgradeSystemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_QuitUpgradeMenu = { "QuitUpgradeMenu", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCUpgradeSystemWidget, QuitUpgradeMenu), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_QuitUpgradeMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_QuitUpgradeMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_pPlayer_MetaData[] = {
		{ "ModuleRelativePath", "UpgradeSystem/CUpgradeSystemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_pPlayer = { "pPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCUpgradeSystemWidget, pPlayer), Z_Construct_UClass_ACPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_pPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_pPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCUpgradeSystemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeSystemLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_UpgradeDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_QuitUpgradeMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCUpgradeSystemWidget_Statics::NewProp_pPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUpgradeSystemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUpgradeSystemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUpgradeSystemWidget_Statics::ClassParams = {
		&UCUpgradeSystemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCUpgradeSystemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUpgradeSystemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUpgradeSystemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUpgradeSystemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUpgradeSystemWidget, 1620719949);
	template<> GCAA_API UClass* StaticClass<UCUpgradeSystemWidget>()
	{
		return UCUpgradeSystemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUpgradeSystemWidget(Z_Construct_UClass_UCUpgradeSystemWidget, &UCUpgradeSystemWidget::StaticClass, TEXT("/Script/GCAA"), TEXT("UCUpgradeSystemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUpgradeSystemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
