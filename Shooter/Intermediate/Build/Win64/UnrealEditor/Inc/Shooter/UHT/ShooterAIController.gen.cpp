// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/ShooterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
SHOOTER_API UClass* Z_Construct_UClass_AShooterAIController();
SHOOTER_API UClass* Z_Construct_UClass_AShooterAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class AShooterAIController
void AShooterAIController::StaticRegisterNativesAShooterAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterAIController);
UClass* Z_Construct_UClass_AShooterAIController_NoRegister()
{
	return AShooterAIController::StaticClass();
}
struct Z_Construct_UClass_AShooterAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShooterAIController.h" },
		{ "ModuleRelativePath", "ShooterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_behaviorTree_MetaData[] = {
		{ "Category", "ShooterAIController" },
		{ "ModuleRelativePath", "ShooterAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_behaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterAIController_Statics::NewProp_behaviorTree = { "behaviorTree", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterAIController, behaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_behaviorTree_MetaData), NewProp_behaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAIController_Statics::NewProp_behaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterAIController_Statics::ClassParams = {
	&AShooterAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShooterAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterAIController()
{
	if (!Z_Registration_Info_UClass_AShooterAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterAIController.OuterSingleton, Z_Construct_UClass_AShooterAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterAIController.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<AShooterAIController>()
{
	return AShooterAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAIController);
AShooterAIController::~AShooterAIController() {}
// End Class AShooterAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterAIController, AShooterAIController::StaticClass, TEXT("AShooterAIController"), &Z_Registration_Info_UClass_AShooterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterAIController), 3431947558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterAIController_h_3087758185(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
