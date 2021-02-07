#pragma once
#ifndef __OGRE__
#define __OGRE__
#include "Character.h"

class Ogre : public Character
{
public:
	Ogre(string name, int hvalue, Weapon &weapon);
	void convertName() override;
	void convertAbility();
	void displayInfo() override;
};


#endif//__OGRE__