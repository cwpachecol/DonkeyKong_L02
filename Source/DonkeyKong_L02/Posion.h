// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Posion.generated.h"

UCLASS()
class DONKEYKONG_L02_API APosion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APosion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//The name of this Potion
	FString nombrePosion;
	//The Gooeyness of this Potion
	FString viscosidad;
	//The Blood of this Potion
	FString sangre;
	//The herbs contained in this Potion
	TArray<FString> hierbas;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Boild this potion
	void hervir();
	//Bubble this potion
	void burbujear();
	//Brew this potion
	virtual void preparar();
	//Bottle this potion
	void embotellar();
	//Return the Potion Name
	FString getNombrePosion();



};
