#include <iostream>
#include<process.h>
#include<windows.h>
#include<conio.h>
#include<string>
#include "levelTwo.h"
#include "menu.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_SPACE 32
#define KEY_ENTER 13

using namespace std;

//Define the coordinates of a character cell in a console screen buffer
int gotoxy(int x, int y)
{
	
	COORD c;
	c.X = x;
	c.Y = y;
	// Set the cursor position in the specified console screen buffer
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return 0;
}

//Print the mze for level one
void printMazeOne() {
	char** maze = new char* [8];

	for (int i = 0; i < 8; i++)
	{
		maze[i] = new char[8];
	}	
	
	//Using extended ASCII table
	maze[0][0] = static_cast<char>(254);
	maze[0][1] = static_cast<char>(254);
	maze[0][2] = static_cast<char>(254);
	maze[0][3] = static_cast<char>(254);
	maze[0][4] = static_cast<char>(254);
	maze[0][5] = static_cast<char>(254);
	maze[0][6] = static_cast<char>(254);
	maze[0][7] = static_cast<char>(254);
	maze[1][0] = static_cast<char>(254);
	maze[1][1] = '.';
	maze[1][2] = '.';
	maze[1][3] = '.';
	maze[1][4] = '.';
	maze[1][5] = '.';
	maze[1][6] = '.';
	maze[1][7] = static_cast<char>(254);
	maze[2][0] = '.';
	maze[2][1] = '.';
	maze[2][2] = static_cast<char>(254);
	maze[2][3] = static_cast<char>(254);
	maze[2][4] = static_cast<char>(254);
	maze[2][5] = '.';
	maze[2][6] = static_cast<char>(254);
	maze[2][7] = static_cast<char>(254);
	maze[3][0] = static_cast<char>(254);
	maze[3][1] = '.';
	maze[3][2] = '.';
	maze[3][3] = '.';
	maze[3][4] = static_cast<char>(254);
	maze[3][5] = '.';
	maze[3][6] = '.';
	maze[3][7] = static_cast<char>(254);
	maze[4][0] = static_cast<char>(254);
	maze[4][1] = '.';
	maze[4][2] = static_cast<char>(254);
	maze[4][3] = static_cast<char>(254);
	maze[4][4] = static_cast<char>(254);
	maze[4][5] = static_cast<char>(254);
	maze[4][6] = '.';
	maze[4][7] = static_cast<char>(254);
	maze[5][0] = static_cast<char>(254);
	maze[5][1] = '.';
	maze[5][2] = '.';
	maze[5][3] = static_cast<char>(254);
	maze[5][4] = '.';
	maze[5][5] = '.';
	maze[5][6] = '.';
	maze[5][7] = static_cast<char>(254);
	maze[6][0] = static_cast<char>(254);
	maze[6][1] = static_cast<char>(254);
	maze[6][2] = '.';
	maze[6][3] = static_cast<char>(254);
	maze[6][4] = static_cast<char>(254);
	maze[6][5] = '.';
	maze[6][6] = '.';
	maze[6][7] = '.';
	maze[7][0] = static_cast<char>(254);
	maze[7][1] = static_cast<char>(254);
	maze[7][2] = static_cast<char>(254);
	maze[7][3] = static_cast<char>(254);
	maze[7][4] = static_cast<char>(254);
	maze[7][5] = static_cast<char>(254);
	maze[7][6] = static_cast<char>(254);
	maze[7][7] = static_cast<char>(254);
	
	cout << endl;


	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 7; j++) {
			cout << maze[i][j] << " ";
		}
		
		cout << static_cast<char>(179);
		if (i == 3)
		{
			cout << "\tL E V E L - 1";
		}
		cout << endl;
	}

	for (int i = 0; i <= 7; i++) {
		cout << "__";
	}

	cout << endl << endl;
	cout << "Hint: if you want to exit press ENTER or X" << endl;

	for (int i = 0; i < 8; i++)
	{
		delete[] maze[i];
	}
	delete[] maze;
}

//Color the moving object
void colorTheMovingObject() {
	int Set[] = { 14,7 };
	color(Set[0]);
	Set[0] = { 14 };
	cout << static_cast<char>(2);
	color(Set[1]);
	Set[1] = { 7 };
}

