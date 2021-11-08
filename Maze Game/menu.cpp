#include <iostream>
#include "menu.h"
#include "levelOne.h"
#include "levelTwo.h"
#include <windows.h> // For color functions
#include <conio.h> // For getch()

using namespace std;

//Print Welcome
void frontEnd()
{
	int Set[] = { 5, 7};
	color(Set[0]);
	Set[0] = 5;
	cout << "                     ___       ___           ____                     " << endl;
	cout << "                    /\\  \\  ___/\\  \\         /\\   \\              " << endl;
	cout << "                    \\ \\  \\/\\  \\ \\  \\     ___\\//\\  \\     ___     ___       ___  ___       ___" << endl;
	cout << "                     \\ \\  \\ \\  \\ \\  \\  /  __ \\\\ \\  \\   / ___\\  / __ \\  /' __'  __'\\   /  __ \\" << endl;
	cout << "                      \\ \\  \\/   \\_\\  \\/\\   __/ \\_\\  \\_/\\ \\__/ /\\ \\ \\ \\/\\  \\/\\  \\/\\  \\/\\   __/" << endl;
	cout << "                       \\  \\____  ____/\\ \\____ \\/\\____ \\ \\____ \\ \\____/\\ \\_ \\ \\_ \\ \\_ \\ \\____ \\" << endl;
	cout << "                         \\/ __/ / __/  \\/ ____/\\/ ____/\\/ ____/\\/___/  \\/ _/\\/ _/\\/ _/\\/ ____/" << endl;
	color(Set[1]);
	Set[1] = { 7 };
}


//Color a text
void color(int color)
{
	// Set the cursor position in the specified console screen buffer
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

//Print instructions for the menu
void instructions()
{
	system("cls");
	cout << endl;
	cout << "                                                      INSTRUCTIONS" << endl << endl << endl;
	cout << "                                You will be playing with '0' and you will have to complete" << endl;
	cout << "                                the maze to move to the next level" << endl;
	cout << "                                Each level gets more harder and complex so pay attention" << endl;
	cout << "                                Don't bump into walls in order to complete the level" << endl;
	cout << "                                You can use your arrow keys to be able to move your player" << endl << endl << endl;
	system("pause");
	system("cls");

	menu();
}

//Call Menu
void menu() {
	int Set[] = { 12,7,7 };
	int counter = 1;
	char key;


	cout << endl;
	cout << " ___________________________ Menu ___________________________" << endl;
	for (;;)
	{

		gotoxy(10, 5);
		color(Set[0]);
		cout << " 1.Start Game" << endl;

		gotoxy(10, 6);
		color(Set[1]);
		cout << " 2.Instructions" << endl;

		gotoxy(10, 7);
		color(Set[2]);
		cout << " 3.Exit" << endl;

		//Get the key that is pressed
		key = _getch();

		//Move cursor through the options
		if (key == 72 && (counter >= 1 && counter <= 3))
		{
			counter--;
			//Doesn't let the cursor get out of the menu options 
			if (counter == 0)
			{
				counter = 1;
			}
		}
	
		if (key == 80 && (counter >= 1 && counter <= 3))
		{
			counter++;
			//Doesn't let the cursor get out of the menu options 
			if (counter == 4)
			{
				counter = 3;
			}
		}

		if (key == 13 || key == 77) {
			switch (counter)
			{
			case 1:
				levelOne();
				break;

			case 2:
				instructions();
				break;

			case 3:
				system("cls");
				cout << endl << endl << "                                         We hope you enjoyed our game!" << endl << endl << endl;
				exit(0);
				break;
			}
		}

		//Set define colors
		Set[0] = 7;
		Set[1] = 7;
		Set[2] = 7;

		//Set color as red while moving through the option
		if (counter == 1)
		{
			Set[0] = 12;
		}
		if (counter == 2)
		{
			Set[1] = 12;
		}
		if (counter == 3)
		{
			Set[2] = 12;
		}
	}
}