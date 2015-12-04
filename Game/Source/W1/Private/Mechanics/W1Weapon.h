// Mail.ru Games LLC

#pragma once

#include "Engine/ActorChannel.h"
#include "W1Node.h"
#include "W1ProjectileFireWeaponState.h"
#include "W1Weapon.generated.h"

UCLASS(Abstract, Blueprintable)
class AW1Weapon : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = Test)
	UW1ProjectileFireWeaponState* FireState;

	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = Test)
	UW1Node* Node;
};
