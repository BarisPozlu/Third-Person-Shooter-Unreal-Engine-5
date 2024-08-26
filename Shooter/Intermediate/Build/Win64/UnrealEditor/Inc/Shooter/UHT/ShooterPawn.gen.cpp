// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/ShooterPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPawn() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
SHOOTER_API UClass* Z_Construct_UClass_AGun_NoRegister();
SHOOTER_API UClass* Z_Construct_UClass_AShooterPawn();
SHOOTER_API UClass* Z_Construct_UClass_AShooterPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class AShooterPawn Function GetNormalizedHealth
struct Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics
{
	struct ShooterPawn_eventGetNormalizedHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPawn_eventGetNormalizedHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPawn, nullptr, "GetNormalizedHealth", nullptr, nullptr, Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::ShooterPawn_eventGetNormalizedHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::ShooterPawn_eventGetNormalizedHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterPawn::execGetNormalizedHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNormalizedHealth();
	P_NATIVE_END;
}
// End Class AShooterPawn Function GetNormalizedHealth

// Begin Class AShooterPawn Function OnTakeDamage
struct Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics
{
	struct ShooterPawn_eventOnTakeDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPawn_eventOnTakeDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPawn_eventOnTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPawn_eventOnTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPawn_eventOnTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPawn_eventOnTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterPawn, nullptr, "OnTakeDamage", nullptr, nullptr, Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::ShooterPawn_eventOnTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::ShooterPawn_eventOnTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShooterPawn_OnTakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterPawn_OnTakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterPawn::execOnTakeDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTakeDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class AShooterPawn Function OnTakeDamage

// Begin Class AShooterPawn
void AShooterPawn::StaticRegisterNativesAShooterPawn()
{
	UClass* Class = AShooterPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNormalizedHealth", &AShooterPawn::execGetNormalizedHealth },
		{ "OnTakeDamage", &AShooterPawn::execOnTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterPawn);
UClass* Z_Construct_UClass_AShooterPawn_NoRegister()
{
	return AShooterPawn::StaticClass();
}
struct Z_Construct_UClass_AShooterPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterPawn.h" },
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentSpeed_MetaData[] = {
		{ "Category", "ShooterPawn" },
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentAngle_MetaData[] = {
		{ "Category", "ShooterPawn" },
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dead_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShooterPawn" },
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxWalkSpeed_MetaData[] = {
		{ "Category", "ShooterPawn" },
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpSpeed_MetaData[] = {
		{ "Category", "ShooterPawn" },
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gunClass_MetaData[] = {
		{ "Category", "ShooterPawn" },
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[] = {
		{ "Category", "ShooterPawn" },
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[] = {
		{ "Category", "ShooterPawn" },
		{ "ModuleRelativePath", "ShooterPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentAngle;
	static void NewProp_dead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_dead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpSpeed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_gunClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterPawn_GetNormalizedHealth, "GetNormalizedHealth" }, // 3177301911
		{ &Z_Construct_UFunction_AShooterPawn_OnTakeDamage, "OnTakeDamage" }, // 311594652
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPawn_Statics::NewProp_currentSpeed = { "currentSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPawn, currentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentSpeed_MetaData), NewProp_currentSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPawn_Statics::NewProp_currentAngle = { "currentAngle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPawn, currentAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentAngle_MetaData), NewProp_currentAngle_MetaData) };
void Z_Construct_UClass_AShooterPawn_Statics::NewProp_dead_SetBit(void* Obj)
{
	((AShooterPawn*)Obj)->dead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterPawn_Statics::NewProp_dead = { "dead", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShooterPawn), &Z_Construct_UClass_AShooterPawn_Statics::NewProp_dead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dead_MetaData), NewProp_dead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPawn_Statics::NewProp_maxWalkSpeed = { "maxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPawn, maxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxWalkSpeed_MetaData), NewProp_maxWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPawn_Statics::NewProp_jumpSpeed = { "jumpSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPawn, jumpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpSpeed_MetaData), NewProp_jumpSpeed_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPawn_Statics::NewProp_gunClass = { "gunClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPawn, gunClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gunClass_MetaData), NewProp_gunClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPawn_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPawn, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPawn_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterPawn, health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_health_MetaData), NewProp_health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPawn_Statics::NewProp_currentSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPawn_Statics::NewProp_currentAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPawn_Statics::NewProp_dead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPawn_Statics::NewProp_maxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPawn_Statics::NewProp_jumpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPawn_Statics::NewProp_gunClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPawn_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPawn_Statics::NewProp_health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterPawn_Statics::ClassParams = {
	&AShooterPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShooterPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterPawn()
{
	if (!Z_Registration_Info_UClass_AShooterPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterPawn.OuterSingleton, Z_Construct_UClass_AShooterPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterPawn.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<AShooterPawn>()
{
	return AShooterPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPawn);
AShooterPawn::~AShooterPawn() {}
// End Class AShooterPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterPawn, AShooterPawn::StaticClass, TEXT("AShooterPawn"), &Z_Registration_Info_UClass_AShooterPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterPawn), 1935309865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_601958565(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
