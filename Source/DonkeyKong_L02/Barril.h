// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Barril.generated.h"

class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_L02_API ABarril : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarril();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* BarrilMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
