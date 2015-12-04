// Mail.ru Games LLC

#pragma once

#include "W1ProjectileDamageEffect.h"
#include "W1ItemState.h"
#include "W1ProjectileFireWeaponState.generated.h"

UCLASS()
class UW1ProjectileFireWeaponState : public UW1ItemState
{
	GENERATED_BODY()

public:
	UPROPERTY(Instanced, BlueprintReadOnly, EditDefaultsOnly, Category = Config)
	TArray<UW1ProjectileDamageEffect*> ProjectileEffects;
};
