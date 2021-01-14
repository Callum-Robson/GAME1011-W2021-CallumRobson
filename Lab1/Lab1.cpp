#include <iostream>
using namespace std;

class Achievement
{
private:
	string m_title, m_description;
	int m_scoreValue;
public:
	Achievement(string t, string d, int s)
	{
		m_title = t;
		m_description = d;
		m_scoreValue = s;
	}
};

class Game
{
private:
	string m_name, m_publisher, m_developer;
public:
	Game(string n, string p, string d)
	{
		m_name = n;
		m_publisher = p;
		m_developer = d;
	}
};

class Platform
{
private:
	string m_name, m_manufacturer;
public:
	Platform(string n, string m)
	{
		m_name = n;
		m_manufacturer = m;
	}
	void setName()
	{
		cout << m_name << endl;
	}
	void getManufacturer()
	{
		cout << m_manufacturer << endl;
	}
};


int main()
{
	Platform ps5("PS5", "Sony"), nSwitch("Switch", "Nintendo"), xsx("Xbox Series X", "Microsoft");
	ps5.getManufacturer();
	nSwitch.getManufacturer();
	xsx.getManufacturer();
	
	return 0;
}