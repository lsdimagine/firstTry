// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "firstTry.h"
#include "firstTryGameMode.h"
#include "firstTryHUD.h"
#include "firstTryCharacter.h"

AfirstTryGameMode::AfirstTryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AfirstTryHUD::StaticClass();
}
