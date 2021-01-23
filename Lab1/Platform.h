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
		return m_manufacturer;
	}
	void setGameInfo(string n, string p, string d, int i);

	string getGameName(int i);
	string getGamePublisher(int i);
	string getGameDeveloper(int i);

	void setAchievementTitle(int game, string title, bool arraySwitch, int j);
	void setAchievementDescription(int game, string description, bool arraySwitch, int j);
	void setAchievementScoreValue(int game, int scoreValue, bool arraySwitch, int j);
	void setAchievementArraySize(int game, int arraysize);
	void allocateAchievementArray(int game, bool arraySwitch);
	string getAchievementTitle(int game, bool arraySwitch, int j);
	string getAchievementDescription(int game, bool arraySwitch, int j);
	int getAchievementArraySize(int game);
	void setArraySwitch(int game, bool arraySwitch);
	int getArraySwitch(int game)
	{
		return m_pGameArray[game].getArraySwitch();
	}
};


#endif

