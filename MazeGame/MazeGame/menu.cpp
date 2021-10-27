í#include <iostream>
#include "levelOne.h"
#include "levelTwo.h"
#include <windows.h> // For color functions
#include <conio.h> // For getch()

using namespace std;

//Print Welcome
void frontEnd()
{
	cout << "                     ___       ___           ____                     " << endl;
	cout << "                    /\\  \\  ___/\\  \\         /\\   \\              " << endl;
	cout << "                    \\ \\  \\/\\  \\ \\  \\     ___\\//\\  \\     ___     ___       ___  ___       ___" << endl;
	cout << "                     \\ \\  \\ \\  \\ \\  \\  /  __ \\\\ \\  \\   / ___\\  / __ \\  /' __'  __'\\   /  __ \\" << endl;
	cout << "                      \\ \\  \\/   \\_\\  \\/\\   __/ \\_\\  \\_/\\ \\__/ /\\ \\ \\ \\/\\  \\/\\  \\/\\  \\/\\   __/" << endl;
	cout << "                       \\  \\____  ____/\\ \\____ \\/\\____ \\ \\____ \\ \\____/\\ \\_ \\ \\_ \\ \\_ \\ \\____ \\" << endl;
	cout << "                         \\/ __/ / __/  \\/ ____/\\/ ____/\\/ ____/\\/___/  \\/ _/\\/ _/\\/ _/\\/ ____/" << endl;
}


// Sets the cursor position in the specified console screen buffer
void color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


//Calls Menu
void menu() {
	int Set[] = { 7,7,7 };
	int counter = 2;
	char key;

	cout << endl;
	cout << " ___________________________ Menu ___________________________" << endl;

	for (int i = 0;;)
	{
		key = _getch();

		gotoxy(10, 5);
		color(Set[0]);
		cout << " 1.Start Game" << endl;

		gotoxy(10, 6);
		color(Set[1]);
		cout << " 2.Instructions" << endl;

		gotoxy(10, 7);
		color(Set[2]);
		cout << " 3.Exit" << endl;

		//Move cursor through the options
		if (key == 72 && (counter >= 2 && counter <= 3))
		{
			counter--;
		}
		if (key == 80 && (counter >= 1 && counter <= 2))
		{
			counter++;
		}

		if (key == 13)
		{
			switch (counter)
			{
			case 1: 
				levelOne(); 
				break;
				//
			case 3:
				exit(0);
				system("cls");
			}
		}

		//Set define colors
		Set[0] = 7;
		Set[1] = 7;
		Set[2] = 7;

		//Set color while moving through the option
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