//Ask if you want to continue to the next level
void changeLevelOne(string answer)
{
	int Set[] = { 5,7 };
	color(Set[0]);
	Set[0] = { 5 };
	system("CLS");
	cout << "                       _       _                     ___       ___                   __  " << endl;
	cout << "                      \\ \\     / /                   /\\  \\  ___/\\  \\  __              \\  \\                 " << endl;
	cout << "                       \\ \\   / / ___     _      _   \\ \\  \\/\\  \\ \\  \\ \\__\\       ____  \\  \\    " << endl;
	cout << "                        \\_\\_/_/ / __ \\  | |    | |   \\ \\  \\ \\  \\ \\  \\   __    /' __ '\\ \\  \\      " << endl;
	cout << "                          | |  /\\ \\ \\ \\ | |    | |    \\ \\  \\/   \\_\\  \\ \\  \\  /\\  \\/\\  \\ \\__\\          " << endl;
	cout << "                          | |  \\ \\____/  |_|  |_|      \\  \\____  ____/  \\  \\ \\ \\_ \\ \\_ \\  __   " << endl;
	cout << "                          |_|   \\/___/     |__|          \\/ __/ / __/    \\__\\ \\/ _/\\/ _/  \\__\\       " << endl;
	cout << "                                                                                                           " << endl;
	color(Set[1]);
	Set[1] = { 7 };
	cout << "                                               Do you want to continue: ";
	getline(cin, answer);


	if (answer == "Yes" || answer == "yes" || answer == "YES" || answer == "Y" || answer == "y")
	{
		levelTwo();
	}


	else if (answer == "no" || answer == "No" || answer == "NO" || answer == "n" || answer == "") {
		system("CLS");
		gotoxy(40, 2);
		cout << "We hope you enjoyed our game!!!";
		cout << endl;
		cout << endl;
		exit(0);

	}
}

	//Move the smiley face with arrow keys and wasd keys
	void levelOne()
	{
		int x = 0, y = 3;
		system("CLS");
		char ch;
		string answer;
		system("CLS");
		printMazeOne();

		while (true)
		{

			gotoxy(x, y);
			//Call the smiley face and colors it
			colorTheMovingObject();
			//Check what key from the keyboard is pressed
			ch = _getch();

			if (x == 14 && y == 7)
			{
				changeLevelOne(answer);
			}

			switch (ch) {
			case KEY_UP:
			case 'w':
				//Make sure the smiley face doesn't go in the boundaries
				y--;
				if (x == 0 && y == 2)
				{
					y = 3;
				}
				if (x == 12 && y == 3)
				{
					y = 4;
				}
				if ((x == 4 && y == 3) || (x == 6 && y == 3))
				{
					y = 4;
				}
				if (x == 4 && y == 5)
				{
					y = 6;
				}

				if ((x == 10 && y == 5) || (x == 8 && y == 5))
				{
					y = 6;
				}

				if (y == 1)
				{
					y = 2;
				}
				system("CLS");
				printMazeOne();


				break;

			case KEY_DOWN:
			case 's':
				y++;
				if (x == 0 && y == 4)
				{
					y = 3;
				}
				if ((x == 4 && y == 3) || (x == 6 && y == 3) || (x == 8 && y == 3))
				{
					y = 2;
				}

				if (x == 12 && y == 3)
				{
					y = 2;
				}

				if ((x == 4 && y == 5) || (x == 6 && y == 5))
				{
					y = 4;
				}

				if (x == 2 && y == 7)
				{
					y = 6;
				}

				if (x == 10 && y == 5)
				{
					y = 4;
				}

				if (x == 8 && y == 7)
				{
					y = 6;
				}

				if (y == 8)
				{
					y = 7;
				}
				system("CLS");
				printMazeOne();
				break;


			case KEY_RIGHT:
			case 'd':

				x += 2;
				if ((x == 4 && y == 3) || (x == 4 && y == 5))
				{
					x = 2;
				}

				if (x == 12 && y == 3)
				{
					x = 10;
				}

				if (x == 8 && y == 4)
				{
					x = 6;
				}

				if ((x == 6 && y == 6) || (x == 6 && y == 7))
				{
					x = 4;
				}

				if ((x == 14) && (y != 7))
				{
					x = 12;
				}
				system("CLS");
				printMazeOne();
				break;


			case KEY_LEFT:
			case 'a':
				x -= 2;

				if (x == 8 && y == 3)
				{
					x = 10;
				}

				if (x == 8 && y == 4)
				{
					x = 10;
				}

				if (x == 2 && y == 7)
				{
					x = 4;
				}

				if (x == 10 && y == 5)
				{
					x = 12;
				}

				if (x == 6 && y == 6)
				{
					x = 8;
				}

				if (x == 8 && y == 7)
				{
					x = 10;
				}

				if (x == 0)
				{
					x = 2;
				}
				system("CLS");
				printMazeOne();
				break;


			case 'x':
			case KEY_SPACE:
			case KEY_ENTER:

				system("CLS");
				gotoxy(50, 2);
				cout << "Game Over";
				cout << endl;
				cout << endl;
				exit(0);
				break;
			}
		}

}


