// Mail.ru Games LLC

#pragma once

#include "GameFramework/Character.h"
#include "W1Character.generated.h"

class UW1Inventory;

UCLASS()
class AW1Character : public ACharacter
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Character)
	class UW1Inventory* Inventory;
};
