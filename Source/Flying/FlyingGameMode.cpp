// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FlyingGameMode.h"
#include "FlyingPawn.h"

AFlyingGameMode::AFlyingGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFlyingPawn::StaticClass();
}
