// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/PlayerUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerUI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UPlayerUI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UPlayerUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ASpellManager_NoRegister();
// End Cross Module References
	static FName NAME_UPlayerUI_PlayPulse = FName(TEXT("PlayPulse"));
	void UPlayerUI::PlayPulse()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlayerUI_PlayPulse),NULL);
	}
	static FName NAME_UPlayerUI_StopPulse = FName(TEXT("StopPulse"));
	void UPlayerUI::StopPulse()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlayerUI_StopPulse),NULL);
	}
	void UPlayerUI::StaticRegisterNativesUPlayerUI()
	{
	}
	struct Z_Construct_UFunction_UPlayerUI_PlayPulse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerUI_PlayPulse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** TODO: Implement those functions in C++. Figure out how to play a widget animation inside here. */" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
		{ "ToolTip", "TODO: Implement those functions in C++. Figure out how to play a widget animation inside here." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerUI_PlayPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerUI, nullptr, "PlayPulse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerUI_PlayPulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUI_PlayPulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerUI_PlayPulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerUI_PlayPulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerUI_StopPulse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerUI_StopPulse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerUI_StopPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerUI, nullptr, "StopPulse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerUI_StopPulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUI_StopPulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerUI_StopPulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerUI_StopPulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerUI_NoRegister()
	{
		return UPlayerUI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireBallCooldownText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireBallCooldownText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireBallProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireBallProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightningCooldownText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightningCooldownText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightningProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightningProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkCooldownText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlinkCooldownText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlinkProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkChargesCooldownText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlinkChargesCooldownText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkChargesProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlinkChargesProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindblastCooldownText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindblastCooldownText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindblastProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindblastProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSpellManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSpellManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerUI_PlayPulse, "PlayPulse" }, // 109087856
		{ &Z_Construct_UFunction_UPlayerUI_StopPulse, "StopPulse" }, // 1115687923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerUI.h" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_FireBallCooldownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//////////////////////////////////////////////////////////////////\n///\x09\x09\x09\x09\x09""ABILITY ON SCREEN UI                       ///\n//---------------         FIREBALL\x09\x09\x09--------------------//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
		{ "ToolTip", "ABILITY ON SCREEN UI\n---------------         FIREBALL                       --------------------" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_FireBallCooldownText = { "FireBallCooldownText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, FireBallCooldownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_FireBallCooldownText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_FireBallCooldownText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_FireBallProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_FireBallProgressBar = { "FireBallProgressBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, FireBallProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_FireBallProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_FireBallProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_LightningCooldownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//---------------         LIGHTNING\x09\x09\x09--------------------//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
		{ "ToolTip", "---------------         LIGHTNING                       --------------------" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_LightningCooldownText = { "LightningCooldownText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, LightningCooldownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_LightningCooldownText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_LightningCooldownText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_LightningProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_LightningProgressBar = { "LightningProgressBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, LightningProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_LightningProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_LightningProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkCooldownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//---------------           BLINK\x09\x09\x09--------------------//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
		{ "ToolTip", "---------------           BLINK                 --------------------" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkCooldownText = { "BlinkCooldownText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, BlinkCooldownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkCooldownText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkCooldownText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkProgressBar = { "BlinkProgressBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, BlinkProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkChargesCooldownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//---------------      BLINK ( CHARGES )\x09--------------------//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
		{ "ToolTip", "---------------      BLINK ( CHARGES )  --------------------" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkChargesCooldownText = { "BlinkChargesCooldownText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, BlinkChargesCooldownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkChargesCooldownText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkChargesCooldownText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkChargesProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkChargesProgressBar = { "BlinkChargesProgressBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, BlinkChargesProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkChargesProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkChargesProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_WindblastCooldownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//---------------         WINDBLAST\x09\x09\x09--------------------//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
		{ "ToolTip", "---------------         WINDBLAST                       --------------------" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_WindblastCooldownText = { "WindblastCooldownText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, WindblastCooldownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_WindblastCooldownText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_WindblastCooldownText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_WindblastProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_WindblastProgressBar = { "WindblastProgressBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, WindblastProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_WindblastProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_WindblastProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerUI" },
		{ "Comment", "//---------------           HEAL\x09\x09\x09--------------------//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
		{ "ToolTip", "---------------           HEAL                  --------------------" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealProgressBar = { "HealProgressBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, HealProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_pcPlayer_MetaData[] = {
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_pcPlayer = { "m_pcPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, m_pcPlayer), Z_Construct_UClass_ACPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_pcPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_pcPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_pcSpellManager_MetaData[] = {
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_pcSpellManager = { "m_pcSpellManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, m_pcSpellManager), Z_Construct_UClass_ASpellManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_pcSpellManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_pcSpellManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_FireBallCooldownText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_FireBallProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_LightningCooldownText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_LightningProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkCooldownText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkChargesCooldownText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_BlinkChargesProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_WindblastCooldownText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_WindblastProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_HealProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_pcPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_m_pcSpellManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerUI_Statics::ClassParams = {
		&UPlayerUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerUI, 2828190938);
	template<> GCAA_API UClass* StaticClass<UPlayerUI>()
	{
		return UPlayerUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerUI(Z_Construct_UClass_UPlayerUI, &UPlayerUI::StaticClass, TEXT("/Script/GCAA"), TEXT("UPlayerUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
