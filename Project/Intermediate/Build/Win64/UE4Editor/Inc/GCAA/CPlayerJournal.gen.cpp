// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/CPlayerJournal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlayerJournal() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UCPlayerJournal_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UCPlayerJournal();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	GCAA_API UClass* Z_Construct_UClass_ACJournalPickup_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCPlayerJournal::execGetPlayerJournal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ACJournalPickup*>*)Z_Param__Result=P_THIS->GetPlayerJournal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPlayerJournal::execSearchForItemInJournal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ToFind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACJournalPickup**)Z_Param__Result=P_THIS->SearchForItemInJournal(Z_Param_ToFind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPlayerJournal::execAddItemToJournal)
	{
		P_GET_OBJECT(ACJournalPickup,Z_Param_ToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToJournal(Z_Param_ToAdd);
		P_NATIVE_END;
	}
	void UCPlayerJournal::StaticRegisterNativesUCPlayerJournal()
	{
		UClass* Class = UCPlayerJournal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToJournal", &UCPlayerJournal::execAddItemToJournal },
			{ "GetPlayerJournal", &UCPlayerJournal::execGetPlayerJournal },
			{ "SearchForItemInJournal", &UCPlayerJournal::execSearchForItemInJournal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics
	{
		struct CPlayerJournal_eventAddItemToJournal_Parms
		{
			ACJournalPickup* ToAdd;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics::NewProp_ToAdd = { "ToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayerJournal_eventAddItemToJournal_Parms, ToAdd), Z_Construct_UClass_ACJournalPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics::NewProp_ToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Adds the Pikcup item 'ToAdd' to the inventory.\n" },
		{ "ModuleRelativePath", "CPlayerJournal.h" },
		{ "ToolTip", "Adds the Pikcup item 'ToAdd' to the inventory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPlayerJournal, nullptr, "AddItemToJournal", nullptr, nullptr, sizeof(CPlayerJournal_eventAddItemToJournal_Parms), Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics
	{
		struct CPlayerJournal_eventGetPlayerJournal_Parms
		{
			TArray<ACJournalPickup*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACJournalPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayerJournal_eventGetPlayerJournal_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Return a read only reference to the Player Journal - eg. for UI to read.\n" },
		{ "ModuleRelativePath", "CPlayerJournal.h" },
		{ "ToolTip", "Return a read only reference to the Player Journal - eg. for UI to read." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPlayerJournal, nullptr, "GetPlayerJournal", nullptr, nullptr, sizeof(CPlayerJournal_eventGetPlayerJournal_Parms), Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics
	{
		struct CPlayerJournal_eventSearchForItemInJournal_Parms
		{
			int32 ToFind;
			ACJournalPickup* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ToFind;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::NewProp_ToFind = { "ToFind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayerJournal_eventSearchForItemInJournal_Parms, ToFind), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayerJournal_eventSearchForItemInJournal_Parms, ReturnValue), Z_Construct_UClass_ACJournalPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::NewProp_ToFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPlayerJournal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPlayerJournal, nullptr, "SearchForItemInJournal", nullptr, nullptr, sizeof(CPlayerJournal_eventSearchForItemInJournal_Parms), Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCPlayerJournal_NoRegister()
	{
		return UCPlayerJournal::StaticClass();
	}
	struct Z_Construct_UClass_UCPlayerJournal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfJournalEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfJournalEntries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissingJournalEntryText_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MissingJournalEntryText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aPlayerJournalCollected_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aPlayerJournalCollected_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_aPlayerJournalCollected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPlayerJournal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPlayerJournal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPlayerJournal_AddItemToJournal, "AddItemToJournal" }, // 3703122606
		{ &Z_Construct_UFunction_UCPlayerJournal_GetPlayerJournal, "GetPlayerJournal" }, // 1437588206
		{ &Z_Construct_UFunction_UCPlayerJournal_SearchForItemInJournal, "SearchForItemInJournal" }, // 1046642858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerJournal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CPlayerJournal.h" },
		{ "ModuleRelativePath", "CPlayerJournal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_NumberOfJournalEntries_MetaData[] = {
		{ "Category", "Configure" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "// Max number of entries in the journal\n" },
		{ "ModuleRelativePath", "CPlayerJournal.h" },
		{ "ToolTip", "Max number of entries in the journal" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_NumberOfJournalEntries = { "NumberOfJournalEntries", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerJournal, NumberOfJournalEntries), METADATA_PARAMS(Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_NumberOfJournalEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_NumberOfJournalEntries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_MissingJournalEntryText_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "CPlayerJournal.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_MissingJournalEntryText = { "MissingJournalEntryText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerJournal, MissingJournalEntryText), METADATA_PARAMS(Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_MissingJournalEntryText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_MissingJournalEntryText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_aPlayerJournalCollected_Inner = { "aPlayerJournalCollected", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACJournalPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_aPlayerJournalCollected_MetaData[] = {
		{ "ModuleRelativePath", "CPlayerJournal.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_aPlayerJournalCollected = { "aPlayerJournalCollected", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerJournal, aPlayerJournalCollected), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_aPlayerJournalCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_aPlayerJournalCollected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPlayerJournal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_NumberOfJournalEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_MissingJournalEntryText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_aPlayerJournalCollected_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerJournal_Statics::NewProp_aPlayerJournalCollected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPlayerJournal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPlayerJournal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCPlayerJournal_Statics::ClassParams = {
		&UCPlayerJournal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCPlayerJournal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerJournal_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCPlayerJournal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerJournal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPlayerJournal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCPlayerJournal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCPlayerJournal, 110720505);
	template<> GCAA_API UClass* StaticClass<UCPlayerJournal>()
	{
		return UCPlayerJournal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPlayerJournal(Z_Construct_UClass_UCPlayerJournal, &UCPlayerJournal::StaticClass, TEXT("/Script/GCAA"), TEXT("UCPlayerJournal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPlayerJournal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
