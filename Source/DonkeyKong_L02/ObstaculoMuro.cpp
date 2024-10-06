// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoMuro.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"


AObstaculoMuro::AObstaculoMuro()
{
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	muroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuroMesh"));
	muroMesh->SetStaticMesh(mesh.Object);
	RootComponent = muroMesh;

	//posicionInicial = FVector(0.0f, 0.0f, 0.0f);
	//posicionActual = FVector(0.0f, 0.0f, 0.0f);
	//posicionFinal = FVector(0.0f, 0.0f, 0.0f);
	//incrementoZ = 2.0f;
	//bajando = true;
}

void AObstaculoMuro::moverMuro()
{
}

void AObstaculoMuro::Tick(float DeltaTime)
{
	//if (bajando)
	//{
	//	posicionActual.Z -= incrementoZ;
	//	if (posicionActual.Z <= posicionFinal.Z)
	//	{
	//		bajando = false;
	//	}
	//}
	//else
	//{
	//	posicionActual.Z += incrementoZ;
	//	if (posicionActual.Z >= posicionInicial.Z)
	//	{
	//		bajando = true;
	//	}
	//}

	//SetActorLocation(posicionActual);
}

void AObstaculoMuro::BeginPlay()
{
	/*posicionInicial = GetActorLocation();
	posicionActual = posicionInicial;
	posicionFinal = posicionInicial + FVector(0.0f, 0.0f, 100.0f);*/
}
