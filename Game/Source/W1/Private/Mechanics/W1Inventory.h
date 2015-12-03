// Mail.ru Games LLC

#pragma once

#include "Components/ActorComponent.h"
#include "W1Character.h"
#include "W1InventoryItem.h"
#include "W1Inventory.generated.h"

/**
 * 
 */
UCLASS(Within = W1Character)
class UW1Inventory : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Inventory)
	TArray<TSubclassOf<AW1InventoryItem>> DefaultInventory;
};
