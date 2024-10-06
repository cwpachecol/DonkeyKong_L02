// Fill out your copyright notice in the Description page of Project Settings.


#include "componentePlataforma.h"

// Sets default values
AcomponentePlataforma::AcomponentePlataforma()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("	StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	meshPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	meshPlataforma->SetStaticMesh(MeshAsset.Object);
	RootComponent = meshPlataforma;

	FVector NewScale(2.0f, 3.0f, 0.5f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);
	bMoverHorizontalmente = false;
	bMoverVerticalmente = false;
	bDetener = false;

	posicionInicio = FVector(0.0f, 0.0f, 0.0f);
	posicionFinal = FVector(0.0f, 0.0f, 0.0f);
	velocidad = 2.0f;
	anchoComponentePlataforma = 300.0f;
	altoComponentePlataforma = 50.0f;
	fondoComponentePlataforma = 200.0f;
	
	desplazamientoComponentePlataforma = FVector(0.0f, 1.0f, 1.0f);

	posicionActual = FVector(0.0f, 0.0f, 0.0f);
	posicionInicio = FVector(0.0f, 0.0f, 0.0f);
	posicionFinal = FVector(0.0f, 0.0f, 0.0f);

}

// Called when the game starts or when spawned
void AcomponentePlataforma::BeginPlay()
{
	Super::BeginPlay();

	posicionActual = GetActorLocation();
	posicionInicio = FVector(posicionActual.X - desplazamientoComponentePlataforma.X, posicionActual.Y - anchoComponentePlataforma - desplazamientoComponentePlataforma.Y, posicionActual.Z - altoComponentePlataforma * 5 - desplazamientoComponentePlataforma.Z);
	posicionFinal = FVector(posicionActual.X + desplazamientoComponentePlataforma.X, posicionActual.Y + anchoComponentePlataforma + desplazamientoComponentePlataforma.Y, posicionActual.Z + altoComponentePlataforma * 5 + desplazamientoComponentePlataforma.Z);
	incrementoZ = 2.0f;

	bDeIzquierdaADerecha = true;
	bDeArribaAAbajo = true;
	dDeAdelanteAAtras = true;
}

// Called every frame
void AcomponentePlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bDetener) {
		if (bMoverVerticalmente)
		{
			if (bDeArribaAAbajo)
			{
				posicionActual.Z += desplazamientoComponentePlataforma.Z * velocidad;
				if (posicionActual.Z > posicionFinal.Z)
				{
					bDeArribaAAbajo = false;
				}
			}
			else
			{
				posicionActual.Z -= desplazamientoComponentePlataforma.Z * velocidad;
				if (posicionActual.Z < posicionInicio.Z)
				{
					bDeArribaAAbajo = true;
				}
			}

		}
		
		if (bMoverHorizontalmente)
		{
			if (bDeIzquierdaADerecha)
			{
				posicionActual.Y += desplazamientoComponentePlataforma.Y * velocidad;
				if (posicionActual.Y > posicionFinal.Y)
				{
					bDeIzquierdaADerecha = false;
				}
			}
			else
			{
				posicionActual.Y -= desplazamientoComponentePlataforma.Y * velocidad;
				if (posicionActual.Y < posicionInicio.Y)
				{
					bDeIzquierdaADerecha = true;
				}
			}
		}
	}
	
	SetActorLocation(posicionActual);
	
	
	//float RunningTime = GetGameTimeSinceCreation();
	/*if (bMoverHorizontalmente) {
		FVector posicionActual = GetActorLocation();
		SetActorLocation(GetActorLocation() + FVector(0.0f, velocidad * DeltaTime, 0.0f));
		if (posicionActual.Y > posicionFinal.Y) {
			velocidad = -velocidad;
		}
		if (posicionActual.Y < posicionInicio.Y) {
			velocidad = -velocidad;
		}
	}*/

	

}
