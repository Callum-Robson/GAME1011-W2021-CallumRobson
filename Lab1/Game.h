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
	void setArraySize(int x)
	{
		m_arraySize = x;
	}
	void defineArrayDesciption(string x)
	{
		m_pArray->defineArrayDescription(x);
	}
	void defineArrayTitle(string x, int y, int z);
	string getAchTitle(int y, int z);
	void allocateArray(int x);

};


#endif