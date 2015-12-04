// Mail.ru Games LLC

#pragma once

#include "W1Leaf.h"
#include "W1Node.generated.h"

UCLASS(DefaultToInstanced, Blueprintable, editinlinenew, autoExpandCategories = (Test))
class UW1Node : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Instanced, BlueprintReadOnly, EditDefaultsOnly, Category = Test)
	UW1Leaf* Leaf;
};
