// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Interactables/CJournalPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCJournalPickup() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ACJournalPickup_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACJournalPickup();
	GCAA_API UClass* Z_Construct_UClass_ACPickup();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void ACJournalPickup::StaticRegisterNativesACJournalPickup()
	{
	}
	UClass* Z_Construct_UClass_ACJournalPickup_NoRegister()
	{
		return ACJournalPickup::StaticClass();
	}
	struct Z_Construct_UClass_ACJournalPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JournalEntryNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_JournalEntryNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPickupAtStart_MetaData[];
#endif
		static void NewProp_AutoPickupAtStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPickupAtStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACJournalPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACJournalPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/CJournalPickup.h" },
		{ "ModuleRelativePath", "Interactables/CJournalPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACJournalPickup_Statics::NewProp_JournalEntryNumber_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "Interactables/CJournalPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACJournalPickup_Statics::NewProp_JournalEntryNumber = { "JournalEntryNumber", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACJournalPickup, JournalEntryNumber), METADATA_PARAMS(Z_Construct_UClass_ACJournalPickup_Statics::NewProp_JournalEntryNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACJournalPickup_Statics::NewProp_JournalEntryNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACJournalPickup_Statics::NewProp_AutoPickupAtStart_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "Interactables/CJournalPickup.h" },
	};
#endif
	void Z_Construct_UClass_ACJournalPickup_Statics::NewProp_AutoPickupAtStart_SetBit(void* Obj)
	{
		((ACJournalPickup*)Obj)->AutoPickupAtStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACJournalPickup_Statics::NewProp_AutoPickupAtStart = { "AutoPickupAtStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACJournalPickup), &Z_Construct_UClass_ACJournalPickup_Statics::NewProp_AutoPickupAtStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACJournalPickup_Statics::NewProp_AutoPickupAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACJournalPickup_Statics::NewProp_AutoPickupAtStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACJournalPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACJournalPickup_Statics::NewProp_JournalEntryNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACJournalPickup_Statics::NewProp_AutoPickupAtStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACJournalPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACJournalPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACJournalPickup_Statics::ClassParams = {
		&ACJournalPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACJournalPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACJournalPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACJournalPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACJournalPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACJournalPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACJournalPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACJournalPickup, 3257191615);
	template<> GCAA_API UClass* StaticClass<ACJournalPickup>()
	{
		return ACJournalPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACJournalPickup(Z_Construct_UClass_ACJournalPickup, &ACJournalPickup::StaticClass, TEXT("/Script/GCAA"), TEXT("ACJournalPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACJournalPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
