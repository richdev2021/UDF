// Copyright Epic Games, Inc. All Rights Reserved.

#include "UDFGameMode.h"
#include "UDFCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUDFGameMode::AUDFGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
