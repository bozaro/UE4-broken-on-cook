// Mail.ru Games LLC

#pragma once

#include "W1ProjectileDamageEffect.generated.h"

UCLASS(Blueprintable, meta = (DisplayName = "Damage Effect"))
class UW1ProjectileDamageEffect : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = Config, meta = (ClampMin = "0"))
	float InnerRadius = 100.f;

	UPROPERTY(EditDefaultsOnly, Category = Config, meta = (ClampMin = "0"))
	float OuterRadius = 200.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Config, meta = (ClampMin = "0"))
	float MaxDamage = 20.f;
};
