// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/ShooterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SHOOTER_API UClass* Z_Construct_UClass_AShooterController();
SHOOTER_API UClass* Z_Construct_UClass_AShooterController_NoRegister();
SHOOTER_API UClass* Z_Construct_UClass_AShooterPawn_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class AShooterController
void AShooterController::StaticRegisterNativesAShooterController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterController);
UClass* Z_Construct_UClass_AShooterController_NoRegister()
{
	return AShooterController::StaticClass();
}
struct Z_Construct_UClass_AShooterController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShooterController.h" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_walkAction_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookAction_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookForControllerAction_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shootAction_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpAction_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inputMapping_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pawnControlled_MetaData[] = {
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeedForController_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lossWidgetClass_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_winWidgetClass_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lossWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_winWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_restartDelay_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_walkAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lookForControllerAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shootAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pawnControlled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeedForController;
	static const UECodeGen_Private::FClassPropertyParams NewProp_lossWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_winWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lossWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_winWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_restartDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_walkAction = { "walkAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, walkAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_walkAction_MetaData), NewProp_walkAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_lookAction = { "lookAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookAction_MetaData), NewProp_lookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_lookForControllerAction = { "lookForControllerAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, lookForControllerAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookForControllerAction_MetaData), NewProp_lookForControllerAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_shootAction = { "shootAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, shootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shootAction_MetaData), NewProp_shootAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_jumpAction = { "jumpAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpAction_MetaData), NewProp_jumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_inputMapping = { "inputMapping", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, inputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inputMapping_MetaData), NewProp_inputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_pawnControlled = { "pawnControlled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, pawnControlled), Z_Construct_UClass_AShooterPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pawnControlled_MetaData), NewProp_pawnControlled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_rotationSpeedForController = { "rotationSpeedForController", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, rotationSpeedForController), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotationSpeedForController_MetaData), NewProp_rotationSpeedForController_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_lossWidgetClass = { "lossWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, lossWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lossWidgetClass_MetaData), NewProp_lossWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_winWidgetClass = { "winWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, winWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_winWidgetClass_MetaData), NewProp_winWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_lossWidget = { "lossWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, lossWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lossWidget_MetaData), NewProp_lossWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_winWidget = { "winWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, winWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_winWidget_MetaData), NewProp_winWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, HUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidget_MetaData), NewProp_HUDWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_restartDelay = { "restartDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, restartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_restartDelay_MetaData), NewProp_restartDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_walkAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_lookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_lookForControllerAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_shootAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_jumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_inputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_pawnControlled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_rotationSpeedForController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_lossWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_winWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_lossWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_winWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_HUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_restartDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterController_Statics::ClassParams = {
	&AShooterController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShooterController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterController()
{
	if (!Z_Registration_Info_UClass_AShooterController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterController.OuterSingleton, Z_Construct_UClass_AShooterController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterController.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<AShooterController>()
{
	return AShooterController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterController);
AShooterController::~AShooterController() {}
// End Class AShooterController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterController, AShooterController::StaticClass, TEXT("AShooterController"), &Z_Registration_Info_UClass_AShooterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterController), 4236101310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterController_h_383533775(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Shooter_Source_Shooter_ShooterController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
