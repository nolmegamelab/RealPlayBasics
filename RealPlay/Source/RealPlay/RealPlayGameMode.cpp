// Copyright Epic Games, Inc. All Rights Reserved.

#include "RealPlayGameMode.h"
#include "RealPlayPlayerController.h"
#include "RealPlayCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARealPlayGameMode::ARealPlayGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARealPlayPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}