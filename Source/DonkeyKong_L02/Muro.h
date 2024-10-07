// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro.generated.h"

class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_L02_API AMuro : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMuro();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* muroMesh;




public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void ejercerAccion() {};
	//virtual void ejercerAccion() = 0;
	//PURE_VIRUAL(AMuro::ejercerAccion, );
};
