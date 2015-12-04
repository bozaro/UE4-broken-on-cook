// Mail.ru Games LLC

#pragma once

#include "W1Leaf.generated.h"

UCLASS(Blueprintable, editinlinenew, autoExpandCategories = (Test))
class UW1Leaf : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Test)
	FString Message = TEXT("Default message");
};
