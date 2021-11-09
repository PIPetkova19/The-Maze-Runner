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
	int Set[] = { 5, 7 };
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
	int Set[] = { 5,7,14 };
	color(Set[0]);
	Set[0] = { 5 };
	system("cls");
	cout << endl;
	cout << "                                                      INSTRUCTIONS"<<endl << endl;
	cout << "                                " ;
	for (int i = 0; i < 60; i++)
	{
		cout << static_cast<char>(240);
	}
	color(Set[1]);
	Set[1] = { 7 };
	cout << endl<<endl;
	cout << "                                You will be playing with ";
	colorTheMovingObject();
	cout << " and you will have to complete" << endl;
	cout << "                                the maze to move to the next level" << endl << endl;
	cout << "                                Each level gets more harder and complex so pay attention" << endl << endl;
	cout << "                                Don't bump into walls in order to complete the level" << endl << endl;
	cout << "                                You can use your";

	//Color the words yellow
	color(Set[2]);
	Set[2] = { 14 };
	cout<<" arrow keys ";

	//Color the words grey
	color(Set[1]);
	Set[1] = { 7 };
	cout << "or";

	//Color the words yellow
	color(Set[2]);
	Set[2] = { 14 };
	cout << " 'wasd' ";

	//Color the words grey
	color(Set[1]);
	Set[1] = { 7 };
	cout<<"to move your " << endl;
	cout<<  "                                player" << endl << endl;
	cout << "                                Press";

	//Color the words yellow
	color(Set[2]);
	Set[2] = { 14 };
	cout << " ENTER ";

	//Color the words grey
	color(Set[1]);
	Set[1] = { 7 };
	cout << "or";

	//Color the words yellow
	color(Set[2]);
	Set[2] = { 14 };
	cout << " 'X' ";

	//Color the words grey
	color(Set[1]);
	Set[1] = { 7 };
	cout<<"if you want to exit the game" << endl << endl << endl;

	system("pause");
	system("cls");
	
	menu();
}

//Call Menu
void menu() {
	int Set[] = { 8,7,7,5,7 };
	int counter = 1;
	char key;

	color(Set[3]);
	Set[3] = { 5 };
	cout << endl;
	cout << "                                    __      __                     " << endl;
	cout << "                                   ||\\\\    //||    ___      ____     _      _        " << endl;
	cout << "                                   || \\\\  // ||  /  __ \\  /' __ '\\  | |    | |                           " << endl;
	cout << "                                   ||  \\\\//  || /\\   __/ /\\  \\/\\  \\ | |    | |                           " << endl;
	cout << "                                   ||   \\/   || \\ \\____  \\ \\_ \\ \\_ \\ |_|  |_|                             " << endl;
	cout << "                                   ||        ||  \\/ ____/ \\/ _/\\/ _/   |__|                   " << endl << endl;
	cout << "                            ";

	for (int i = 0; i < 60; i++)
	{
		cout << static_cast<char>(240);
	}
	color(Set[4]);
	Set[4] = { 7 };

	for (;;)
	{

		gotoxy(6, 10);
		color(Set[0]);
		cout << "                               <Start Game>" << endl;

		gotoxy(6, 12);
		color(Set[1]);
		cout << "                               <Instructions>" << endl;

		gotoxy(6, 14);
		color(Set[2]);
		cout << "                               <Exit>" << endl;

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
				color(Set[4]);
				Set[4] = { 7 };
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

		//Set color as grey while moving through the option
		if (counter == 1)
		{
			Set[0] = 8;
		}
		if (counter == 2)
		{
			Set[1] = 8;
		}
		if (counter == 3)
		{
			Set[2] = 8;
		}
	}
}