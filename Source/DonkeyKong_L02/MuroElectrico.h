// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroElectrico.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AMuroElectrico : public AMuro
{
	GENERATED_BODY()
	
protected:
	int32 nivelCargaElectrica;
public:
	AMuroElectrico();

	virtual void ejercerAccion() override;

	virtual void descargarElectricidad();
	virtual void cargarElectricidad();

};
