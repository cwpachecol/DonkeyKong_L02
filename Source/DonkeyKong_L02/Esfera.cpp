// Fill out your copyright notice in the Description page of Project Settings.


#include "Esfera.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/PrimitiveComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"


// Sets default values
AEsfera::AEsfera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> esferaMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));	
	esferaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EsferaMesh"));
	esferaMesh->SetStaticMesh(esferaMeshAsset.Object);
	RootComponent = esferaMesh;

    // Configurar propiedades físicas
	esferaMesh->SetSimulatePhysics(true);
    esferaMesh->BodyInstance.MassScale = 1.0f;
    esferaMesh->SetMassOverrideInKg(NAME_None, 10.0f); // Ajustar la masa si es necesario
    esferaMesh->SetLinearDamping(0.1f); // Amortiguación lineal
    esferaMesh->SetAngularDamping(0.1f); // Amortiguación angular

    // Configurar la restitución (bounciness)
    //esferaMesh->BodyInstance.ComplexCollisionResponse = ECollisionResponse::ECR_Block;
    //esferaMesh->BodyInstance.bOverrideWalkableSlopeOnInstance = true;
    //esferaMesh->BodyInstance.WalkableSlopeOverride = FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f);
    //esferaMesh->SetNotifyRigidBodyCollision(true);
    //esferaMesh->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
    //esferaMesh->BodyInstance.bUseCCD = true; // Continuous Collision Detection
    //esferaMesh->BodyInstance.Restitution = 0.8f; // Ajustar la restitución para el rebote

}

// Called when the game starts or when spawned
void AEsfera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEsfera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

