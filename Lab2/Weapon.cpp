#include "Weapon.h"

Weapon::Weapon(string name, string description, int dValue, string ability, int abilityIndex)
{
	m_name = name;
	m_description = description;
	m_damageValue = dValue;
	m_specialAbility[abilityIndex] = ability;
}
Weapon::Weapon()
{
	m_name = "blank";
	m_description = "description";
	m_damageValue = NULL;
	m_specialAbility[0] = "blank";
	m_specialAbility[1] = "blank";
}


string Weapon::getName()
{
	return m_name;
}

void Weapon::setName(string name)
{
	m_name = name;
}

string Weapon::getDescription()
{
	return m_description;
}

void Weapon::setDescription(string description)
{
	m_description = description;
}

int Weapon::getDamageValue()
{
	return m_damageValue;
}

void Weapon::setDamageValue(int damageValue)
{
	m_damageValue = damageValue;
}

string Weapon::getSpecialAbility(int i)
{
	return m_specialAbility[i];
}

void Weapon::setSpecialAbility(int i, string ability)
{
	m_specialAbility[i] = ability;
}
