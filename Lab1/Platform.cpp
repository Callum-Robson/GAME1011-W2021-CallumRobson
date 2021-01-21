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
