#include "Ogre.h"


Ogre::Ogre(string name, int hvalue, Weapon weapon)
{
	setName(name);
	setHealthValue(hvalue);
	setWeapon(weapon);
	convertName();
}


void Ogre::convertName()
{
	setName(getName() + " from the swamp");
}

void Ogre::displayInfo()
{
	cout << "Name: " << getName() << "\nHealth: " << getHealthValue() << "\nWeapon: " << getWeapon().getName()
	<< "\nWeapon Description: " << getWeapon().getDescription() << "\nWeapon Damage: " << getWeapon().getDamageValue()
	<< "\nWeapon Abilities: 'Get out me swamp' " << getWeapon().getSpecialAbility(0)<< endl << endl;
}