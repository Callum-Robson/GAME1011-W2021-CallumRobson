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
	Game botw("The Legend of Zelda: Breath of the Wild", "Nintendo", "Nintendo");
	Game acv("Assassin's Creed Valhalla", "Ubisoft", "Ubisoft Montreal");

	bool inMenu = true;
	char selection1 = 'z';

	while (inMenu == true)
	{
		cout << "A) View Platforms \n";
		cout << "B) View Games\n";
		cout << "C) Create Achievements\n";
		while (selection1 != 'A' && selection1 != 'B' && selection1 != 'C')
		{
			cout << "Make a selection: ";
			cin >> selection1;
			selection1 = toupper(selection1);
			if (selection1 != 'A' && selection1 != 'B' && selection1 != 'C')
				cout << "Invalid entry\n";
		}
		switch (selection1)
		{
		case 'A':
			break;
		case 'B':
			break;
		case 'C':
			break;
		}
		cout << "success";
		inMenu = false;
	}
	return 0;
}