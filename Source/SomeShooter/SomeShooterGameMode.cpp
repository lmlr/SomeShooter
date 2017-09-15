// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SomeShooterGameMode.h"
#include "SomeShooterHUD.h"
#include "SomeShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASomeShooterGameMode::ASomeShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASomeShooterHUD::StaticClass();
}
