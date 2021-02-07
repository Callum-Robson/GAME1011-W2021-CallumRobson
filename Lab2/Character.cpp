#include "Character.h"


 Character::Character()
 {
	 m_name = "blank";
	 m_healthValue = NULL;
	 m_weapon = Weapon();
 }


string Character::getName()
{
	return m_name;
}

void Character::setName(string name)
{
	m_name = name;
}

int Character::getHealthValue()
{
	return m_healthValue;
}

void Character::setHealthValue(int healthValue)
{
	m_healthValue = healthValue;
}

Weapon Character::getWeapon()
{
	return m_weapon;
}

void Character::setWeapon(Weapon weapon)
{
	m_weapon = weapon;
}
