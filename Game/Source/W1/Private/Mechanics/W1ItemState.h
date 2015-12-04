// Mail.ru Games LLC

#pragma once

#include "Engine/EngineTypes.h"
#include "W1ItemState.generated.h"

UCLASS(Abstract, config = Engine, defaultconfig, DefaultToInstanced, Blueprintable, editinlinenew, Within = W1Weapon)
class UW1ItemState : public UObject
{
	GENERATED_BODY()
};
