#include "Game.h"

void Game::allocateArray(bool achievementArraySwitch)
{
	if (achievementArraySwitch  == true)
		m_pArray = new Achievement[m_arraySize];
	else if (achievementArraySwitch == false)
		m_pArray2 = new Achievement[m_arraySize];
}

void Game::setAchievementScoreValue(int ScoreValue, bool arraySwitch, int j)
{
	if (arraySwitch == true)
		m_pArray[j].setScoreValue(ScoreValue);
	else if (arraySwitch == false)
		m_pArray2[j].setScoreValue(ScoreValue);
}

void Game::setAchievementDescription(string achievementDefinition, bool arraySwitch, int j)
{
	if (arraySwitch == true)
		m_pArray[j].defineArrayDescription(achievementDefinition);
	else if (arraySwitch == false)
		m_pArray2[j].defineArrayDescription(achievementDefinition);
}

string Game::getAchievementDescription(bool arraySwitch, int j)
{
	if (arraySwitch == true)
		return m_pArray[j].getAchievementDescription();
	else if (arraySwitch == false)
		return m_pArray2[j].getAchievementDescription();
}

void Game::defineArrayTitle(string arrayTitle, bool achievementArraySwitch, int j)
{
	if (achievementArraySwitch == true)
		m_pArray[j].defineArrayTitle(arrayTitle);
	else if (achievementArraySwitch == false)
		m_pArray2[j].defineArrayTitle(arrayTitle);
}

string Game::getAchTitle(bool achievementArraySwitch, int j)
{
	if (achievementArraySwitch == true)
		return m_pArray[j].getTitle();
	else
		return m_pArray2[j].getTitle();
}
