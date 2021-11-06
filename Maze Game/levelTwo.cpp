#include <iostream>
#include<process.h>
#include<windows.h>
#include<conio.h>
#include<string>
#include"levelOne.h"
#include"levelThree.h"

using namespace std;


void printMazeTwo() {
	char maze[16][16] = {
		{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
		{'.','.','.','.','.','#','.','#','.','.','#','.','.','.','.','#'},
		{'#','.','#','#','#','#','.','#','#','.','.','.','#','#','.','#'},
		{'#','.','.','.','.','.','.','.','.','.','.','#','.','#','.','#'},
		{'#','.','#','#','#','.','#','#','.','#','#','#','.','#','.','#'},
		{'#','.','.','#','.','.','#','.','.','#','#','.','.','#','.','#'},
		{'#','#','#','#','#','.','#','#','#','#','#','.','#','.','.','#'},
		{'#','.','.','.','.','.','#','.','.','.','#','.','.','.','#','#'},
		{'#','.','#','#','.','#','#','#','.','#','#','#','#','#','#','#'},
		{'#','.','#','#','.','.','.','#','.','#','.','.','.','.','.','#'},
		{'#','.','.','#','.','#','#','#','.','.','.','#','.','#','.','#'},
		{'#','#','.','#','.','.','.','.','#','#','.','#','#','#','.','#'},
		{'#','.','.','#','#','#','#','.','#','.','.','.','#','.','#','#'},
		{'#','#','.','.','#','.','#','.','.','.','#','.','.','.','.','#'},
		{'#','#','#','.','.','.','#','.','#','.','.','#','.','#','.','.'},
		{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
	};


	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			cout << maze[i][j] << " ";
		}
		cout << "|";
		if (i == 7)
		{
			cout << "\tL E V E L - 2";
		}
		cout << endl;
	}
	for (int i = 0; i < 16; i++) {
		cout << "__";
	}
	cout << endl;
}

void changeLevelTwo(string answer)
{

	system("CLS");
	cout << "                       _       _                     ___       ___                   __  " << endl;
	cout << "                      \\ \\     / /                   /\\  \\  ___/\\  \\  __              \\  \\                 " << endl;
	cout << "                       \\ \\   / / ___     _      _   \\ \\  \\/\\  \\ \\  \\ \\__\\       ____  \\  \\    " << endl;
	cout << "                        \\_\\_/_/ / __ \\  | |    | |   \\ \\  \\ \\  \\ \\  \\   __    /' __ '\\ \\  \\      " << endl;
	cout << "                          | |  /\\ \\ \\ \\ | |    | |    \\ \\  \\/   \\_\\  \\ \\  \\  /\\  \\/\\  \\ \\__\\          " << endl;
	cout << "                          | |  \\ \\____/  |_|  |_|      \\  \\____  ____/  \\  \\ \\ \\_ \\ \\_ \\  __   " << endl;
	cout << "                          |_|   \\/___/     |__|          \\/ __/ / __/    \\__\\ \\/ _/\\/ _/  \\__\\       " << endl;
	cout << "                                                                                                           " << endl;
	cout << "                                             Do you want to start a new game: ";
	getline(cin, answer);

	if (answer == "Yes" || answer == "yes" || answer == "Y" || answer == "y")
	{
		levelThree();
	}

	else {
		system("CLS");
		gotoxy(40, 2);
		cout << "We hope you enjoyed our game!!!";
		cout << endl;
		cout << endl;
		exit(0);
	}

}

