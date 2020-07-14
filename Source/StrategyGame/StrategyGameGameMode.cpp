// Copyright Epic Games, Inc. All Rights Reserved.

#include "StrategyGameGameMode.h"
#include "StrategyGamePlayerController.h"
#include "StrategyGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStrategyGameGameMode::AStrategyGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AStrategyGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}