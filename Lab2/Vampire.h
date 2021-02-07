#pragma once
#ifndef __VAMPIRE__
#define __VAMPIRE__
#include "Character.h"

class Vampire : public Character
{
public:
	Vampire(string name, int hvalue, Weapon weapon);
	void convertName() override;
	void displayInfo() override;
};



#endif//__VAMPIRE__