// Fill out your copyright notice in the Description page of Project Settings.


#include "Disparador.h"
#include "Projectile.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/CollisionProfile.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ADisparador::ADisparador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> disparadorMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	// Create the mesh component
	disparadorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("disparadorMesh"));
	RootComponent = disparadorMeshComponent;
	//disparadorMeshComponent->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	disparadorMeshComponent->SetStaticMesh(disparadorMesh.Object);

	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
}

// Called when the game starts or when spawned
void ADisparador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADisparador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Generate a random value between 0 and 1
	const float RandomValue = FMath::FRand();

	// Check if the random value is less than 0.5
	if (RandomValue < 0.5f)
	{
		// Create fire direction vector with random Y and Z values
		const float RandomFireRightValue = FMath::FRandRange(-1.0f, 1.0f);
		const float RandomFireUpValue = FMath::FRandRange(-1.0f, 1.0f);
		const FVector FireDirection = FVector(0.f, RandomFireRightValue, RandomFireUpValue);

		// Try and fire a shot
		FireShot(FireDirection);
	}
}


void ADisparador::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AProjectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ADisparador::ShotTimerExpired, FireRate);

			
			bCanFire = false;
		}
	}

}

void ADisparador::ShotTimerExpired()
{
	bCanFire = true;
}

