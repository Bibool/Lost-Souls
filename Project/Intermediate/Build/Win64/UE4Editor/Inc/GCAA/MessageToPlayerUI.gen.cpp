// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/UI/MessageToPlayerUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageToPlayerUI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UMessageToPlayerUI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UMessageToPlayerUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMessageToPlayerUI::execRemoveTimedMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTimedMessage();
		P_NATIVE_END;
	}
	void UMessageToPlayerUI::StaticRegisterNativesUMessageToPlayerUI()
	{
		UClass* Class = UMessageToPlayerUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveTimedMessage", &UMessageToPlayerUI::execRemoveTimedMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMessageToPlayerUI_RemoveTimedMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageToPlayerUI_RemoveTimedMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MessageToPlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageToPlayerUI_RemoveTimedMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageToPlayerUI, nullptr, "RemoveTimedMessage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageToPlayerUI_RemoveTimedMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageToPlayerUI_RemoveTimedMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageToPlayerUI_RemoveTimedMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageToPlayerUI_RemoveTimedMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMessageToPlayerUI_NoRegister()
	{
		return UMessageToPlayerUI::StaticClass();
	}
	struct Z_Construct_UClass_UMessageToPlayerUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theMessageToPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_theMessageToPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessageToPlayerUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMessageToPlayerUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMessageToPlayerUI_RemoveTimedMessage, "RemoveTimedMessage" }, // 1025097861
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageToPlayerUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MessageToPlayerUI.h" },
		{ "ModuleRelativePath", "UI/MessageToPlayerUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageToPlayerUI_Statics::NewProp_theMessageToPlayer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MessageToPlayerUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MessageToPlayerUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMessageToPlayerUI_Statics::NewProp_theMessageToPlayer = { "theMessageToPlayer", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMessageToPlayerUI, theMessageToPlayer), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMessageToPlayerUI_Statics::NewProp_theMessageToPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageToPlayerUI_Statics::NewProp_theMessageToPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMessageToPlayerUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageToPlayerUI_Statics::NewProp_theMessageToPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessageToPlayerUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessageToPlayerUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMessageToPlayerUI_Statics::ClassParams = {
		&UMessageToPlayerUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMessageToPlayerUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMessageToPlayerUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMessageToPlayerUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageToPlayerUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMessageToPlayerUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMessageToPlayerUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMessageToPlayerUI, 47716034);
	template<> GCAA_API UClass* StaticClass<UMessageToPlayerUI>()
	{
		return UMessageToPlayerUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMessageToPlayerUI(Z_Construct_UClass_UMessageToPlayerUI, &UMessageToPlayerUI::StaticClass, TEXT("/Script/GCAA"), TEXT("UMessageToPlayerUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessageToPlayerUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
