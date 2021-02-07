#include <iostream>
#include <string>
#include "Weapon.h"
#include "Character.h"
#include "Ogre.h"
#include "Skeleton.h"
#include "Vampire.h"

using namespace std;

int main()
{
	Weapon sword("Sword", "Like a knife, but bigger", 60, "slash", 0);
	Weapon bow("Bow", "It shoot arrows", 40, "arrow", 0);
	Weapon dagger("Dagger", "Like a sword, but smaller", 30, "stab", 0);

	bool inMenu1 = true;
	bool inMenu2;
	bool inMenu3;
	int menu1Selection;
	int menu2Selection;
	int menu3Selection;
	Character **pCharacters;
	pCharacters = new Character * [3];
	int numOfCharacters = -1;

	cout << "Welcome!\n";
	while (inMenu1 == true)
	{
		menu1Selection = 0;
		while (menu1Selection != 1 && menu1Selection != 2 && menu1Selection != 3 && menu1Selection != 4)
		{
			cout << "Make a selection:\n" << "1.Create characters\n" << "2.View characters\n"
				<< "3.Delete characters\n" << "4.Exit\n";
			cin >> menu1Selection;
			if (menu1Selection != 1 && menu1Selection != 2 && menu1Selection != 3 && menu1Selection != 4)
				cout << "Invalid selection\n";
		}
		switch (menu1Selection)
		{
		case 1:
		{
			inMenu2 = true;
			while (inMenu2 == true)
			{
				menu2Selection = 0;
				while (menu2Selection != 1 && menu2Selection != 2 && menu2Selection != 3 && menu2Selection != 4)
				{
					cout << "Choose a character to create, or enter 4 to return to the previous menu\n" << "1.Ogre\n2.Skeleton\n3.Vampire\n4.Return to previous menu\n";
					cin >> menu2Selection;
					if (menu1Selection != 1 && menu1Selection != 2 && menu1Selection != 3 && menu2Selection != 4)
						cout << "Invalid selection\n";
				}
				switch (menu2Selection)
				{
				case 1:
				{
					numOfCharacters++;
					auto* jenny = new Ogre("Jenny", 200, sword);
					//int len = sizeof(characters) / sizeof(characters[0]);
					pCharacters[numOfCharacters] = jenny;
					cout << "Ogre created\n";
				}
				break;
				case 2:
				{
					numOfCharacters++;
					auto* tony = new Skeleton("Tony", 100, bow);
					pCharacters[numOfCharacters] = tony;
					cout << "Skeleton created\n";
				}
				break;
				case 3:
				{
					numOfCharacters++;
					auto* brian = new Vampire("Brian", 300, dagger);
					pCharacters[numOfCharacters] = brian;
					cout << "Vampire created\n";
				}
				break;
				case 4:
				{
					inMenu2 = false;
				}
					break;
				}
			}
		}
			break;
		case 2:
		{
			if (numOfCharacters > -1)
			{
				for (int i = 0; i < numOfCharacters+1; i++)
				{
					pCharacters[i]->displayInfo();
				}
			}
			else
				cout << "No characters created\n";
		}
			break;
		case 3:
		{
			inMenu3 = true;
			while (inMenu3 == true)
			{
				if (numOfCharacters > -1)
				{
					cout << "Choose a character to delete, or enter 4 to return to the previous menu\n";
					for (int i = 0; i < numOfCharacters + 1; i++)
					{
						cout << i + 1 << "." << pCharacters[i]->getName() << endl;
					}
					cin >> menu3Selection;
					switch (menu3Selection)
					{
					case 1:
						{
							
						}
						break;
					case 2:
						{
							
						}
						break;
					case 3:
						{
							
						}
						break;
					case 4:
						{
							
						}
						break;
					}
				}
				else
					cout << "No characters found\n";
				
			}
		}
			break;
		case 4:
		{
			cout << "Goodbye!";
			inMenu1 = false;
		}
			break;
		}

	}
	
	
	

	
	
}