#include <iostream>
#include <string>
#include "Game.h"
#include "Platform.h"
#include "Achievement.h"
using namespace std;


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
	int selection2 = -1;
	string achTitle = "0";
	int achCounter = 0;
	bool arraySwitch = 1;
	bool reverseArraySwitch = !arraySwitch;

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
			for (int i = 0; i < 2; i++)
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
					games[selection2 - 1].setArraySize(achCounter);
					games[selection2 - 1].allocateArray(arraySwitch);
					games[selection2 - 1].defineArrayTitle(achTitle, arraySwitch, 0);
					//games[selection2 - 1].getAchTitle(arraySwitch, 0);
				}
				else
				{
					games[selection2 - 1].setArraySize(achCounter);
					games[selection2 - 1].allocateArray(arraySwitch);
					for (int i = 0; i < achCounter - 1; i++) // if achCounter is 2, array only has 1 element, runs while i < 1, runs once
					{
						//copy old array into new array, delete old array, use bool to alternate between the two
						games[selection2 - 1].defineArrayTitle(games[selection2 - 1].getAchTitle(1, i), arraySwitch, i);
					}
					games[selection2 - 1].defineArrayTitle(achTitle, arraySwitch, achCounter - 1);
				}
				// if array not empty repeat the above after copying what was in the array to a new array
			}
			for (int i = 0; i < 2; i++)
			{
				cout << games[selection2 - 1].getAchTitle(arraySwitch, i) << endl; //  error as there isnt yet a second element
			}
			break;
		case 'D':
			inMenu = false;;
			break;
		}	
	}
	return 0;
}