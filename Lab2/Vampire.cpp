#include "Vampire.h"

Vampire::Vampire(string name, int hvalue, Weapon weapon)
{
	setName(name);
	setHealthValue(hvalue);
	setWeapon(weapon);
	convertName();
}

void Vampire::convertName()
{
	setName("Count " + getName() + "-ula");
}

void Vampire::displayInfo()
{
	cout << "Name: " << getName() << "\nHealth: " << getHealthValue() << "\nWeapon: " << getWeapon().getName()
	<< "\nWeapon Description: " << getWeapon().getDescription() << "\nWeapon Damage: " << getWeapon().getDamageValue()
	<< "\nWeapon Abilities: 'Bloodsucking' " << getWeapon().getSpecialAbility(0) << endl << endl;
}