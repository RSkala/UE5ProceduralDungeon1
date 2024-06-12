// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProceduralDungeon1GameMode.h"
#include "ProceduralDungeon1Character.h"
#include "UObject/ConstructorHelpers.h"

AProceduralDungeon1GameMode::AProceduralDungeon1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
