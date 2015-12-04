// Mail.ru Games LLC

#pragma once

#include "W1Leaf.h"
#include "W1ProjectileFireWeaponState.generated.h"

UCLASS(DefaultToInstanced, Blueprintable, editinlinenew, Within = W1Weapon, autoExpandCategories = (Test))
class UW1ProjectileFireWeaponState : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Instanced, BlueprintReadOnly, EditDefaultsOnly, Category = Test)
	UW1Leaf* Leaf;
};
