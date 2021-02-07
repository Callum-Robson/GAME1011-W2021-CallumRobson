#include "Ogre.h"
#include "Weapon.h"


Ogre::Ogre(string name, int hvalue, Weapon &weapon)
{
	setName(name);
	setHealthValue(hvalue);
	setWeapon(weapon);
	convertName();
	//convertAbility();
}


void Ogre::convertName()
{
	setName(getName() + " from the swamp");
}

void Ogre::convertAbility()
{
	string newAbility1 = "'Get out me swamp'" + getWeapon().getSpecialAbility(0);
	getWeapon().setSpecialAbility(0, newAbility1);
	getWeapon().setSpecialAbility(1, "'Donkey!'" + getWeapon().getSpecialAbility(1));
}

void Ogre::displayInfo()
{
	cout << "Name: " << getName() << "\nHealth: " << getHealthValue();
	cout << getWeapon();		
			
		/* "\nWeapon: " << getWeapon().getName()
	<< "\nWeapon Description: " << getWeapon().getDescription() << "\nWeapon Damage: " << getWeapon().getDamageValue()
	<< "\nWeapon Abilities: 'Get out me swamp' " << getWeapon().getSpecialAbility(0) << ", 'Donkey!' "
	<< getWeapon().getSpecialAbility(1 )<< endl << endl;*/
}
