// Copyright Epic Games, Inc. All Rights Reserved.

#include "myThirdProject01GameMode.h"
#include "myThirdProject01Character.h"
#include "UObject/ConstructorHelpers.h"

AmyThirdProject01GameMode::AmyThirdProject01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
