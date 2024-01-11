// Copyright Epic Games, Inc. All Rights Reserved.

#include "DarkChallangesGameMode.h"
#include "DarkChallangesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADarkChallangesGameMode::ADarkChallangesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
