// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/KillAllGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillAllGameMode() {}

// Begin Cross Module References
SHOOTER_API UClass* Z_Construct_UClass_AKillAllGameMode();
SHOOTER_API UClass* Z_Construct_UClass_AKillAllGameMode_NoRegister();
SHOOTER_API UClass* Z_Construct_UClass_AShooterPawnGameMode();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class AKillAllGameMode
void AKillAllGameMode::StaticRegisterNativesAKillAllGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKillAllGameMode);
UClass* Z_Construct_UClass_AKillAllGameMode_NoRegister()
{
	return AKillAllGameMode::StaticClass();
}
struct Z_Construct_UClass_AKillAllGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KillAllGameMode.h" },
		{ "ModuleRelativePath", "KillAllGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillAllGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKillAllGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AShooterPawnGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKillAllGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKillAllGameMode_Statics::ClassParams = {
	&AKillAllGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKillAllGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AKillAllGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKillAllGameMode()
{
	if (!Z_Registration_Info_UClass_AKillAllGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKillAllGameMode.OuterSingleton, Z_Construct_UClass_AKillAllGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKillAllGameMode.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<AKillAllGameMode>()
{
	return AKillAllGameMode::StaticClass();
}
AKillAllGameMode::AKillAllGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKillAllGameMode);
AKillAllGameMode::~AKillAllGameMode() {}
// End Class AKillAllGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_KillAllGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKillAllGameMode, AKillAllGameMode::StaticClass, TEXT("AKillAllGameMode"), &Z_Registration_Info_UClass_AKillAllGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKillAllGameMode), 1416726721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_KillAllGameMode_h_2765566907(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_KillAllGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_KillAllGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
