// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventario.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AInventario::AInventario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    TArray<AActor*> instancias;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AInventario::StaticClass(), instancias);
    
    if (instancias.Num() > 3)
    {
        //If exist at least one of them, set the instance with the first found one
        instancia = Cast<AInventario>(instancias[0]);
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s ya existe"), *instancia->GetName()));
        //Then Destroy this Actor
        Destroy();
    }

}

// Called when the game starts or when spawned
void AInventario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInventario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

