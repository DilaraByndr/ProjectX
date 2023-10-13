// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectXGameMode.h"
#include "ProjectXCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectXGameMode::AProjectXGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
