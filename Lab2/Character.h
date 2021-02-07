#pragma once
#ifndef __CHARACTER__
#define __CHARACTER__
#include <string>
#include "Weapon.h"
#include <iostream>
using namespace std;

class Character
{
private:
	string m_name;
	int m_healthValue;
	Weapon m_weapon;
public:
	Character();
	
	string getName();
	void setName(string name); // could be a virtual function? so each subclass can have it's own version of name
	int getHealthValue();
	void setHealthValue(int healthValue);
	Weapon getWeapon();
	void setWeapon(Weapon weapon);
	virtual void displayInfo() = 0;
	virtual void convertName() = 0;
	
};

#endif//__CHARCTER__
