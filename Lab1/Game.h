#pragma once
#ifndef __GAME__
#define __GAME__
#include "Achievement.h"
#include <iostream>
#include <string>
using namespace std;

class Game
{
private:
	string m_name, m_publisher, m_developer;
	int m_arraySize;
	Achievement* m_pArray;
	Achievement* m_pArray2;
public:
	Game()
	{
		m_name = "null"; m_publisher = "null"; m_developer = "null";
	}
	Game(string n, string p, string d)
	{
		m_name = n;
		m_publisher = p;
		m_developer = d;
	}
	void setName(string name)
	{
		m_name = name;
	}
	void setPublisher(string publisher)
	{
		m_publisher = publisher;
	}
	void setDeveloper(string developer)
	{
		m_developer = developer;
	}
	string getName()
	{
		return m_name;
	}
	string getPublisher()
	{
		 return m_publisher;
	}
	string getDeveloper()
	{
		return m_developer;
	}
	void setArraySize(int arraySize)
	{
		m_arraySize = arraySize;
	}
	void defineArrayDesciption(string description)
	{
		m_pArray->defineArrayDescription(description);
	}
	void defineArrayTitle(string arrayTitle, int arraySwitch, int j);
	string getAchTitle(int achievementArraySwitch, int j);
	void allocateArray(int achievementArraySwitch);

};


#endif