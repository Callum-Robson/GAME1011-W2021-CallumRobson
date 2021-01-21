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
	Game* m_pGameArray;
public:
	Platform(string n, string m)
	{
		m_name = n;
		m_manufacturer = m;
	}
	void getName()
	{
		cout << m_name << endl;
	}
	void getManufacturer()
	{
		cout << m_manufacturer << endl;
	}
	void setGameInfo(string n, string p, string d, int i);

	string getGameName(int i);
	string getGamePublisher(int i);
	string getGameDeveloper(int i);
};

#endif

