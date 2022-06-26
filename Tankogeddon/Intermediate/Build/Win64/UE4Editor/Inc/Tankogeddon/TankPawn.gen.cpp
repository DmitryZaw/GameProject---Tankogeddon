// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/TankPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPawn() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TANKOGEDDON_API UScriptStruct* Z_Construct_UScriptStruct_FDamageData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UDamageTaker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATankPawn::execRotateTurretTo)
	{
		P_GET_STRUCT(FVector,Z_Param_TargetPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateTurretTo(Z_Param_TargetPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execGetTurretForwardVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTurretForwardVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execGetMovementAccurency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementAccurency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execGetPatrollingPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPatrollingPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execTakeDamage)
	{
		P_GET_STRUCT(FDamageData,Z_Param_DamageData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_DamageData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execDamageTaked)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageTaked(Z_Param_DamageValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execChangeCannon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeCannon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execFireSpecial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireSpecial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execRotateRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateRight(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	void ATankPawn::StaticRegisterNativesATankPawn()
	{
		UClass* Class = ATankPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeCannon", &ATankPawn::execChangeCannon },
			{ "DamageTaked", &ATankPawn::execDamageTaked },
			{ "Die", &ATankPawn::execDie },
			{ "Fire", &ATankPawn::execFire },
			{ "FireSpecial", &ATankPawn::execFireSpecial },
			{ "GetMovementAccurency", &ATankPawn::execGetMovementAccurency },
			{ "GetPatrollingPoints", &ATankPawn::execGetPatrollingPoints },
			{ "GetTurretForwardVector", &ATankPawn::execGetTurretForwardVector },
			{ "MoveForward", &ATankPawn::execMoveForward },
			{ "MoveRight", &ATankPawn::execMoveRight },
			{ "RotateRight", &ATankPawn::execRotateRight },
			{ "RotateTurretTo", &ATankPawn::execRotateTurretTo },
			{ "TakeDamage", &ATankPawn::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankPawn_ChangeCannon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_ChangeCannon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_ChangeCannon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "ChangeCannon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_ChangeCannon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_ChangeCannon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_ChangeCannon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_ChangeCannon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_DamageTaked_Statics
	{
		struct TankPawn_eventDamageTaked_Parms
		{
			float DamageValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventDamageTaked_Parms, DamageValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::NewProp_DamageValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "DamageTaked", nullptr, nullptr, sizeof(TankPawn_eventDamageTaked_Parms), Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_DamageTaked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_FireSpecial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_FireSpecial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_FireSpecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "FireSpecial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_FireSpecial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_FireSpecial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_FireSpecial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_FireSpecial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics
	{
		struct TankPawn_eventGetMovementAccurency_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventGetMovementAccurency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "GetMovementAccurency", nullptr, nullptr, sizeof(TankPawn_eventGetMovementAccurency_Parms), Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_GetMovementAccurency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics
	{
		struct TankPawn_eventGetPatrollingPoints_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventGetPatrollingPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "GetPatrollingPoints", nullptr, nullptr, sizeof(TankPawn_eventGetPatrollingPoints_Parms), Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_GetPatrollingPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics
	{
		struct TankPawn_eventGetTurretForwardVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventGetTurretForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "GetTurretForwardVector", nullptr, nullptr, sizeof(TankPawn_eventGetTurretForwardVector_Parms), Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_GetTurretForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_MoveForward_Statics
	{
		struct TankPawn_eventMoveForward_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankPawn_MoveForward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventMoveForward_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_MoveForward_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "MoveForward", nullptr, nullptr, sizeof(TankPawn_eventMoveForward_Parms), Z_Construct_UFunction_ATankPawn_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_MoveRight_Statics
	{
		struct TankPawn_eventMoveRight_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankPawn_MoveRight_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventMoveRight_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_MoveRight_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "MoveRight", nullptr, nullptr, sizeof(TankPawn_eventMoveRight_Parms), Z_Construct_UFunction_ATankPawn_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_RotateRight_Statics
	{
		struct TankPawn_eventRotateRight_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankPawn_RotateRight_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventRotateRight_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_RotateRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_RotateRight_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_RotateRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_RotateRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "RotateRight", nullptr, nullptr, sizeof(TankPawn_eventRotateRight_Parms), Z_Construct_UFunction_ATankPawn_RotateRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_RotateRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_RotateRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_RotateRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_RotateRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_RotateRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics
	{
		struct TankPawn_eventRotateTurretTo_Parms
		{
			FVector TargetPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::NewProp_TargetPosition = { "TargetPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventRotateTurretTo_Parms, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::NewProp_TargetPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "RotateTurretTo", nullptr, nullptr, sizeof(TankPawn_eventRotateTurretTo_Parms), Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_RotateTurretTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_TakeDamage_Statics
	{
		struct TankPawn_eventTakeDamage_Parms
		{
			FDamageData DamageData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::NewProp_DamageData = { "DamageData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventTakeDamage_Parms, DamageData), Z_Construct_UScriptStruct_FDamageData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::NewProp_DamageData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "TakeDamage", nullptr, nullptr, sizeof(TankPawn_eventTakeDamage_Parms), Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankPawn_NoRegister()
	{
		return ATankPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATankPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretRotationInterpolationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurretRotationInterpolationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TankController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CannonSetupPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CannonSetupPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CannonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CannonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeCannonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChangeCannonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cannon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cannon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitCollider;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrollingPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrollingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrollingPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAccurency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementAccurency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPawn_ChangeCannon, "ChangeCannon" }, // 2681217460
		{ &Z_Construct_UFunction_ATankPawn_DamageTaked, "DamageTaked" }, // 2564649014
		{ &Z_Construct_UFunction_ATankPawn_Die, "Die" }, // 3798589048
		{ &Z_Construct_UFunction_ATankPawn_Fire, "Fire" }, // 3648692876
		{ &Z_Construct_UFunction_ATankPawn_FireSpecial, "FireSpecial" }, // 68521308
		{ &Z_Construct_UFunction_ATankPawn_GetMovementAccurency, "GetMovementAccurency" }, // 1143141944
		{ &Z_Construct_UFunction_ATankPawn_GetPatrollingPoints, "GetPatrollingPoints" }, // 4118721959
		{ &Z_Construct_UFunction_ATankPawn_GetTurretForwardVector, "GetTurretForwardVector" }, // 1794061069
		{ &Z_Construct_UFunction_ATankPawn_MoveForward, "MoveForward" }, // 2478646255
		{ &Z_Construct_UFunction_ATankPawn_MoveRight, "MoveRight" }, // 2881576665
		{ &Z_Construct_UFunction_ATankPawn_RotateRight, "RotateRight" }, // 3524979340
		{ &Z_Construct_UFunction_ATankPawn_RotateTurretTo, "RotateTurretTo" }, // 2373408946
		{ &Z_Construct_UFunction_ATankPawn_TakeDamage, "TakeDamage" }, // 3599143384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TankPawn.h" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh = { "TurretMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, TurretMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement|Speed" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Movement|Speed" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_InterpolationKey_MetaData[] = {
		{ "Category", "Movement|Speed" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_InterpolationKey = { "InterpolationKey", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, InterpolationKey), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_InterpolationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_InterpolationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey_MetaData[] = {
		{ "Category", "Turret|Speed" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey = { "TurretRotationInterpolationKey", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, TurretRotationInterpolationKey), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController = { "TankController", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, TankController), Z_Construct_UClass_ATankPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonSetupPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonSetupPoint = { "CannonSetupPoint", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, CannonSetupPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonSetupPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonSetupPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass_MetaData[] = {
		{ "Category", "Turret|Cannon" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass = { "CannonClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, CannonClass), Z_Construct_UClass_ACannon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_ChangeCannonClass_MetaData[] = {
		{ "Category", "Turret|Cannon" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_ChangeCannonClass = { "ChangeCannonClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, ChangeCannonClass), Z_Construct_UClass_ACannon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_ChangeCannonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_ChangeCannonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_Cannon_MetaData[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_Cannon = { "Cannon", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, Cannon), Z_Construct_UClass_ACannon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_Cannon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_Cannon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider = { "HitCollider", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, HitCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints_Inner = { "PatrollingPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints_MetaData[] = {
		{ "Category", "AI|Move params|Patrol points" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints = { "PatrollingPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, PatrollingPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_MovementAccurency_MetaData[] = {
		{ "Category", "AI|Move params | Accurency" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_MovementAccurency = { "MovementAccurency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, MovementAccurency), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_MovementAccurency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_MovementAccurency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_InterpolationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonSetupPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_ChangeCannonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_Cannon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_MovementAccurency,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATankPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamageTaker_NoRegister, (int32)VTABLE_OFFSET(ATankPawn, IDamageTaker), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankPawn_Statics::ClassParams = {
		&ATankPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankPawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPawn, 1033017256);
	template<> TANKOGEDDON_API UClass* StaticClass<ATankPawn>()
	{
		return ATankPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPawn(Z_Construct_UClass_ATankPawn, &ATankPawn::StaticClass, TEXT("/Script/Tankogeddon"), TEXT("ATankPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
