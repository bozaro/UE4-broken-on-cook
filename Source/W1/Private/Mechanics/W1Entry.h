// Mail.ru Games LLC

#pragma once

#include "Engine/ActorChannel.h"
#include "W1Node.h"
#include "W1Entry.generated.h"

UCLASS(Abstract, Blueprintable, autoExpandCategories = (Test))
class AW1Entry : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = Test)
	UW1Node* Node;
};
