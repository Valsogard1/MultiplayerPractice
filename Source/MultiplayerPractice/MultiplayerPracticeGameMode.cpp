// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerPracticeGameMode.h"
#include "MultiplayerPracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerPracticeGameMode::AMultiplayerPracticeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
