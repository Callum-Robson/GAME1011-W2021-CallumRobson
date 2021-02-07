#pragma once
#ifndef __WEAPON__
#define __WEAPON__
#include <string>
using namespace std;


class Weapon
{
private:
	string m_name;
	string m_description;
	int m_damageValue;
	string m_specialAbility[2];
	
public:
	Weapon(string name, string description, int dValue, string ability, int abilityIndex);
	Weapon();
	string getName();
	void setName(string name);
	string getDescription();
	void setDescription(string description);
	int getDamageValue();
	void setDamageValue(int damageValue);
	string getSpecialAbility(int i);
	void setSpecialAbility(int i, string ability);
};


#endif //__WEAPON__
