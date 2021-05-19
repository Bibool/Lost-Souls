// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/PauseMenuUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenuUI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UPauseMenuUI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UPauseMenuUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	DEFINE_FUNCTION(UPauseMenuUI::execJournalButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JournalButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseMenuUI::execOptionsButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OptionsButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseMenuUI::execResumeButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeButtonClicked();
		P_NATIVE_END;
	}
	void UPauseMenuUI::StaticRegisterNativesUPauseMenuUI()
	{
		UClass* Class = UPauseMenuUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JournalButtonClicked", &UPauseMenuUI::execJournalButtonClicked },
			{ "OptionsButtonClicked", &UPauseMenuUI::execOptionsButtonClicked },
			{ "ResumeButtonClicked", &UPauseMenuUI::execResumeButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPauseMenuUI_JournalButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenuUI_JournalButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "UI/PauseMenuUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuUI_JournalButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuUI, nullptr, "JournalButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseMenuUI_JournalButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuUI_JournalButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseMenuUI_JournalButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseMenuUI_JournalButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseMenuUI_OptionsButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenuUI_OptionsButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "UI/PauseMenuUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuUI_OptionsButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuUI, nullptr, "OptionsButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseMenuUI_OptionsButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuUI_OptionsButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseMenuUI_OptionsButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseMenuUI_OptionsButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseMenuUI_ResumeButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenuUI_ResumeButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "UI/PauseMenuUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuUI_ResumeButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuUI, nullptr, "ResumeButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseMenuUI_ResumeButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuUI_ResumeButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseMenuUI_ResumeButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseMenuUI_ResumeButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPauseMenuUI_NoRegister()
	{
		return UPauseMenuUI::StaticClass();
	}
	struct Z_Construct_UClass_UPauseMenuUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseMenuUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseMenuUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseMenuUI_JournalButtonClicked, "JournalButtonClicked" }, // 2300380312
		{ &Z_Construct_UFunction_UPauseMenuUI_OptionsButtonClicked, "OptionsButtonClicked" }, // 2436479176
		{ &Z_Construct_UFunction_UPauseMenuUI_ResumeButtonClicked, "ResumeButtonClicked" }, // 2877421222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenuUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PauseMenuUI.h" },
		{ "ModuleRelativePath", "UI/PauseMenuUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseMenuUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseMenuUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenuUI_Statics::ClassParams = {
		&UPauseMenuUI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPauseMenuUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPauseMenuUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPauseMenuUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPauseMenuUI, 597574786);
	template<> GCAA_API UClass* StaticClass<UPauseMenuUI>()
	{
		return UPauseMenuUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPauseMenuUI(Z_Construct_UClass_UPauseMenuUI, &UPauseMenuUI::StaticClass, TEXT("/Script/GCAA"), TEXT("UPauseMenuUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenuUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
