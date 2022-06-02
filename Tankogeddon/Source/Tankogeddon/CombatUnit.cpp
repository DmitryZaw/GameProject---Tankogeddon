// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatUnit.h"

// Sets default values
ACombatUnit::ACombatUnit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	RootComponent = BodyMesh;

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret"));
	TurretMesh->SetupAttachment(BodyMesh);

	CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Cannon setup point"));
	CannonSetupPoint->AttachToComponent(TurretMesh, FAttachmentTransformRules::KeepRelativeTransform);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health component"));
	HealthComponent->OnDie.AddUObject(this, &ACombatUnit::Die);
	HealthComponent->OnDamaged.AddUObject(this, &ACombatUnit::DamageTaked);
	HitCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Hit collider"));
	HitCollider->SetupAttachment(BodyMesh);
}

// Called when the game starts or when spawned
void ACombatUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACombatUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACombatUnit::Fire()
{
	if (Cannon)
	{
		Cannon->Fire();
	}
}

void ACombatUnit::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
}

void ACombatUnit::Die()
{
	Destroy();
}

void ACombatUnit::DamageTaked(float DamageValue)
{
	UE_LOG(LogTemp, Warning, TEXT("Tank %s taked damage:%f Health:%f"), *GetName(), DamageValue, HealthComponent->GetHealth());
}