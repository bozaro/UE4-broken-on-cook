// Mail.ru Games LLC

#include "W1.h"
#include "W1Inventory.h"
#include "W1Character.h"

AW1Character::AW1Character(const FObjectInitializer& ObjectInitializer)
{
	Inventory = CreateDefaultSubobject<UW1Inventory>(TEXT("Inventory"));
}
