// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Components/DamageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageComponent() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UDamageComponent_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UDamageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GCAA_API UClass* Z_Construct_UClass_UBaseHealthUI_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDamageComponent::execGet_Damage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_Damage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDamageComponent::execGet_Max_Health)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_Max_Health();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDamageComponent::execGet_Health)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_Health();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDamageComponent::execUpgrade_Damage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Upgrade_Damage(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDamageComponent::execUpgrade_Health)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Upgrade_Health(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDamageComponent::execReceiveDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_pcDamagingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveDamage(Z_Param_pcDamagingActor);
		P_NATIVE_END;
	}
	void UDamageComponent::StaticRegisterNativesUDamageComponent()
	{
		UClass* Class = UDamageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get_Damage", &UDamageComponent::execGet_Damage },
			{ "Get_Health", &UDamageComponent::execGet_Health },
			{ "Get_Max_Health", &UDamageComponent::execGet_Max_Health },
			{ "ReceiveDamage", &UDamageComponent::execReceiveDamage },
			{ "Upgrade_Damage", &UDamageComponent::execUpgrade_Damage },
			{ "Upgrade_Health", &UDamageComponent::execUpgrade_Health },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics
	{
		struct DamageComponent_eventGet_Damage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventGet_Damage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageComponent, nullptr, "Get_Damage", nullptr, nullptr, sizeof(DamageComponent_eventGet_Damage_Parms), Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageComponent_Get_Damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageComponent_Get_Damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageComponent_Get_Health_Statics
	{
		struct DamageComponent_eventGet_Health_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageComponent_Get_Health_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventGet_Health_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageComponent_Get_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_Get_Health_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageComponent_Get_Health_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Get the current values.\n" },
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
		{ "ToolTip", "Get the current values." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageComponent_Get_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageComponent, nullptr, "Get_Health", nullptr, nullptr, sizeof(DamageComponent_eventGet_Health_Parms), Z_Construct_UFunction_UDamageComponent_Get_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_Get_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageComponent_Get_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_Get_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageComponent_Get_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageComponent_Get_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics
	{
		struct DamageComponent_eventGet_Max_Health_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventGet_Max_Health_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageComponent, nullptr, "Get_Max_Health", nullptr, nullptr, sizeof(DamageComponent_eventGet_Max_Health_Parms), Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageComponent_Get_Max_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageComponent_Get_Max_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics
	{
		struct DamageComponent_eventReceiveDamage_Parms
		{
			AActor* pcDamagingActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcDamagingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics::NewProp_pcDamagingActor = { "pcDamagingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventReceiveDamage_Parms, pcDamagingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics::NewProp_pcDamagingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** This function will do the damage calculation.\n\x09 *If it fails to find a component. It will instead use the TakeDamage() function.\n\x09 * @param pcDamagingActor - The actor that is causing the damage.\n\x09 * it will attempt to find a UDamageComponent to connect to.\n\x09 */" },
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
		{ "ToolTip", "This function will do the damage calculation.\nIf it fails to find a component. It will instead use the TakeDamage() function.\n@param pcDamagingActor - The actor that is causing the damage.\nit will attempt to find a UDamageComponent to connect to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageComponent, nullptr, "ReceiveDamage", nullptr, nullptr, sizeof(DamageComponent_eventReceiveDamage_Parms), Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageComponent_ReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageComponent_ReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics
	{
		struct DamageComponent_eventUpgrade_Damage_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventUpgrade_Damage_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageComponent, nullptr, "Upgrade_Damage", nullptr, nullptr, sizeof(DamageComponent_eventUpgrade_Damage_Parms), Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageComponent_Upgrade_Damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageComponent_Upgrade_Damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics
	{
		struct DamageComponent_eventUpgrade_Health_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventUpgrade_Health_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Set the upgradable values.\n" },
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
		{ "ToolTip", "Set the upgradable values." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageComponent, nullptr, "Upgrade_Health", nullptr, nullptr, sizeof(DamageComponent_eventUpgrade_Health_Parms), Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageComponent_Upgrade_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageComponent_Upgrade_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDamageComponent_NoRegister()
	{
		return UDamageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDamageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fBaseHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fBaseHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fBaseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fBaseDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fInvulnFrameInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fInvulnFrameInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WBP_Health_UI_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WBP_Health_UI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcHealthUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcHealthUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageComponent_Get_Damage, "Get_Damage" }, // 1147267937
		{ &Z_Construct_UFunction_UDamageComponent_Get_Health, "Get_Health" }, // 906227465
		{ &Z_Construct_UFunction_UDamageComponent_Get_Max_Health, "Get_Max_Health" }, // 4006084487
		{ &Z_Construct_UFunction_UDamageComponent_ReceiveDamage, "ReceiveDamage" }, // 3406748722
		{ &Z_Construct_UFunction_UDamageComponent_Upgrade_Damage, "Upgrade_Damage" }, // 1266406107
		{ &Z_Construct_UFunction_UDamageComponent_Upgrade_Health, "Upgrade_Health" }, // 360259831
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DamageComponent.h" },
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fBaseHealth_MetaData[] = {
		{ "Category", "DamageComponent" },
		{ "Comment", "/** The base Max Health of this actor.  **/" },
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
		{ "ToolTip", "The base Max Health of this actor.  *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fBaseHealth = { "m_fBaseHealth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, m_fBaseHealth), METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fBaseHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fBaseHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fBaseDamage_MetaData[] = {
		{ "Category", "DamageComponent" },
		{ "Comment", "/** The base Damage this actor will do.\n\x09 * It's worth noting this would only be used by the NPCs as the\n\x09 * Spells have their own damage taken from the Spell manager.\n\x09 */" },
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
		{ "ToolTip", "The base Damage this actor will do.\nIt's worth noting this would only be used by the NPCs as the\nSpells have their own damage taken from the Spell manager." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fBaseDamage = { "m_fBaseDamage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, m_fBaseDamage), METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fBaseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fBaseDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fInvulnFrameInSeconds_MetaData[] = {
		{ "Category", "DamageComponent" },
		{ "Comment", "/** The period of time before damage can be applied again.\n\x09 * This is to avoid things applying damage more than once per frame.\n\x09 */" },
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
		{ "ToolTip", "The period of time before damage can be applied again.\nThis is to avoid things applying damage more than once per frame." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fInvulnFrameInSeconds = { "m_fInvulnFrameInSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, m_fInvulnFrameInSeconds), METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fInvulnFrameInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fInvulnFrameInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_WBP_Health_UI_MetaData[] = {
		{ "Category", "DamageComponent" },
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_WBP_Health_UI = { "WBP_Health_UI", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, WBP_Health_UI), Z_Construct_UClass_UBaseHealthUI_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_WBP_Health_UI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_WBP_Health_UI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_pcHealthUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_pcHealthUI = { "m_pcHealthUI", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, m_pcHealthUI), Z_Construct_UClass_UBaseHealthUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_pcHealthUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_pcHealthUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_pcOwner_MetaData[] = {
		{ "ModuleRelativePath", "Components/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_pcOwner = { "m_pcOwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, m_pcOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_pcOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_pcOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fBaseHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fBaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_fInvulnFrameInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_WBP_Health_UI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_pcHealthUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_m_pcOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageComponent_Statics::ClassParams = {
		&UDamageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDamageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageComponent, 2310435273);
	template<> GCAA_API UClass* StaticClass<UDamageComponent>()
	{
		return UDamageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageComponent(Z_Construct_UClass_UDamageComponent, &UDamageComponent::StaticClass, TEXT("/Script/GCAA"), TEXT("UDamageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
