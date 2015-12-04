// Mail.ru Games LLC

#pragma once

#include "W1ProjectileDamageEffect.generated.h"

UCLASS(Blueprintable, editinlinenew, autoExpandCategories = (Test), meta = (DisplayName = "Damage Effect"))
class UW1ProjectileDamageEffect : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Test)
	FString Message = TEXT("Default message");
};
