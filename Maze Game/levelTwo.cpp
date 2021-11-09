#include <iostream>
#include<process.h>
#include<windows.h>
#include<conio.h>
#include<string>
#include"levelOne.h"
#include"levelThree.h"
#include"menu.h"

using namespace std;

//Print the maze for level two
void printMazeTwo() {
	char** maze = new char* [16];

	for (int i = 0; i < 16; i++)
	{
		maze[i] = new char[16];
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
	maze[0][8] = static_cast<char>(254);
	maze[0][9] = static_cast<char>(254);
	maze[0][10] = static_cast<char>(254);
	maze[0][11] = static_cast<char>(254);
	maze[0][12] = static_cast<char>(254);
	maze[0][13] = static_cast<char>(254);
	maze[0][14] = static_cast<char>(254);
	maze[0][15] = static_cast<char>(254);
	maze[1][0] = '.';
	maze[1][1] = '.';
	maze[1][2] = '.';
	maze[1][3] = '.';
	maze[1][4] = '.';
	maze[1][5] = static_cast<char>(254);
	maze[1][6] = '.';
	maze[1][7] = static_cast<char>(254);
	maze[1][8] = '.';
	maze[1][9] = '.';
	maze[1][10] = static_cast<char>(254);
	maze[1][11] = '.';
	maze[1][12] = '.';
	maze[1][13] = '.';
	maze[1][14] = '.';
	maze[1][15] = static_cast<char>(254);
	maze[2][0] = static_cast<char>(254);
	maze[2][1] = '.';
	maze[2][2] = static_cast<char>(254);
	maze[2][3] = static_cast<char>(254);
	maze[2][4] = static_cast<char>(254);
	maze[2][5] = static_cast<char>(254);
	maze[2][6] = '.';
	maze[2][7] = static_cast<char>(254);
	maze[2][8] = static_cast<char>(254);
	maze[2][9] = '.';
	maze[2][10] = '.';
	maze[2][11] = '.';
	maze[2][12] = static_cast<char>(254);
	maze[2][13] = static_cast<char>(254);
	maze[2][14] = '.';
	maze[2][15] = static_cast<char>(254);
	maze[3][0] = static_cast<char>(254);
	maze[3][1] = '.';
	maze[3][2] = '.';
	maze[3][3] = '.';
	maze[3][4] = '.';
	maze[3][5] = '.';
	maze[3][6] = '.';
	maze[3][7] = '.';
	maze[3][8] = '.';
	maze[3][9] = '.';
	maze[3][10] = '.';
	maze[3][11] = static_cast<char>(254);
	maze[3][12] = '.';
	maze[3][13] = static_cast<char>(254);
	maze[3][14] = '.';
	maze[3][15] = static_cast<char>(254);
	maze[4][0] = static_cast<char>(254);
	maze[4][1] = '.';
	maze[4][2] = static_cast<char>(254);
	maze[4][3] = static_cast<char>(254);
	maze[4][4] = static_cast<char>(254);
	maze[4][5] = '.';
	maze[4][6] = static_cast<char>(254);
	maze[4][7] = static_cast<char>(254);
	maze[4][8] = '.';
	maze[4][9] = static_cast<char>(254);
	maze[4][10] = static_cast<char>(254);
	maze[4][11] = static_cast<char>(254);
	maze[4][12] = '.';
	maze[4][13] = static_cast<char>(254);
	maze[4][14] = '.';
	maze[4][15] = static_cast<char>(254);
	maze[5][0] = static_cast<char>(254);
	maze[5][1] = '.';
	maze[5][2] = '.';
	maze[5][3] = static_cast<char>(254);
	maze[5][4] = '.';
	maze[5][5] = '.';
	maze[5][6] = static_cast<char>(254);
	maze[5][7] = '.';
	maze[5][8] = '.';
	maze[5][9] = static_cast<char>(254);
	maze[5][10] = static_cast<char>(254);
	maze[5][11] = '.';
	maze[5][12] = '.';
	maze[5][13] = static_cast<char>(254);
	maze[5][14] = '.';
	maze[5][15] = static_cast<char>(254);
	maze[6][0] = static_cast<char>(254);
	maze[6][1] = static_cast<char>(254);
	maze[6][2] = static_cast<char>(254);
	maze[6][3] = static_cast<char>(254);
	maze[6][4] = static_cast<char>(254);
	maze[6][5] = '.';
	maze[6][6] = static_cast<char>(254);
	maze[6][7] = static_cast<char>(254);
	maze[6][8] = static_cast<char>(254);
	maze[6][9] = static_cast<char>(254);
	maze[6][10] = static_cast<char>(254);
	maze[6][11] = '.';
	maze[6][12] = static_cast<char>(254);
	maze[6][13] = '.';
	maze[6][14] = '.';
	maze[6][15] = static_cast<char>(254);
	maze[7][0] = static_cast<char>(254);
	maze[7][1] = '.';
	maze[7][2] = '.';
	maze[7][3] = '.';
	maze[7][4] = '.';
	maze[7][5] = '.';
	maze[7][6] = static_cast<char>(254);
	maze[7][7] = '.';
	maze[7][8] = '.';
	maze[7][9] = '.';
	maze[7][10] = static_cast<char>(254);
	maze[7][11] = '.';
	maze[7][12] = '.';
	maze[7][13] = '.';
	maze[7][14] = static_cast<char>(254);
	maze[7][15] = static_cast<char>(254);
	maze[8][0] = static_cast<char>(254);
	maze[8][1] = '.';
	maze[8][2] = static_cast<char>(254);
	maze[8][3] = static_cast<char>(254);
	maze[8][4] = '.';
	maze[8][5] = static_cast<char>(254);
	maze[8][6] = static_cast<char>(254);
	maze[8][7] = static_cast<char>(254);
	maze[8][8] = '.';
	maze[8][9] = static_cast<char>(254);
	maze[8][10] = static_cast<char>(254);
	maze[8][11] = static_cast<char>(254);
	maze[8][12] = static_cast<char>(254);
	maze[8][13] = static_cast<char>(254);
	maze[8][14] = static_cast<char>(254);
	maze[8][15] = static_cast<char>(254);
	maze[9][0] = static_cast<char>(254);
	maze[9][1] = '.';
	maze[9][2] = static_cast<char>(254);
	maze[9][3] = static_cast<char>(254);
	maze[9][4] = '.';
	maze[9][5] = '.';
	maze[9][6] = '.';
	maze[9][7] = static_cast<char>(254);
	maze[9][8] = '.';
	maze[9][9] = static_cast<char>(254);
	maze[9][10] = '.';
	maze[9][11] = '.';
	maze[9][12] = '.';
	maze[9][13] = '.';
	maze[9][14] = '.';
	maze[9][15] = static_cast<char>(254);
	maze[10][0] = static_cast<char>(254);
	maze[10][1] = '.';
	maze[10][2] = '.';
	maze[10][3] = static_cast<char>(254);
	maze[10][4] = '.';
	maze[10][5] = static_cast<char>(254);
	maze[10][6] = static_cast<char>(254);
	maze[10][7] = static_cast<char>(254);
	maze[10][8] = '.';
	maze[10][9] = '.';
	maze[10][10] = '.';
	maze[10][11] = static_cast<char>(254);
	maze[10][12] = '.';
	maze[10][13] = static_cast<char>(254);
	maze[10][14] = '.';
	maze[10][15] = static_cast<char>(254);
	maze[11][0] = static_cast<char>(254);
	maze[11][1] = static_cast<char>(254);
	maze[11][2] = '.';
	maze[11][3] = static_cast<char>(254);
	maze[11][4] = '.';
	maze[11][5] = '.';
	maze[11][6] = '.';
	maze[11][7] = '.';
	maze[11][8] = static_cast<char>(254);
	maze[11][9] = static_cast<char>(254);
	maze[11][10] = '.';
	maze[11][11] = static_cast<char>(254);
	maze[11][12] = static_cast<char>(254);
	maze[11][13] = static_cast<char>(254);
	maze[11][14] = '.';
	maze[11][15] = static_cast<char>(254);
	maze[12][0] = static_cast<char>(254);
	maze[12][1] = '.';
	maze[12][2] = '.';
	maze[12][3] = static_cast<char>(254);
	maze[12][4] = static_cast<char>(254);
	maze[12][5] = static_cast<char>(254);
	maze[12][6] = static_cast<char>(254);
	maze[12][7] = '.';
	maze[12][8] = static_cast<char>(254);
	maze[12][9] = '.';
	maze[12][10] = '.';
	maze[12][11] = '.';
	maze[12][12] = static_cast<char>(254);
	maze[12][13] = '.';
	maze[12][14] = static_cast<char>(254);
	maze[12][15] = static_cast<char>(254);
	maze[13][0] = static_cast<char>(254);
	maze[13][1] = static_cast<char>(254);
	maze[13][2] = '.';
	maze[13][3] = '.';
	maze[13][4] = static_cast<char>(254);
	maze[13][5] = '.';
	maze[13][6] = static_cast<char>(254);
	maze[13][7] = '.';
	maze[13][8] = '.';
	maze[13][9] = '.';
	maze[13][10] = static_cast<char>(254);
	maze[13][11] = '.';
	maze[13][12] = static_cast<char>(254);
	maze[13][12] = '.';
	maze[13][13] = '.';
	maze[13][14] = '.';
	maze[13][15] = static_cast<char>(254);
	maze[14][0] = static_cast<char>(254);
	maze[14][1] = static_cast<char>(254);
	maze[14][2] = static_cast<char>(254);
	maze[14][3] = '.';
	maze[14][4] = '.';
	maze[14][5] = '.';
	maze[14][6] = static_cast<char>(254);
	maze[14][7] = '.';
	maze[14][8] = static_cast<char>(254);
	maze[14][9] = '.';
	maze[14][10] = '.';
	maze[14][11] = static_cast<char>(254);
	maze[14][12] = '.';
	maze[14][13] = static_cast<char>(254);
	maze[14][14] = '.';
	maze[14][15] = '.';
	maze[15][0] = static_cast<char>(254);
	maze[15][1] = static_cast<char>(254);
	maze[15][2] = static_cast<char>(254);
	maze[15][3] = static_cast<char>(254);
	maze[15][4] = static_cast<char>(254);
	maze[15][5] = static_cast<char>(254);
	maze[15][6] = static_cast<char>(254);
	maze[15][7] = static_cast<char>(254);
	maze[15][8] = static_cast<char>(254);
	maze[15][9] = static_cast<char>(254);
	maze[15][10] = static_cast<char>(254);
	maze[15][11] = static_cast<char>(254);
	maze[15][12] = static_cast<char>(254);
	maze[15][13] = static_cast<char>(254);
	maze[15][14] = static_cast<char>(254);
	maze[15][15] = static_cast<char>(254);

	for (int i = 0; i < 16; i++) {
		//Color the maze
		int Set[] = { 5,7,14,7 };
		color(Set[0]);
		Set[0] = { 5 };

		for (int j = 0; j < 16; j++) {
			cout << maze[i][j] << " ";
		}

		color(Set[1]);
		Set[1] = { 7 };

		cout << static_cast<char>(179);

		color(Set[2]);
		Set[2] = { 14 };

		if (i == 7)
		{
			cout << "\tL E V E L - 2";
		}

		color(Set[3]);
		Set[3] = { 7 };

		cout << endl;
	}
	for (int i = 0; i < 16; i++) {
		cout << "__";
	}
	cout << endl << endl;

	int Set[] = { 14,7 };
	cout << "Hint: if you want to exit press";
	//Color the words yellow
	color(Set[0]);
	Set[0] = { 14 };
	cout << " ENTER ";
	//Colors the words grey
	color(Set[1]);
	Set[1] = { 7 };
	cout << "or";
	//Color the words yellow
	color(Set[0]);
	Set[0] = { 14 };
	cout << " X " << endl;

	for (int i = 0; i < 16; i++)
	{
		delete[] maze[i];
	}
	delete[] maze;
}

//Ask if you want to continue to the next level
void changeLevelTwo(string answer)
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
	cout << "                                           Do you want to continue: ";
	getline(cin, answer);

	if (answer == "Yes" || answer == "yes" || answer == "YES" || answer == "Y" || answer == "y")
	{
		levelThree();
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
void levelTwo()
{
	int x = 0, y = 1;
	system("CLS");
	char ch;
	string answer;
	system("CLS");
	printMazeTwo();

	
	while (true)
	{
		if (x == 30 && y == 14)
		{
		changeLevelTwo(answer);
		}

	gotoxy(x, y);
	//Call the smiley face and colors it
	colorTheMovingObject();
	//Check what key from the keyboard is pressed
	ch = _getch();

	switch (ch) {

	case KEY_UP:
	case 'w':
		y--;
		//Make sure the smiley face doesn't go in the boundaries
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

		system("CLS");
		printMazeTwo();
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
		system("CLS");
		printMazeTwo();
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
		system("CLS");
		printMazeTwo();
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
		system("CLS");
		printMazeTwo();
		break;


	case 'x':
	case KEY_SPACE:
	case KEY_ENTER:

		system("CLS");
		gotoxy(50, 2);
		cout << "Game Over" << endl << endl;
		exit(0);
		break;
	}

}
}


