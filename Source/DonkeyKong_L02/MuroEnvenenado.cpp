// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroEnvenenado.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"


void AMuroEnvenenado::BeginPlay()
{
	Super::BeginPlay();

}

AMuroEnvenenado::AMuroEnvenenado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroEnvenenadoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroEnvenenadoAsset.Succeeded())
	{
		muroMesh->SetStaticMesh(MuroEnvenenadoAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss'"));
	if (MaterialAsset.Succeeded())
	{
		muroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit'"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
	}
}

void AMuroEnvenenado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMuroEnvenenado::ejercerAccion()
{
}
