#pragma once
#ifndef __ACHIEVEMENT__
#define __ACHIEVEMENT__
#include <iostream>
#include <string>
using namespace std;

class Achievement
{
private:
	string m_title, m_description;
	int m_scoreValue;
public:
	Achievement() { m_title = "empty", m_description = "0", m_scoreValue = 0; };
	Achievement(string t, string d, int s)
	{
		m_title = t;
		m_description = d;
		m_scoreValue = s;
	}
	void defineArrayDescription(string x)
	{
		m_description = x;
	}
	void defineArrayTitle(string& x)
	{
		m_title = x;
	}
	void setScoreValue(int scoreValue)
	{
		m_scoreValue = scoreValue;
	}
    string getTitle()
	{
		return m_title;
	}
	string getAchievementDescription()
	{
		return m_description;
	}
};
#endif
