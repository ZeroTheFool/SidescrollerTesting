// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewSSProjectGameMode.h"
#include "NewSSProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANewSSProjectGameMode::ANewSSProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
