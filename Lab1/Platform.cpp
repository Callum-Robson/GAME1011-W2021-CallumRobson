#include "Platform.h"

void Platform::setGameInfo(string n, string p, string d, int i)
{
	m_pGameArray[i].setName(n);
	m_pGameArray[i].setPublisher(p);
	m_pGameArray[i].setDeveloper(d);
}

string Platform::getGameName(int i)
{
	return m_pGameArray[i].getName();	
}

string Platform::getGamePublisher(int i)
{
	return m_pGameArray[i].getPublisher();
}

string Platform::getGameDeveloper(int i)
{
	return m_pGameArray[i].getDeveloper();
}

void Platform::setAchievementTitle(int game, string title, int arraySwitch, int j )
{
	m_pGameArray[game].defineArrayTitle(title, arraySwitch, j);
}

void Platform::setAchievementArraySize(int game, int arraysize)
{
	m_pGameArray[game].setArraySize(arraysize);
}

void Platform::allocateAchievementArray(int game, int arraySwitch)
{
	m_pGameArray[game].allocateArray(arraySwitch);
}

string Platform::getAchievementTitle(int game, int arraySwitch, int j)
{
	return m_pGameArray[game].getAchTitle(arraySwitch, j); 
}


