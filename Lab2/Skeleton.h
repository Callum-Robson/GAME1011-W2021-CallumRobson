#pragma once
#ifndef __SKELETON__
#define __SKELETON__
#include "Character.h"

class Skeleton : public Character
{
public:
	Skeleton(string name, int hvalue, Weapon weapon);
	void convertName() override;
	void displayInfo() override;
};

#endif //__SKELETON__
 