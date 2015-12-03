// Mail.ru Games LLC

#pragma once

#include "W1InventoryItem.generated.h"

UCLASS(Abstract, Blueprintable, autoExpandCategories = (States))
class AW1InventoryItem : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleDefaultsOnly, Category = Item)
	FName AttachPoint = FName("WeaponPoint");
	 
	UPROPERTY(EditDefaultsOnly, Category = Item, Meta = (Tooltip = "Take item to hand action"))
	FName EquipAction;
};