void levelTwo()
{
	int x = 0, y = 1;
	system("CLS");
	char ch;
	string answer;
label:
	system("CLS");
	printMazeTwo();


	gotoxy(x, y);
	cout << static_cast<char>(2);
	ch = _getch();


	if (x == 30 && y == 14)
	{
		changeLevelTwo(answer);
	}

	switch (ch) {

	case KEY_UP:
	case 'w':
		y--;
		if (y == 0)
		{
			y = 1;
		}

		if (x == 20 && y == 1)
		{
			y = 2;
		}

		if ((x == 4 && y == 2) || (x == 6 && y == 2) || (x == 8 && y == 2) || (x == 10 && y == 2) || (x == 14 && y == 2) || (x == 16 && y == 2))
		{
			y = 3;
		}

		if ((x == 4 && y == 4) || (x == 8 && y == 4) || (x == 14 && y == 4) || (x == 22 && y == 4))
		{
			y = 5;
		}

		if (x == 26 && y == 5)
		{
			y = 6;
		}

		if ((x == 2 && y == 6) || (x == 4 && y == 6) || (x == 6 && y == 6) || (x == 8 && y == 6) || (x == 14 && y == 6) || (x == 16 && y == 6) || (x == 18 && y == 6) || (x == 24 && y == 6))
		{
			y = 7;
		}

		if ((x == 10 && y == 8) || (x == 12 && y == 8) || (x == 20 && y == 8) || (x == 22 && y == 8) || (x == 24 && y == 8) || (x == 26 && y == 8) || (x == 28 && y == 8))
		{
			y = 9;
		}

		if ((x == 4 && y == 9) || (x == 18 && y == 9))
		{
			y = 10;
		}

		if ((x == 10 && y == 10) || (x == 12 && y == 10) || (x == 14 && y == 10))
		{
			y = 11;
		}

		if ((x == 2 && y == 11) || (x == 18 && y == 11) || (x == 22 && y == 11) || (x == 26 && y == 11))
		{
			y = 12;
		}

		if ((x == 6 && y == 12) || (x == 10 && y == 12) || (x == 16 && y == 12) || (x == 24 && y == 12) || (x == 28 && y == 12))
		{
			y = 13;
		}

		if ((x == 8 && y == 13) || (x == 20 && y == 13))
		{
			y = 14;
		}

		break;


	case KEY_DOWN:
	case 's':

		y++;

		if (y == 15)
		{
			y = 14;
		}

		if (x == 0 && y == 2)
		{
			y = 1;
		}

		if ((x == 4 && y == 2) || (x == 6 && y == 2) || (x == 8 && y == 2) || (x == 16 && y == 2) || (x == 24 && y == 2) || (x == 26 && y == 2))
		{
			y = 1;
		}

		if (x == 22 && y == 3)
		{
			y = 2;
		}

		if ((x == 4 && y == 4) || (x == 6 && y == 4) || (x == 8 && y == 4) || (x == 12 && y == 4) || (x == 14 && y == 4) || (x == 18 && y == 4) || (x == 20 && y == 4))
		{
			y = 3;
		}

		if ((x == 2 && y == 6) || (x == 4 && y == 6) || (x == 8 && y == 6) || (x == 14 && y == 6) || (x == 16 && y == 6) || (x == 24 && y == 6))
		{
			y = 5;
		}

		if (x == 28 && y == 7)
		{
			y = 6;
		}

		if ((x == 4 && y == 8) || (x == 6 && y == 8) || (x == 10 && y == 8) || (x == 14 && y == 8) || (x == 18 && y == 8) || (x == 22 && y == 8) || (x == 24 && y == 8) || (x == 26 && y == 8))
		{
			y = 7;
		}

		if ((x == 10 && y == 10) || (x == 12 && y == 10) || (x == 22 && y == 10) || (x == 26 && y == 10))
		{
			y = 9;
		}

		if ((x == 2 && y == 11) || (x == 16 && y == 11) || (x == 18 && y == 11) || (x == 24 && y == 11))
		{
			y = 10;
		}

		if ((x == 8 && y == 12) || (x == 10 && y == 12) || (x == 12 && y == 12) || (x == 28 && y == 12))
		{
			y = 11;
		}

		if ((x == 2 && y == 13) || (x == 20 && y == 13))
		{
			y = 12;
		}

		if ((x == 2 && y == 14) || (x == 4 && y == 14) || (x == 16 && y == 14) || (x == 22 && y == 14) || (x == 26 && y == 14))
		{
			y = 13;
		}

		break;


	case KEY_RIGHT:
	case 'd':

		x += 2;
		if (x == 30 && y != 14)
		{
			x -= 2;
		}

		if ((x == 10 && y == 1) || (x == 14 && y == 1) || (x == 20 && y == 1))
		{
			x -= 2;
		}

		if ((x == 4 && y == 2) || (x == 14 && y == 2) || (x == 24 && y == 2))
		{
			x -= 2;
		}

		if ((x == 22 && y == 3) || (x == 26 && y == 3))
		{
			x -= 2;
		}

		if ((x == 4 && y == 4) || (x == 12 && y == 4) || (x == 18 && y == 4) || (x == 26 && y == 4))
		{
			x -= 2;
		}

		if ((x == 6 && y == 5) || (x == 12 && y == 5) || (x == 18 && y == 5) || (x == 26 && y == 5))
		{
			x -= 2;
		}

		if ((x == 12 && y == 6) || (x == 24 && y == 6))
		{
			x -= 2;
		}

		if ((x == 12 && y == 7) || (x == 20 && y == 7) || (x == 28 && y == 7))
		{
			x -= 2;
		}

		if ((x == 4 && y == 8) || (x == 10 && y == 8) || (x == 18 && y == 8))
		{
			x -= 2;
		}

		if ((x == 4 && y == 9) || (x == 14 && y == 9) || (x == 18 && y == 9))
		{
			x -= 2;
		}

		if ((x == 6 && y == 10) || (x == 10 && y == 10) || (x == 22 && y == 10) || (x == 26 && y == 10))
		{
			x -= 2;
		}

		if ((x == 6 && y == 11) || (x == 16 && y == 11) || (x == 22 && y == 11))
		{
			x -= 2;
		}

		if ((x == 6 && y == 12) || (x == 16 && y == 12) || (x == 24 && y == 12) || (x == 28 && y == 12))
		{
			x -= 2;
		}

		if ((x == 8 && y == 13) || (x == 12 && y == 13) || (x == 20 && y == 13))
		{
			x -= 2;
		}

		if ((x == 12 && y == 14) || (x == 16 && y == 14) || (x == 22 && y == 14) || (x == 26 && y == 14))
		{
			x -= 2;
		}

		break;


	case KEY_LEFT:
	case 'a':

		x -= 2;

		if (x == 0)
		{
			x = 2;
		}

		if (x == 0 && y == 1)
		{
			x = 0;
		}

		if ((x == 10 && y == 1) || (x == 14 && y == 1) || (x == 20 && y == 1))
		{
			x += 2;
		}

		if ((x == 10 && y == 2) || (x == 16 && y == 2) || (x == 26 && y == 2))
		{
			x += 2;
		}

		if ((x == 22 && y == 3) || (x == 26 && y == 3))
		{
			x += 2;
		}

		if ((x == 8 && y == 4) || (x == 14 && y == 4) || (x == 22 && y == 4) || (x == 26 && y == 4))
		{
			x += 2;
		}

		if ((x == 6 && y == 5) || (x == 12 && y == 5) || (x == 20 && y == 5) || (x == 26 && y == 5))
		{
			x += 2;
		}

		if ((x == 8 && y == 6) || (x == 20 && y == 6) || (x == 24 && y == 6))
		{
			x += 2;
		}

		if ((x == 12 && y == 7) || (x == 20 && y == 7))
		{
			x += 2;
		}

		if ((x == 6 && y == 8) || (x == 14 && y == 8))
		{
			x += 2;
		}

		if ((x == 6 && y == 9) || (x == 14 && y == 9) || (x == 18 && y == 9))
		{
			x += 2;
		}

		if ((x == 6 && y == 10) || (x == 14 && y == 10) || (x == 22 && y == 10) || (x == 26 && y == 10))
		{
			x += 2;
		}

		if ((x == 6 && y == 11) || (x == 18 && y == 11) || (x == 26 && y == 11))
		{
			x += 2;
		}

		if ((x == 12 && y == 12) || (x == 16 && y == 12) || (x == 26 && y == 12))
		{
			x += 2;
		}

		if ((x == 2 && y == 13) || (x == 8 && y == 13) || (x == 12 && y == 13) || (x == 20 && y == 13))
		{
			x += 2;
		}

		if ((x == 2 && y == 14) || (x == 4 && y == 14) || (x == 12 && y == 14) || (x == 16 && y == 14) || (x == 22 && y == 14) || (x == 26 && y == 14))
		{
			x += 2;
		}

		break;


	case 'x':
	case KEY_SPACE:
	case KEY_ENTER:

		system("CLS");
		gotoxy(50, 2);
		cout << "Game Over"<< endl<< endl;
		exit(0);
		break;
	}
	goto label;
}


