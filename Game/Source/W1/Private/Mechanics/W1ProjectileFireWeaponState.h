// Mail.ru Games LLC

#pragma once

#include "W1ProjectileDamageEffect.h"
#include "W1ItemState.h"
#include "W1ProjectileFireWeaponState.generated.h"

UCLASS()
class UW1ProjectileFireWeaponState : public UW1ItemState
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = Config, meta = (ClampMin = "0"))
	float ProjectileSpeedIncreasePerMiss;

public:
	UPROPERTY(Instanced, BlueprintReadOnly, EditDefaultsOnly, Category = Config)
	TArray<UW1ProjectileDamageEffect*> ProjectileEffects;

	/** When true, mobs ignore any advanced aiming and fire directly at target. */
	UPROPERTY(EditDefaultsOnly, Category = Config)
	bool MobsUseInstantAiming = true;
};
