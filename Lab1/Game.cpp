#include "Game.h"

void Game::allocateArray(int achievementArraySwitch)
{
	if (achievementArraySwitch  == 1)
		m_pArray = new Achievement[m_arraySize];
	else if (achievementArraySwitch == 0)
		m_pArray2 = new Achievement[m_arraySize];
}

void Game::defineArrayTitle(string arrayTitle, int achievementArraySwitch, int j)
{
	if (achievementArraySwitch == 1)
		m_pArray[j].defineArrayTitle(arrayTitle);
	if (achievementArraySwitch == 0)
		m_pArray2[j].defineArrayTitle(arrayTitle);
}

string Game::getAchTitle(int achievementArraySwitch, int j)
{
	if (achievementArraySwitch == 1)
		return m_pArray[j].getTitle();
	else
		return m_pArray2[j].getTitle();
}
