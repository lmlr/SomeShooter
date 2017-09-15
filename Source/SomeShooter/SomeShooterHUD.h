// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SomeShooterHUD.generated.h"

UCLASS()
class ASomeShooterHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASomeShooterHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

