// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameStructs.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraShakeBase.h"
#include "Components/AudioComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ForceFeedbackEffect.h"
#include "Particles/ParticleSystemComponent.h"
#include "Cannon.generated.h"

class UArrowComponent;
class AProjectile;

UCLASS()
class TANKOGEDDON_API ACannon : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UArrowComponent* ProjectileSpawnPoint;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
	float FireRate = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
	float FireRange = 1000;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
	float FireDamage = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
	ECannonType Type = ECannonType::FireProjectile;
	FTimerHandle ReloadTimerHandle;
	bool ReadyToFire = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
	TSubclassOf<AProjectile> ProjectileClass;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UParticleSystemComponent* ShootEffect;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UAudioComponent* AudioEffect;

public:	
	// Sets default values for this actor's properties
	ACannon();

	void Fire();
	
	void FireSpecial();

	void ChangeCannon();

	bool IsReadyToFire();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
	int StockOfShells = 10;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Reload();

public:	
	//Called every frame
	virtual void Tick(float DeltaTime) override;

};
