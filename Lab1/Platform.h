#pragma once
#ifndef __PLATFORM__
#define __PLATFORM__
#include <iostream>
#include <string>
#include "Game.h"
using namespace std;

class Platform
{
private:
	string m_name, m_manufacturer;
	Game m_pGameArray[5];
public:
	Platform(string n, string m)
	{
		m_name = n;
		m_manufacturer = m;
	}
	string getName()
	{
		return m_name;
	}
	string getManufacturer()
	{
		m_manufacturer;
	}
	void setGameInfo(string n, string p, string d, int i);

	string getGameName(int i);
	string getGamePublisher(int i);
	string getGameDeveloper(int i);

	void setAchievementTitle(int game, string title, int arraySwitch, int j);
	void setAchievementArraySize(int game, int arraysize);
	void allocateAchievementArray(int game, int arraySwitch);
	string getAchievementTitle(int game, int arraySwitch, int j);
};


#endif

