// Copyright Epic Games, Inc. All Rights Reserved.

#include "SolarisGameMode.h"
#include "SolarisCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASolarisGameMode::ASolarisGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
