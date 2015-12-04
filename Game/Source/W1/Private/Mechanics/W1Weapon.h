// Mail.ru Games LLC

#pragma once

#include "Engine/ActorChannel.h"
#include "W1ProjectileDamageEffect.h"
#include "W1ProjectileFireWeaponState.h"
#include "W1Weapon.generated.h"

UCLASS(Abstract, Blueprintable)
class AW1Weapon : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = States)
	UW1ProjectileFireWeaponState* FireState;
};
