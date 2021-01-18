#include <iostream>
#include <string>
using namespace std;

class Achievement
{
private:
	string m_title, m_description;
	int m_scoreValue;
public:
	Achievement() { m_title = "0", m_description = "0", m_scoreValue = 0; };
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
	void defineArrayTitle(string x)
	{
		m_title = x;
	}
	void getTitle()
	{
		cout << m_title << endl;
	}
};

class Game
{
private:
	string m_name, m_publisher, m_developer;
	int m_arraySize;
	Achievement* m_pArray;
public:
	Game(string n, string p, string d)
	{
		m_name = n;
		m_publisher = p;
		m_developer = d;
	}
	void getName()
	{
		cout << m_name;
	}
	void getPublisher()
	{
		cout << m_publisher;
	}
	void getDeveloper()
	{
		cout << m_developer;
	}
	void setArraySize(int x)
	{
		m_arraySize = x;
	}
	void allocateArray()
	{
		m_pArray = new Achievement[m_arraySize];
	}
	void defineArrayDesciption(string x)
	{
		m_pArray->defineArrayDescription(x);
	}
	void defineArrayTitle(string x)
	{
		m_pArray->defineArrayTitle(x);
	}
	void getAchTitle()
	{
		m_pArray->getTitle();
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
	void getName()
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
	Platform platforms[]
	{ Platform("PS5", "Sony"), Platform("Switch", "Nintendo"),  Platform("Xbox Series X", "Microsoft")};

	Game games[]
	{
		Game("The Legend of Zelda: Breath of the Wild", "Nintendo", "Nintendo"),
		Game("Assassin's Creed Valhalla", "Ubisoft", "Ubisoft Montreal")
	};
	
	bool inMenu = true;
	char selection1 = 'z';
	int selection2 = -1;
	string achTitle = "0";
	int achCounter = 0;

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
			for (int i = 0; i < 3; i++)
				platforms[i].getName();
			break;
		case 'B':

			cout << "View Games selected \n" << "Games: \n";
			for (int i = 0; i < 2; i++)
			{
				games[i].getName(); cout << ", ";
				games[i].getDeveloper(); cout << ", ";
				games[i].getPublisher(); cout << endl;
			}
			break;
		case 'C':
			cout << "Select which game to create achievements for:\n";
			for (int i = 0; i < 2; i++)
			{
				cout << i + 1 << ") ";
				games[i].getName(); cout << ", ";
				games[i].getDeveloper(); cout << ", ";
				games[i].getPublisher(); cout << endl;
			}
			cin >> selection2;
			cout << "Input achievement title: ";
			cin >> achTitle;
			if (achTitle != "0")
			{
				achCounter++;
			}
			games[selection2 - 1].setArraySize(achCounter);
			games[selection2 - 1].allocateArray();
			games[selection2 - 1].defineArrayTitle(achTitle);
			games[selection2 - 1].getAchTitle();
			break;
		}
		cout << "success";
		
		inMenu = false;
	}
	return 0;
}