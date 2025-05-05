// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinStickShooter/BaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TWINSTICKSHOOTER_API UClass* Z_Construct_UClass_ABaseCharacter();
TWINSTICKSHOOTER_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TwinStickShooter();
// End Cross Module References

// Begin Class ABaseCharacter Function CalculateHealth
struct Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics
{
	struct BaseCharacter_eventCalculateHealth_Parms
	{
		float delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Base Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calculate health function\n" },
#endif
		{ "ModuleRelativePath", "BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculate health function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventCalculateHealth_Parms, delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::NewProp_delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "CalculateHealth", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::BaseCharacter_eventCalculateHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::BaseCharacter_eventCalculateHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseCharacter_CalculateHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_CalculateHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execCalculateHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateHealth(Z_Param_delta);
	P_NATIVE_END;
}
// End Class ABaseCharacter Function CalculateHealth

// Begin Class ABaseCharacter
void ABaseCharacter::StaticRegisterNativesABaseCharacter()
{
	UClass* Class = ABaseCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateHealth", &ABaseCharacter::execCalculateHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacter);
UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
{
	return ABaseCharacter::StaticClass();
}
struct Z_Construct_UClass_ABaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseCharacter.h" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[] = {
		{ "Category", "Base Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health property\n" },
#endif
		{ "ModuleRelativePath", "BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
		{ "Category", "Base Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// isDead property\n" },
#endif
		{ "ModuleRelativePath", "BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "isDead property" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
	static void NewProp_isDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_CalculateHealth, "CalculateHealth" }, // 563278798
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_health_MetaData), NewProp_health_MetaData) };
void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isDead_SetBit(void* Obj)
{
	((ABaseCharacter*)Obj)->isDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isDead_MetaData), NewProp_isDead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isDead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TwinStickShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
	&ABaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseCharacter()
{
	if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
}
template<> TWINSTICKSHOOTER_API UClass* StaticClass<ABaseCharacter>()
{
	return ABaseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
ABaseCharacter::~ABaseCharacter() {}
// End Class ABaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_0ssis_Desktop_Unreal_Projects_TwinStickShooter2ndZIP_TwinStickShooter2ndZIP_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 3300303184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_0ssis_Desktop_Unreal_Projects_TwinStickShooter2ndZIP_TwinStickShooter2ndZIP_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_547377955(TEXT("/Script/TwinStickShooter"),
	Z_CompiledInDeferFile_FID_Users_0ssis_Desktop_Unreal_Projects_TwinStickShooter2ndZIP_TwinStickShooter2ndZIP_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_0ssis_Desktop_Unreal_Projects_TwinStickShooter2ndZIP_TwinStickShooter2ndZIP_TwinStickShooter_Source_TwinStickShooter_BaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
