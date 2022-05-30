// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Cannon.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShellsBox.generated.h"

UCLASS()
class TANKOGEDDON_API AShellsBox : public AActor
{
	GENERATED_BODY()
	
public:	
	AShellsBox();

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shells")
	int ShellsOfBox = 10;
	
	UFUNCTION()
	void OnMeshOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const
			FHitResult& SweepResult);
};
