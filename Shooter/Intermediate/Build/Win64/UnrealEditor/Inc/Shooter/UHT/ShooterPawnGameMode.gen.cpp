// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/ShooterPawnGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPawnGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SHOOTER_API UClass* Z_Construct_UClass_AShooterPawnGameMode();
SHOOTER_API UClass* Z_Construct_UClass_AShooterPawnGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class AShooterPawnGameMode
void AShooterPawnGameMode::StaticRegisterNativesAShooterPawnGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterPawnGameMode);
UClass* Z_Construct_UClass_AShooterPawnGameMode_NoRegister()
{
	return AShooterPawnGameMode::StaticClass();
}
struct Z_Construct_UClass_AShooterPawnGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShooterPawnGameMode.h" },
		{ "ModuleRelativePath", "ShooterPawnGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPawnGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShooterPawnGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPawnGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterPawnGameMode_Statics::ClassParams = {
	&AShooterPawnGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPawnGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterPawnGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterPawnGameMode()
{
	if (!Z_Registration_Info_UClass_AShooterPawnGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterPawnGameMode.OuterSingleton, Z_Construct_UClass_AShooterPawnGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterPawnGameMode.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<AShooterPawnGameMode>()
{
	return AShooterPawnGameMode::StaticClass();
}
AShooterPawnGameMode::AShooterPawnGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPawnGameMode);
AShooterPawnGameMode::~AShooterPawnGameMode() {}
// End Class AShooterPawnGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawnGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterPawnGameMode, AShooterPawnGameMode::StaticClass, TEXT("AShooterPawnGameMode"), &Z_Registration_Info_UClass_AShooterPawnGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterPawnGameMode), 3474508056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawnGameMode_h_638148574(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawnGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterPawnGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
