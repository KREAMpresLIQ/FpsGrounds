// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "S05_FpsGroundsHUD.generated.h"

UCLASS()
class AS05_FpsGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AS05_FpsGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

