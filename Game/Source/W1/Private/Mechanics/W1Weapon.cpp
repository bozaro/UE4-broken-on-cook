// Mail.ru Games LLC

#include "W1.h"
#include "W1Inventory.h"
#include "W1EmptyItemState.h"
#include "W1Weapon.h"

AW1Weapon::AW1Weapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	FireState = CreateDefaultSubobject<UW1EmptyItemState>(TEXT("FireState"));
}

void AW1Weapon::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
