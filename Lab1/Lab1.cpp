#include <iostream>
#include <string>
#include "Game.h"
#include "Platform.h"

using namespace std;


int main()
{
	Platform platforms[] // array of platform objects
	{ Platform("PS5", "Sony"), Platform("Switch", "Nintendo"),  Platform("Xbox Series X", "Microsoft")};
	// PS5 Games
	platforms[0].setGameInfo("Assassin's Creed Valhalla", "Ubisoft", "Ubisoft Montreal", 0);
	platforms[0].setGameInfo("Marvel's Spider-Man: Miles Morales", "Sony Interactive Entertainment",
	"Insomniac Games", 1);
	platforms[0].setGameInfo("SackBoy: A Big Adventure", "Sony Interactive Entertainment",
	"Sumo Digital", 2);
	platforms[0].setGameInfo("Demon's Souls", "Sony Interactive Entertainment", "Bluepoint Games", 3);
	platforms[0].setGameInfo("Immortals Fenyx Rising", "Ubisoft", "Ubisoft Quebec", 4);
	// Switch Games
	platforms[1].setGameInfo("The Legend of Zelda: Breath of the Wild", "Nintendo", "Nintendo EPD", 0);
	platforms[1].setGameInfo("Pokemon Sword", "Nintendo & The Pokemon Company", "Game Freak", 1);
	platforms[1].setGameInfo("Animal Crossing: New Horizons", "Nintendo", "Nintendo EPD", 2);
	platforms[1].setGameInfo("Luigi's Mansion 3", "Nintendo", "Next Level Games", 3);
	platforms[1].setGameInfo("Yoshi's Crafted World", "Nintendo", "Good-Feel", 4);
	// XSX Games 
	platforms[2].setGameInfo("Call of Duty: Black Ops Cold War", "Activision", "Treyarch & Raven Software", 0);
	platforms[2].setGameInfo("Cyberpunk 2077", "CD Prokekt", "CD Projekt Red", 1);
	platforms[2].setGameInfo("NBA 2K21", "2K Sports", "Visual Concepts", 2);
	platforms[2].setGameInfo("Hitman 3", "IO Interactive", "IO Interactive", 3);
	platforms[2].setGameInfo("Devil May Cry 5", "Capcom", "Capcom", 4);
	
	Game games[]
	{
		Game("The Legend of Zelda: Breath of the Wild", "Nintendo", "Nintendo"),
		Game("Assassin's Creed Valhalla", "Ubisoft", "Ubisoft Montreal")
	};
	
	bool inMenu = true;
	int gameSelection = -1;
	int platformSelection = 0;
	string achTitle = "0";
	int achCounter = 0;
	bool arraySwitch = 1;
	bool reverseArraySwitch = !arraySwitch;
	bool newMenu = 0;
	int selection2 = 0;
	int selection3 = 0;

	while (inMenu == true)
	{
		char selection1 = 'z';
		cout << "A) View Platforms \n";
		cout << "B) View Games\n";
		cout << "C) Create Achievements\n";
		cout << "D) Exit Menu\n";
		while (selection1 != 'A' && selection1 != 'B' && selection1 != 'C' && selection1 != 'D')
		{
			cout << "Make a selection: ";
			cin >> selection1;
			selection1 = toupper(selection1);
			if (selection1 != 'A' && selection1 != 'B' && selection1 != 'C' && selection1 != 'D')
				cout << "Invalid entry\n";
		}
		switch (selection1)
		{
		case 'A':
			for (int i = 0; i < 3; i++)
				cout << platforms[i].getName() << endl;
			break;
		case 'B':

			cout << "View Games selected \n";
			for (int i = 0; i < 3; i++)
			{
				cout << "\n" << platforms[i].getName() << " Games:\n";
				for (int j = 0; j < 5; j++)
				{
					cout << platforms[i].getGameName(j) << ". publisher: " << platforms[i].getGamePublisher(j) << ". developer: ";
					cout << platforms[i].getGameDeveloper(j) << ".\n";
				}
				/*games[i].getName(); cout << ", ";
				games[i].getDeveloper(); cout << ", ";
				games[i].getPublisher(); cout << endl;*/
			}
			break;
		case 'C':
			selection3 = 0;
			while (selection3 == 0)
			{
				platformSelection = 0;
				while (platformSelection != 1 && platformSelection != 2 && platformSelection != 3 && platformSelection != 4)
				{
					cout << "Select a platform:\n";
					for (int i = 0; i < 3; i++)
					{
						cout << i + 1 << ") " << platforms[i].getName() << "\n";
					}
					cout << "4) Return to Previous Menu\n";
					cin >> platformSelection;
					if (platformSelection != 1 && platformSelection != 2 && platformSelection != 3 && platformSelection != 4)
						cout << "Invalid Entry\n";
					if (platformSelection == 4)
					{
						selection3 = 1;
					}
						
				}
				if (platformSelection == 1 || platformSelection == 2 || platformSelection == 3)
				{
					cout << "Select which game to create achievements for:\n";
					for (int j = 0; j < 5; j++)
					{
						cout << j + 1 << ") " << platforms[platformSelection - 1].getGameName(j) << "\n";
					}
					cin >> gameSelection;
					//Game chosen
					newMenu = 0;
					while (newMenu == 0)
					{
						cout << "Input achievement title: ";
						cin >> achTitle;
						if (achTitle != "0")
						{
							achCounter++;
						}
						arraySwitch = achCounter % 2;
						if (achCounter < 2)
						{
							// do the following if the achievements array is currently empty
							platforms[platformSelection - 1].setAchievementArraySize(gameSelection - 1, achCounter);
							platforms[platformSelection - 1].allocateAchievementArray(gameSelection - 1, arraySwitch);
							platforms[platformSelection - 1].setAchievementTitle(gameSelection - 1, achTitle, arraySwitch, 0);
							//games[selection2 - 1].getAchTitle(arraySwitch, 0);
						}
						else
						{
							platforms[platformSelection - 1].setAchievementArraySize(gameSelection - 1, achCounter);
							platforms[platformSelection - 1].allocateAchievementArray(gameSelection - 1, arraySwitch);
							for (int i = 0; i < achCounter - 1; i++) // if achCounter is 2, array only has 1 element, runs while i < 1, runs once
							{
								//copy old array into new array, delete old array, use bool to alternate between the two
								platforms[platformSelection - 1].setAchievementTitle(gameSelection - 1,
									platforms[platformSelection - 1].getAchievementTitle(gameSelection - 1, !arraySwitch, i),
									arraySwitch, i);
							}
							platforms[platformSelection - 1].setAchievementTitle(gameSelection - 1, achTitle, arraySwitch, achCounter - 1);
						}
						// if array not empty repeat the above after copying what was in the array to a new array
						selection2 = 0;
						while (selection2 != 1 && selection2 != 2)
						{
							cout << "1) Add More Achievements\n2) Return to Previous Menu\n";
							cin >> selection2;
							if (selection2 == 2)
							{
								newMenu = 1;
							}
						}
					}
					for (int i = 0; i < achCounter; i++)
					{
						cout << platforms[platformSelection - 1].getAchievementTitle(gameSelection - 1, arraySwitch, i) << endl;
					}
				}
			}
			break;
		case 'D':
			inMenu = false;;
			break;
		}	
	}
	return 0;
}