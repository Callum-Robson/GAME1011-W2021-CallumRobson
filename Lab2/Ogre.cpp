#include "Ogre.h"
#include "Weapon.h"


Ogre::Ogre(string name, int hvalue, Weapon &weapon)
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
	cout << "Name: " << getName() << "\nHealth: " << getHealthValue();
	cout << getWeapon();		
			
	
}
