#include "Game.h"

void Game::allocateArray(int x)
{
	if (x == 1)
		m_pArray = new Achievement[m_arraySize];
	else if (x == 0)
		m_pArray2 = new Achievement[m_arraySize];
}

void Game::defineArrayTitle(string x, int y, int z)
{
	if (y == 1)
		m_pArray[z].defineArrayTitle(x);
	if (y == 0)
		m_pArray2[z].defineArrayTitle(x);
}

string Game::getAchTitle(int y, int z)
{
	if (y == 1)
		return m_pArray[z].getTitle();
	else if (y == 0)
		return m_pArray2[z].getTitle();
}
