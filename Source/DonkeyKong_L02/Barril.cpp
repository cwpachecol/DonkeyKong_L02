// Fill out your copyright notice in the Description page of Project Settings.


#include "Barril.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ABarril::ABarril()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarrilMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	BarrilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrilMesh"));
	RootComponent = BarrilMesh;
	BarrilMesh->SetStaticMesh(BarrilMeshAsset.Object);

	// Habilitar la simulación de física
	BarrilMesh->SetSimulatePhysics(true);
	BarrilMesh->SetMassOverrideInKg(NAME_None, 15050.0f); // Ajustar la masa si es necesario


}

// Called when the game starts or when spawned
void ABarril::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarril::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

