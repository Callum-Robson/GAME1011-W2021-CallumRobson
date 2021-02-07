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
	cout << "Name: " << getName() << "\nHealth: " << getHealthValue();
	cout << getWeapon();
}
