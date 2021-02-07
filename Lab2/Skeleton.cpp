#include "Skeleton.h"

Skeleton::Skeleton(string name, int hvalue, Weapon weapon)
{
	setName(name);
	setHealthValue(hvalue);
	setWeapon(weapon);
	convertName();
}

void Skeleton::convertName()
{
	setName("Skele" + getName());
}


void Skeleton::displayInfo()
{
	cout << "Name: " << getName() << "\nHealth: " << getHealthValue() << "\nWeapon: " << getWeapon().getName()
	<< "\nWeapon Description: " << getWeapon().getDescription() << "\nWeapon Damage: " << getWeapon().getDamageValue()
	<< "\nWeapon Abilities: 'Bone' " << getWeapon().getSpecialAbility(0) << endl << endl;
}
