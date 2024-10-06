// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoMuro.generated.h"

class UStaticMeshComponent;
/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AObstaculoMuro : public AObstaculo
{
	GENERATED_BODY()
public:
	AObstaculoMuro();
	virtual void moverMuro();
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* muroMesh;

public:
	virtual void BeginPlay() override;

	FVector posicionInicial;
	FVector posicionActual;
	FVector posicionFinal;
	float incrementoZ;
	bool bajando;
};
