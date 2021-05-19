// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/FloatingAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingAI() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UFloatingAI_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UFloatingAI();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UFloatingAI::StaticRegisterNativesUFloatingAI()
	{
	}
	UClass* Z_Construct_UClass_UFloatingAI_NoRegister()
	{
		return UFloatingAI::StaticClass();
	}
	struct Z_Construct_UClass_UFloatingAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatingAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingAI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NPC/FloatingAI.h" },
		{ "ModuleRelativePath", "NPC/FloatingAI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingAI_Statics::NewProp_vFloat_MetaData[] = {
		{ "Category", "FloatingAI" },
		{ "ModuleRelativePath", "NPC/FloatingAI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloatingAI_Statics::NewProp_vFloat = { "vFloat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatingAI, vFloat), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFloatingAI_Statics::NewProp_vFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingAI_Statics::NewProp_vFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingAI_Statics::NewProp_fSpeedMultiplier_MetaData[] = {
		{ "Category", "FloatingAI" },
		{ "Comment", "// Using a Vector instead of a Float so that it can float in any direction we want it to\n" },
		{ "ModuleRelativePath", "NPC/FloatingAI.h" },
		{ "ToolTip", "Using a Vector instead of a Float so that it can float in any direction we want it to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatingAI_Statics::NewProp_fSpeedMultiplier = { "fSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatingAI, fSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFloatingAI_Statics::NewProp_fSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingAI_Statics::NewProp_fSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatingAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingAI_Statics::NewProp_vFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingAI_Statics::NewProp_fSpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatingAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatingAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloatingAI_Statics::ClassParams = {
		&UFloatingAI::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloatingAI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingAI_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFloatingAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatingAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloatingAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatingAI, 2526289427);
	template<> GCAA_API UClass* StaticClass<UFloatingAI>()
	{
		return UFloatingAI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatingAI(Z_Construct_UClass_UFloatingAI, &UFloatingAI::StaticClass, TEXT("/Script/GCAA"), TEXT("UFloatingAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatingAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
