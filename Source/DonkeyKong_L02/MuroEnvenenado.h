// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroEnvenenado.generated.h"

/**
 * 
 */
class UParticleSystemComponent;

UCLASS()
class DONKEYKONG_L02_API AMuroEnvenenado : public AMuro
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;
public:
	AMuroEnvenenado();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void ejercerAccion() override;
};
