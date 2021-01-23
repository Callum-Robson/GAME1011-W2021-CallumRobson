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

void Platform::setAchievementTitle(int game, string title, bool arraySwitch, int j )
{
	m_pGameArray[game].defineArrayTitle(title, arraySwitch, j);
}

string Platform::getAchievementDescription(int game, bool arraySwitch, int j)
{
	return m_pGameArray[game].getAchievementDescription(arraySwitch, j);
}


void Platform::setAchievementDescription(int game, string description, bool arraySwitch, int j)
{
	m_pGameArray[game].setAchievementDescription(description, arraySwitch, j);
}

void Platform::setAchievementScoreValue(int game, int scoreValue, bool arraySwitch, int j)
{
	m_pGameArray[game].setAchievementScoreValue(scoreValue, arraySwitch, j);
}

void Platform::setAchievementArraySize(int game, int arraysize)
{
	m_pGameArray[game].setArraySize(arraysize);
}

void Platform::allocateAchievementArray(int game, bool arraySwitch)
{
	m_pGameArray[game].allocateArray(arraySwitch);
}

string Platform::getAchievementTitle(int game, bool arraySwitch, int j)
{
	return m_pGameArray[game].getAchTitle(arraySwitch, j); 
}

int Platform::getAchievementArraySize(int game)
{
	return m_pGameArray[game].getAchievementArraySize();
}

void Platform::setArraySwitch(int game, bool arraySwitch)
{
	m_pGameArray->setArraySwitch(arraySwitch);
}


