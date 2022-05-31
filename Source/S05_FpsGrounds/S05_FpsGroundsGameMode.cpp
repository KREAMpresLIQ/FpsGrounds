// Copyright Epic Games, Inc. All Rights Reserved.

#include "S05_FpsGroundsGameMode.h"
#include "S05_FpsGroundsHUD.h"
#include "S05_FpsGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS05_FpsGroundsGameMode::AS05_FpsGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_FpsGroundsHUD::StaticClass();
}
