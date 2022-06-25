// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Cannon.h"
#include "CoreMinimal.h"
#include "DamageTaker.h"
#include "HealthComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Pawn.h"
#include "TankPawn.generated.h"

class UStaticMeshComponent;
class UCameraComponent;
class USpringArmComponent;
class ATankPlayerController;
class ACannon;

UCLASS()
class TANKOGEDDON_API ATankPawn : public APawn, public IDamageTaker
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATankPawn();

	UFUNCTION()
	void MoveForward(float AxisValue);
	UFUNCTION()
	void MoveRight(float AxisValue);
	UFUNCTION()
	void RotateRight(float AxisValue);
	UFUNCTION()
	void Fire();
	UFUNCTION()
	void FireSpecial();
	UFUNCTION()
	void ChangeCannon();

	void SetupCannon(TSubclassOf<ACannon> cannonClass);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* BodyMesh;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UCameraComponent* Camera;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
	float MoveSpeed = 100;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
	float RotationSpeed = 100;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
	float InterpolationKey = 0.1f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Turret|Speed")
	float TurretRotationInterpolationKey = 0.5f;

	float TargetForwardAxisValue;
	float TargetRightAxisValue;
	float CurrentRightAxisValue;

	UPROPERTY()
	ATankPlayerController* TankController;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UArrowComponent* CannonSetupPoint;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Turret|Cannon")
	TSubclassOf<ACannon> CannonClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Turret|Cannon")
	TSubclassOf<ACannon> ChangeCannonClass;
	UPROPERTY()
	ACannon* Cannon;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UHealthComponent* HealthComponent;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UBoxComponent* HitCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Move params|Patrol points" , Meta = (MakeEditWidget = true))
	TArray<FVector> PatrollingPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Move params | Accurency")
	float MovementAccurency = 50;


	UFUNCTION()
	void Die();
	UFUNCTION()
	void DamageTaked(float DamageValue);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void TakeDamage(FDamageData DamageData);

	UFUNCTION()
	TArray<FVector> GetPatrollingPoints() { return PatrollingPoints; };
	UFUNCTION()
	float GetMovementAccurency() { return MovementAccurency; };

	UFUNCTION()
	FVector GetTurretForwardVector();
	UFUNCTION()
	void RotateTurretTo(FVector TargetPosition);

	FVector GetEyesPosition();
};

