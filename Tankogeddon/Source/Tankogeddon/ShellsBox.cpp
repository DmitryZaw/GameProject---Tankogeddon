// Fill out your copyright notice in the Description page of Project Settings.


#include "ShellsBox.h"
#include "TankPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

// Sets default values
AShellsBox::AShellsBox()
{
	PrimaryActorTick.bCanEverTick = false;
	USceneComponent* sceeneCpm =
	CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = sceeneCpm;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &AShellsBox::OnMeshOverlapBegin);
	Mesh->SetCollisionProfileName(FName("OverlapAll"));
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Mesh->SetGenerateOverlapEvents(true);
}

void AShellsBox::OnMeshOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const
	FHitResult& SweepResult)
{
	ACannon* StockOfShells =
		Cast<ACannon>(GetWorld()->GetFirstPlayerController()->GetPawn());
	
	if (OtherActor == StockOfShells)
	{
		StockOfShells = StockOfShells + ShellsOfBox;
		Destroy();
	}
}
