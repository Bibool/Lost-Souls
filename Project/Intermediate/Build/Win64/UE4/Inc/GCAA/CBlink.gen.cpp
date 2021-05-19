// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/SpellManager/Spells/CBlink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBlink() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ACBlink_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACBlink();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	GCAA_API UClass* Z_Construct_UClass_ASpellManager_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACBlink::execZoomOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomOut(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACBlink::execZoomIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomIn(Z_Param_Value);
		P_NATIVE_END;
	}
	void ACBlink::StaticRegisterNativesACBlink()
	{
		UClass* Class = ACBlink::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ZoomIn", &ACBlink::execZoomIn },
			{ "ZoomOut", &ACBlink::execZoomOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACBlink_ZoomIn_Statics
	{
		struct CBlink_eventZoomIn_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACBlink_ZoomIn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CBlink_eventZoomIn_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACBlink_ZoomIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACBlink_ZoomIn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACBlink_ZoomIn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Zoom FoV In */" },
		{ "ModuleRelativePath", "SpellManager/Spells/CBlink.h" },
		{ "ToolTip", "Zoom FoV In" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACBlink_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACBlink, nullptr, "ZoomIn", nullptr, nullptr, sizeof(CBlink_eventZoomIn_Parms), Z_Construct_UFunction_ACBlink_ZoomIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACBlink_ZoomIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACBlink_ZoomIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACBlink_ZoomIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACBlink_ZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACBlink_ZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACBlink_ZoomOut_Statics
	{
		struct CBlink_eventZoomOut_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACBlink_ZoomOut_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CBlink_eventZoomOut_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACBlink_ZoomOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACBlink_ZoomOut_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACBlink_ZoomOut_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Zoom FoV Out */" },
		{ "ModuleRelativePath", "SpellManager/Spells/CBlink.h" },
		{ "ToolTip", "Zoom FoV Out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACBlink_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACBlink, nullptr, "ZoomOut", nullptr, nullptr, sizeof(CBlink_eventZoomOut_Parms), Z_Construct_UFunction_ACBlink_ZoomOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACBlink_ZoomOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACBlink_ZoomOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACBlink_ZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACBlink_ZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACBlink_ZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACBlink_NoRegister()
	{
		return ACBlink::StaticClass();
	}
	struct Z_Construct_UClass_ACBlink_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mpcSpellManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mpcSpellManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mpcPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mpcPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACBlink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACBlink_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACBlink_ZoomIn, "ZoomIn" }, // 2787267537
		{ &Z_Construct_UFunction_ACBlink_ZoomOut, "ZoomOut" }, // 1712556208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACBlink_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpellManager/Spells/CBlink.h" },
		{ "ModuleRelativePath", "SpellManager/Spells/CBlink.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACBlink_Statics::NewProp_mpcSpellManager_MetaData[] = {
		{ "Comment", "/* reference to the manager.*/" },
		{ "ModuleRelativePath", "SpellManager/Spells/CBlink.h" },
		{ "ToolTip", "reference to the manager." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACBlink_Statics::NewProp_mpcSpellManager = { "mpcSpellManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACBlink, mpcSpellManager), Z_Construct_UClass_ASpellManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACBlink_Statics::NewProp_mpcSpellManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACBlink_Statics::NewProp_mpcSpellManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACBlink_Statics::NewProp_mpcPlayer_MetaData[] = {
		{ "Comment", "/* reference to the player. */" },
		{ "ModuleRelativePath", "SpellManager/Spells/CBlink.h" },
		{ "ToolTip", "reference to the player." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACBlink_Statics::NewProp_mpcPlayer = { "mpcPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACBlink, mpcPlayer), Z_Construct_UClass_ACPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACBlink_Statics::NewProp_mpcPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACBlink_Statics::NewProp_mpcPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACBlink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACBlink_Statics::NewProp_mpcSpellManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACBlink_Statics::NewProp_mpcPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACBlink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACBlink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACBlink_Statics::ClassParams = {
		&ACBlink::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACBlink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACBlink_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACBlink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACBlink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACBlink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACBlink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACBlink, 3513331798);
	template<> GCAA_API UClass* StaticClass<ACBlink>()
	{
		return ACBlink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACBlink(Z_Construct_UClass_ACBlink, &ACBlink::StaticClass, TEXT("/Script/GCAA"), TEXT("ACBlink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACBlink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
