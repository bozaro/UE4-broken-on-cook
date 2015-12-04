// Mail.ru Games LLC

#pragma once

#include "Engine/ActorChannel.h"
#include "W1ItemState.h"
#include "W1Weapon.generated.h"

UCLASS(Abstract, Blueprintable)
class AW1Weapon : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = States)
	UW1ItemState* FireState;
};
