// Mail.ru Games LLC

#pragma once

#include "Engine/ActorChannel.h"
#include "W1ItemState.h"
#include "W1Weapon.generated.h"

UCLASS(Abstract, Blueprintable)
class AW1Weapon : public AW1InventoryItem
{
	GENERATED_BODY()

public:
	AW1Weapon(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Replicated, Category = States)
	UW1ItemState* FireState;
};
