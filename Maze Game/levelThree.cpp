#include <iostream>
#include<process.h>
#include<windows.h>
#include<conio.h> //For getch()
#include<string>
#include"levelOne.h"
#include"menu.h"

using namespace std;

//Print the maze for level three
void printMazeThree() {
	char** maze = new char* [20];

	for (int i = 0; i < 20; i++)
	{
		maze[i] = new char[20];
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
	maze[0][16] = static_cast<char>(254);
	maze[0][17] = static_cast<char>(254);
	maze[0][18] = static_cast<char>(254);
	maze[0][19] = static_cast<char>(254);
	maze[1][0] = '.';
	maze[1][1] = '.';
	maze[1][2] = '.';
	maze[1][3] = '.';
	maze[1][4] = '.';
	maze[1][5] = '.';
	maze[1][6] = '.';
	maze[1][7] = '.';
	maze[1][8] = '.';
	maze[1][9] = '.';
	maze[1][10] = static_cast<char>(254);
	maze[1][11] = '.';
	maze[1][12] = '.';
	maze[1][13] = '.';
	maze[1][14] = '.';
	maze[1][15] = '.';
	maze[1][16] = static_cast<char>(254);
	maze[1][17] = '.';
	maze[1][18] = '.';
	maze[1][19] = static_cast<char>(254);
	maze[2][0] = static_cast<char>(254);
	maze[2][1] = static_cast<char>(254);
	maze[2][2] = static_cast<char>(254);
	maze[2][3] = static_cast<char>(254);
	maze[2][4] = static_cast<char>(254);
	maze[2][5] = '.';
	maze[2][6] = static_cast<char>(254);
	maze[2][7] = '.';
	maze[2][8] = '.';
	maze[2][9] = static_cast<char>(254);
	maze[2][10] = '.';
	maze[2][11] = static_cast<char>(254);
	maze[2][12] = '.';
	maze[2][13] = static_cast<char>(254);
	maze[2][14] = static_cast<char>(254);
	maze[2][15] = '.';
	maze[2][16] = static_cast<char>(254);
	maze[2][17] = static_cast<char>(254);
	maze[2][18] = '.';
	maze[2][19] = static_cast<char>(254);
	maze[3][0] = static_cast<char>(254);
	maze[3][1] = '.';
	maze[3][2] = static_cast<char>(254);
	maze[3][3] = '.';
	maze[3][4] = static_cast<char>(254);
	maze[3][5] = '.';
	maze[3][6] = static_cast<char>(254);
	maze[3][7] = '.';
	maze[3][8] = '.';
	maze[3][9] = static_cast<char>(254);
	maze[3][10] = '.';
	maze[3][11] = static_cast<char>(254);
	maze[3][12] = '.';
	maze[3][13] = static_cast<char>(254);
	maze[3][14] = static_cast<char>(254);
	maze[3][15] = '.';
	maze[3][16] = static_cast<char>(254);
	maze[3][17] = static_cast<char>(254);
	maze[3][18] = '.';
	maze[3][19] = static_cast<char>(254);
	maze[4][0] = static_cast<char>(254);
	maze[4][1] = '.';
	maze[4][2] = static_cast<char>(254);
	maze[4][3] = '.';
	maze[4][4] = '.';
	maze[4][5] = '.';
	maze[4][6] = static_cast<char>(254);
	maze[4][7] = static_cast<char>(254);
	maze[4][8] = '.';
	maze[4][9] = static_cast<char>(254);
	maze[4][10] = '.';
	maze[4][11] = '.';
	maze[4][12] = '.';
	maze[4][13] = static_cast<char>(254);
	maze[4][14] = '.';
	maze[4][15] = '.';
	maze[4][16] = static_cast<char>(254);
	maze[4][17] = '.';
	maze[4][18] = '.';
	maze[4][19] = static_cast<char>(254);
	maze[5][0] = static_cast<char>(254);
	maze[5][1] = '.';
	maze[5][2] = '.';
	maze[5][3] = '.';
	maze[5][4] = '.';
	maze[5][5] = '.';
	maze[5][6] = '.';
	maze[5][7] = '.';
	maze[5][8] = '.';
	maze[5][9] = '.';
	maze[5][10] = '.';
	maze[5][11] = static_cast<char>(254);
	maze[5][12] = static_cast<char>(254);
	maze[5][13] = static_cast<char>(254);
	maze[5][14] = '.';
	maze[5][15] = static_cast<char>(254);
	maze[5][16] = static_cast<char>(254);
	maze[5][17] = '.';
	maze[5][18] = static_cast<char>(254);
	maze[5][19] = static_cast<char>(254);
	maze[6][0] = static_cast<char>(254);
	maze[6][1] = '.';
	maze[6][2] = static_cast<char>(254);
	maze[6][3] = static_cast<char>(254);
	maze[6][4] = static_cast<char>(254);
	maze[6][5] = '.';
	maze[6][6] = static_cast<char>(254);
	maze[6][7] = static_cast<char>(254);
	maze[6][8] = '.';
	maze[6][9] = static_cast<char>(254);
	maze[6][10] = '.';
	maze[6][11] = static_cast<char>(254);
	maze[6][12] = '.';
	maze[6][13] = '.';
	maze[6][14] = '.';
	maze[6][15] = '.';
	maze[6][16] = '.';
	maze[6][17] = '.';
	maze[6][18] = static_cast<char>(254);
	maze[6][19] = static_cast<char>(254);
	maze[7][0] = static_cast<char>(254);
	maze[7][1] = '.';
	maze[7][2] = '.';
	maze[7][3] = '.';
	maze[7][4] = static_cast<char>(254);
	maze[7][5] = static_cast<char>(254);
	maze[7][6] = '.';
	maze[7][7] = static_cast<char>(254);
	maze[7][8] = static_cast<char>(254);
	maze[7][9] = '.';
	maze[7][10] = static_cast<char>(254);
	maze[7][11] = static_cast<char>(254);
	maze[7][12] = '.';
	maze[7][13] = static_cast<char>(254);
	maze[7][14] = static_cast<char>(254);
	maze[7][15] = '.';
	maze[7][16] = '.';
	maze[7][17] = static_cast<char>(254);
	maze[7][18] = '.';
	maze[7][19] = static_cast<char>(254);
	maze[8][0] = static_cast<char>(254);
	maze[8][1] = static_cast<char>(254);
	maze[8][2] = static_cast<char>(254);
	maze[8][3] = '.';
	maze[8][4] = static_cast<char>(254);
	maze[8][5] = '.';
	maze[8][6] = '.';
	maze[8][7] = static_cast<char>(254);
	maze[8][8] = '.';
	maze[8][9] = '.';
	maze[8][10] = '.';
	maze[8][11] = '.';
	maze[8][12] = '.';
	maze[8][13] = static_cast<char>(254);
	maze[8][14] = '.';
	maze[8][15] = static_cast<char>(254);
	maze[8][16] = '.';
	maze[8][17] = '.';
	maze[8][18] = '.';
	maze[8][19] = static_cast<char>(254);
	maze[9][0] = static_cast<char>(254);
	maze[9][1] = '.';
	maze[9][2] = '.';
	maze[9][3] = '.';
	maze[9][4] = '.';
	maze[9][5] = '.';
	maze[9][6] = '.';
	maze[9][7] = '.';
	maze[9][8] = static_cast<char>(254);
	maze[9][9] = '.';
	maze[9][10] = '.';
	maze[9][11] = static_cast<char>(254);
	maze[9][12] = static_cast<char>(254);
	maze[9][13] = '.';
	maze[9][14] = static_cast<char>(254);
	maze[9][15] = '.';
	maze[9][16] = '.';
	maze[9][17] = static_cast<char>(254);
	maze[9][18] = static_cast<char>(254);
	maze[9][19] = static_cast<char>(254);
	maze[10][0] = static_cast<char>(254);
	maze[10][1] = '.';
	maze[10][2] = '.';
	maze[10][3] = static_cast<char>(254);
	maze[10][4] = static_cast<char>(254);
	maze[10][5] = '.';
	maze[10][6] = static_cast<char>(254);
	maze[10][7] = '.';
	maze[10][8] = '.';
	maze[10][9] = static_cast<char>(254);
	maze[10][10] = '.';
	maze[10][11] = static_cast<char>(254);
	maze[10][12] = static_cast<char>(254);
	maze[10][13] = '.';
	maze[10][14] = '.';
	maze[10][15] = static_cast<char>(254);
	maze[10][16] = '.';
	maze[10][17] = '.';
	maze[10][18] = '.';
	maze[10][19] = static_cast<char>(254);
	maze[11][0] = static_cast<char>(254);
	maze[11][1] = '.';
	maze[11][2] = '.';
	maze[11][3] = static_cast<char>(254);
	maze[11][4] = '.';
	maze[11][5] = static_cast<char>(254);
	maze[11][6] = '.';
	maze[11][7] = '.';
	maze[11][8] = static_cast<char>(254);
	maze[11][9] = '.';
	maze[11][10] = '.';
	maze[11][11] = static_cast<char>(254);
	maze[11][12] = '.';
	maze[11][13] = static_cast<char>(254);
	maze[11][14] = '.';
	maze[11][15] = '.';
	maze[11][16] = static_cast<char>(254);
	maze[11][17] = '.';
	maze[11][18] = static_cast<char>(254);
	maze[11][19] = static_cast<char>(254);
	maze[12][0] = static_cast<char>(254);
	maze[12][1] = '.';
	maze[12][2] = static_cast<char>(254);
	maze[12][3] = '.';
	maze[12][4] = static_cast<char>(254);
	maze[12][5] = '.';
	maze[12][6] = static_cast<char>(254);
	maze[12][7] = '.';
	maze[12][8] = static_cast<char>(254);
	maze[12][9] = '.';
	maze[12][10] = static_cast<char>(254);
	maze[12][11] = '.';
	maze[12][12] = '.';
	maze[12][13] = static_cast<char>(254);
	maze[12][14] = '.';
	maze[12][15] = '.';
	maze[12][16] = '.';
	maze[12][17] = '.';
	maze[12][18] = '.';
	maze[12][19] = static_cast<char>(254);
	maze[13][0] = static_cast<char>(254);
	maze[13][1] = '.';
	maze[13][2] = static_cast<char>(254);
	maze[13][3] = '.';
	maze[13][4] = static_cast<char>(254);
	maze[13][5] = '.';
	maze[13][6] = '.';
	maze[13][7] = static_cast<char>(254);
	maze[13][8] = '.';
	maze[13][9] = '.';
	maze[13][10] = '.';
	maze[13][11] = '.';
	maze[13][12] = static_cast<char>(254);
	maze[13][13] = '.';
	maze[13][14] = '.';
	maze[13][15] = static_cast<char>(254);
	maze[13][16] = static_cast<char>(254);
	maze[13][17] = static_cast<char>(254);
	maze[13][18] = '.';
	maze[13][19] = static_cast<char>(254);
	maze[14][0] = static_cast<char>(254);
	maze[14][1] = '.';
	maze[14][2] = static_cast<char>(254);
	maze[14][3] = '.';
	maze[14][4] = static_cast<char>(254);
	maze[14][5] = static_cast<char>(254);
	maze[14][6] = '.';
	maze[14][7] = static_cast<char>(254);
	maze[14][8] = '.';
	maze[14][9] = static_cast<char>(254);
	maze[14][10] = '.';
	maze[14][11] = static_cast<char>(254);
	maze[14][12] = static_cast<char>(254);
	maze[14][13] = '.';
	maze[14][14] = '.';
	maze[14][15] = static_cast<char>(254);
	maze[14][16] = '.';
	maze[14][17] = '.';
	maze[14][18] = '.';
	maze[14][19] = static_cast<char>(254);
	maze[15][0] = static_cast<char>(254);
	maze[15][1] = '.';
	maze[15][2] = '.';
	maze[15][3] = '.';
	maze[15][4] = static_cast<char>(254);
	maze[15][5] = '.';
	maze[15][6] = '.';
	maze[15][7] = static_cast<char>(254);
	maze[15][8] = '.';
	maze[15][9] = '.';
	maze[15][10] = static_cast<char>(254);
	maze[15][11] = '.';
	maze[15][12] = '.';
	maze[15][13] = static_cast<char>(254);
	maze[15][14] = '.';
	maze[15][15] = static_cast<char>(254);
	maze[15][16] = static_cast<char>(254);
	maze[15][17] = '.';
	maze[15][18] = static_cast<char>(254);
	maze[15][19] = static_cast<char>(254);
	maze[16][0] = static_cast<char>(254);
	maze[16][1] = static_cast<char>(254);
	maze[16][2] = static_cast<char>(254);
	maze[16][3] = '.';
	maze[16][4] = '.';
	maze[16][5] = '.';
	maze[16][6] = static_cast<char>(254);
	maze[16][7] = '.';
	maze[16][8] = '.';
	maze[16][9] = static_cast<char>(254);
	maze[16][10] = static_cast<char>(254);
	maze[16][11] = static_cast<char>(254);
	maze[16][12] = '.';
	maze[16][13] = '.';
	maze[16][14] = static_cast<char>(254);
	maze[16][15] = '.';
	maze[16][16] = '.';
	maze[16][17] = '.';
	maze[16][18] = static_cast<char>(254);
	maze[16][19] = static_cast<char>(254);
	maze[17][0] = static_cast<char>(254);
	maze[17][1] = '.';
	maze[17][2] = '.';
	maze[17][3] = '.';
	maze[17][4] = static_cast<char>(254);
	maze[17][5] = '.';
	maze[17][6] = static_cast<char>(254);
	maze[17][7] = '.';
	maze[17][8] = static_cast<char>(254);
	maze[17][9] = '.';
	maze[17][10] = static_cast<char>(254);
	maze[17][11] = '.';
	maze[17][12] = static_cast<char>(254);
	maze[17][13] = '.';
	maze[17][14] = static_cast<char>(254);
	maze[17][15] = '.';
	maze[17][16] = static_cast<char>(254);
	maze[17][17] = '.';
	maze[17][18] = static_cast<char>(254);
	maze[17][19] = static_cast<char>(254);
	maze[18][0] = static_cast<char>(254);
	maze[18][1] = '.';
	maze[18][2] = static_cast<char>(254);
	maze[18][3] = '.';
	maze[18][4] = static_cast<char>(254);
	maze[18][5] = '.';
	maze[18][6] = '.';
	maze[18][7] = '.';
	maze[18][8] = '.';
	maze[18][9] = '.';
	maze[18][10] = '.';
	maze[18][11] = '.';
	maze[18][12] = '.';
	maze[18][13] = '.';
	maze[18][14] = static_cast<char>(254);
	maze[18][15] = '.';
	maze[18][16] = static_cast<char>(254);
	maze[18][17] = '.';
	maze[18][18] = '.';
	maze[18][19] = '.';
	maze[19][0] = static_cast<char>(254);
	maze[19][1] = static_cast<char>(254);
	maze[19][2] = static_cast<char>(254);
	maze[19][3] = static_cast<char>(254);
	maze[19][4] = static_cast<char>(254);
	maze[19][5] = static_cast<char>(254);
	maze[19][6] = static_cast<char>(254);
	maze[19][7] = static_cast<char>(254);
	maze[19][8] = static_cast<char>(254);
	maze[19][9] = static_cast<char>(254);
	maze[19][10] = static_cast<char>(254);
	maze[19][11] = static_cast<char>(254);
	maze[19][12] = static_cast<char>(254);
	maze[19][13] = static_cast<char>(254);
	maze[19][14] = static_cast<char>(254);
	maze[19][15] = static_cast<char>(254);
	maze[19][16] = static_cast<char>(254);
	maze[19][17] = static_cast<char>(254);
	maze[19][18] = static_cast<char>(254);
	maze[19][19] = static_cast<char>(254);

	for (int i = 0; i < 20; i++) {
		//Color the maze
		int Set[] = { 5,7,14,7 };
		color(Set[0]);
		Set[0] = { 5 };

		for (int j = 0; j < 20; j++) {
			cout << maze[i][j] << " ";
		}
		color(Set[1]);
		Set[1] = { 7 };

		cout << static_cast<char>(179);

		color(Set[2]);
		Set[2] = { 14 };

		if (i == 10)
		{
			cout << "\tL E V E L - 3";
		}
		color(Set[3]);
		Set[3] = { 7 };

		cout << endl;
	}
	for (int i = 0; i < 20; i++) {
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

	for (int i = 0; i < 20; i++)
	{
		delete[] maze[i];
	}
	delete[] maze;
}

//Print the end message when you win. Then ask do you want to continue.
void endOfGame(string answer){
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
	cout << "                                           Do you want to start a new game: ";
	getline(cin, answer);
	if (answer == "Yes" || answer == "yes" || answer == "YES" || answer == "Y" || answer == "y")
	{
		levelOne();
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

//Movement of the smiley face with arrows and wasd keys
void levelThree()
{
	int x = 0, y = 1;
	system("CLS");
	char ch;
	string answer;
	system("CLS");
	printMazeThree();

	

	while (true)
	{

	if (x == 38 && y == 18)
	{
		endOfGame(answer);
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

		if ((x == 20 && y == 1) || (x == 32 && y == 1))
		{
			y = 2;
		}

		if ((x == 2 && y == 2) || (x == 4 && y == 2) || (x == 6 && y == 2) || (x == 8 && y == 2) || (x == 12 && y == 2) || (x == 18 && y == 2) || (x == 26 && y == 2) || (x == 28 && y == 2) || (x == 34 && y == 2))
		{
			y = 3;
		}

		if ((x == 4 && y == 3) || (x == 8 && y == 3) || (x == 12 && y == 3) || (x == 18 && y == 3) || (x == 22 && y == 3) || (x == 26 && y == 3) || (x == 28 && y == 3) || (x == 32 && y == 3) || (x == 34 && y == 3))
		{
			y = 4;
		}

		if ((x == 4 && y == 4) || (x == 12 && y == 4) || (x == 14 && y == 4) || (x == 18 && y == 4) || (x == 26 && y == 4) || (x == 32 && y == 4))
		{
			y = 5;
		}

		if ((x == 22 && y == 5) || (x == 24 && y == 5) || (x == 26 && y == 5) || (x == 30 && y == 5) || (x == 32 && y == 5) || (x == 36 && y == 5))
		{
			y = 6;
		}

		if ((x == 4 && y == 6) || (x == 6 && y == 6) || (x == 8 && y == 6) || (x == 12 && y == 6) || (x == 14 && y == 6) || (x == 18 && y == 6) || (x == 22 && y == 6) || (x == 36 && y == 6))
		{
			y = 7;
		}

		if ((x == 8 && y == 7) || (x == 10 && y == 7) || (x == 14 && y == 7) || (x == 16 && y == 7) || (x == 20 && y == 7) || (x == 22 && y == 7) || (x == 26 && y == 7) || (x == 28 && y == 7) || (x == 34 && y == 7))
		{
			y = 8;
		}

		if ((x == 2 && y == 8) || (x == 4 && y == 8) || (x == 8 && y == 8) || (x == 14 && y == 8) || (x == 26 && y == 8) || (x == 30 && y == 8))
		{
			y = 9;
		}

		if ((x == 16 && y == 9) || (x == 22 && y == 9) || (x == 24 && y == 9) || (x == 28 && y == 9) || (x == 34 && y == 9) || (x == 36 && y == 9))
		{
			y = 10;
		}

		if ((x == 6 && y == 10) || (x == 8 && y == 10) || (x == 12 && y == 10) || (x == 18 && y == 10) || (x == 22 && y == 10) || (x == 24 && y == 10) || (x == 30 && y == 10))
		{
			y = 11;
		}

		if ((x == 6 && y == 11) || (x == 10 && y == 11) || (x == 16 && y == 11) || (x == 20 && y == 11) || (x == 22 && y == 11) || (x == 26 && y == 11) || (x == 32 && y == 11) || (x == 36 && y == 11))
		{
			y = 12;
		}

		if ((x == 4 && y == 12) || (x == 8 && y == 12) || (x == 12 && y == 12) || (x == 16 && y == 12) || (x == 20 && y == 12) || (x == 26 && y == 12))
		{
			y = 13;
		}

		if ((x == 4 && y == 13) || (x == 8 && y == 13) || (x == 14 && y == 13) || (x == 24 && y == 13) || (x == 30 && y == 13) || (x == 32 && y == 13) || (x == 34 && y == 13))
		{
			y = 14;
		}

		if ((x == 4 && y == 14) || (x == 8 && y == 14) || (x == 10 && y == 14) || (x == 14 && y == 14) || (x == 18 && y == 14) || (x == 22 && y == 14) || (x == 24 && y == 14) || (x == 30 && y == 14))
		{
			y = 15;
		}

		if ((x == 8 && y == 15) || (x == 14 && y == 15) || (x == 20 && y == 15) || (x == 26 && y == 15) || (x == 30 && y == 15) || (x == 32 && y == 15) || (x == 36 && y == 15))
		{
			y = 16;
		}

		if ((x == 2 && y == 16) || (x == 4 && y == 16) || (x == 12 && y == 16) || (x == 18 && y == 16) || (x == 20 && y == 16) || (x == 22 && y == 16) || (x == 28 && y == 16) || (x == 36 && y == 16))
		{
			y = 17;
		}

		if ((x == 8 && y == 17) || (x == 12 && y == 17) || (x == 16 && y == 17) || (x == 20 && y == 17) || (x == 24 && y == 17) || (x == 28 && y == 17) || (x == 32 && y == 17) || (x == 36 && y == 17))
		{
			y = 18;
		}
		system("CLS");
		printMazeThree();
		break;

	case KEY_DOWN:
	case 's':

		y++;

		if (y == 19) {
			y = 18;
		}
		if (x == 0 && y == 2)
		{
			y = 1;
		}

		if ((x == 20 && y == 1) || (x == 32 && y == 1))
		{
			y = 1;
		}

		if ((x == 2 && y == 2) || (x == 4 && y == 2) || (x == 6 && y == 2) || (x == 8 && y == 2) || (x == 12 && y == 2) || (x == 18 && y == 2) || (x == 26 && y == 2) || (x == 28 && y == 2) || (x == 34 && y == 2))
		{
			y = 1;
		}

		if ((x == 4 && y == 3) || (x == 8 && y == 3) || (x == 12 && y == 3) || (x == 18 && y == 3) || (x == 22 && y == 3) || (x == 26 && y == 3) || (x == 28 && y == 3) || (x == 32 && y == 3) || (x == 34 && y == 3))
		{
			y = 2;
		}

		if ((x == 4 && y == 4) || (x == 12 && y == 4) || (x == 14 && y == 4) || (x == 18 && y == 4) || (x == 26 && y == 4) || (x == 32 && y == 4))
		{
			y = 3;
		}

		if ((x == 22 && y == 5) || (x == 24 && y == 5) || (x == 26 && y == 5) || (x == 30 && y == 5) || (x == 32 && y == 5) || (x == 36 && y == 5))
		{
			y = 4;
		}

		if ((x == 4 && y == 6) || (x == 6 && y == 6) || (x == 8 && y == 6) || (x == 12 && y == 6) || (x == 14 && y == 6) || (x == 18 && y == 6) || (x == 22 && y == 6) || (x == 36 && y == 6))
		{
			y = 5;
		}

		if ((x == 8 && y == 7) || (x == 10 && y == 7) || (x == 14 && y == 7) || (x == 16 && y == 7) || (x == 20 && y == 7) || (x == 22 && y == 7) || (x == 26 && y == 7) || (x == 28 && y == 7) || (x == 34 && y == 7))
		{
			y = 6;
		}

		if ((x == 2 && y == 8) || (x == 4 && y == 8) || (x == 8 && y == 8) || (x == 14 && y == 8) || (x == 26 && y == 8) || (x == 30 && y == 8))
		{
			y = 7;
		}

		if ((x == 16 && y == 9) || (x == 22 && y == 9) || (x == 24 && y == 9) || (x == 28 && y == 9) || (x == 34 && y == 9) || (x == 36 && y == 9))
		{
			y = 8;
		}

		if ((x == 6 && y == 10) || (x == 8 && y == 10) || (x == 12 && y == 10) || (x == 24 && y == 10) || (x == 30 && y == 10))
		{
			y = 9;
		}

		if ((x == 6 && y == 11) || (x == 10 && y == 11) || (x == 16 && y == 11) || (x == 24 && y == 11) || (x == 32 && y == 11) || (x == 36 && y == 11))
		{
			y = 10;
		}

		if ((x == 4 && y == 12) || (x == 8 && y == 12) || (x == 12 && y == 12) || (x == 16 && y == 12) || (x == 20 && y == 12) || (x == 26 && y == 12))
		{
			y = 11;
		}

		if ((x == 4 && y == 13) || (x == 8 && y == 13) || (x == 14 && y == 13) || (x == 24 && y == 13) || (x == 30 && y == 13) || (x == 32 && y == 13) || (x == 34 && y == 13))
		{
			y = 12;
		}

		if ((x == 4 && y == 14) || (x == 8 && y == 14) || (x == 10 && y == 14) || (x == 14 && y == 14) || (x == 18 && y == 14) || (x == 22 && y == 14) || (x == 24 && y == 14) || (x == 30 && y == 14))
		{
			y = 13;
		}

		if ((x == 8 && y == 15) || (x == 14 && y == 15) || (x == 20 && y == 15) || (x == 26 && y == 15) || (x == 30 && y == 15) || (x == 32 && y == 15) || (x == 36 && y == 15))
		{
			y = 14;
		}

		if ((x == 2 && y == 16) || (x == 4 && y == 16) || (x == 12 && y == 16) || (x == 18 && y == 16) || (x == 20 && y == 16) || (x == 22 && y == 16) || (x == 28 && y == 16) || (x == 36 && y == 16))
		{
			y = 15;
		}

		if ((x == 8 && y == 17) || (x == 12 && y == 17) || (x == 16 && y == 17) || (x == 20 && y == 17) || (x == 24 && y == 17) || (x == 28 && y == 17) || (x == 32 && y == 17) || (x == 36 && y == 17))
		{
			y = 16;
		}

		if ((x == 4 && y == 18) || (x == 8 && y == 18) || (x == 28 && y == 18) || (x == 32 && y == 18))
		{
			y = 17;
		}
		system("CLS");
		printMazeThree();
		break;


	case KEY_RIGHT:
	case 'd':

		x += 2;

		if (x == 38 && y != 18)
		{
			x -= 2;
		}

		if ((x == 20 && y == 1) || (x == 32 && y == 1))
		{
			x -= 2;
		}

		if ((x == 2 && y == 2) || (x == 4 && y == 2) || (x == 6 && y == 2) || (x == 8 && y == 2) || (x == 12 && y == 2) || (x == 18 && y == 2) || (x == 26 && y == 2) || (x == 28 && y == 2) || (x == 34 && y == 2))
		{
			x -= 2;
		}

		if ((x == 4 && y == 3) || (x == 8 && y == 3) || (x == 12 && y == 3) || (x == 18 && y == 3) || (x == 22 && y == 3) || (x == 26 && y == 3) || (x == 28 && y == 3) || (x == 32 && y == 3) || (x == 34 && y == 3))
		{
			x -= 2;
		}

		if ((x == 4 && y == 4) || (x == 12 && y == 4) || (x == 14 && y == 4) || (x == 18 && y == 4) || (x == 26 && y == 4) || (x == 32 && y == 4))
		{
			x -= 2;
		}

		if ((x == 22 && y == 5) || (x == 24 && y == 5) || (x == 26 && y == 5) || (x == 30 && y == 5) || (x == 32 && y == 5) || (x == 36 && y == 5))
		{
			x -= 2;
		}

		if ((x == 4 && y == 6) || (x == 6 && y == 6) || (x == 8 && y == 6) || (x == 12 && y == 6) || (x == 14 && y == 6) || (x == 18 && y == 6) || (x == 22 && y == 6) || (x == 36 && y == 6))
		{
			x -= 2;
		}

		if ((x == 8 && y == 7) || (x == 10 && y == 7) || (x == 14 && y == 7) || (x == 16 && y == 7) || (x == 20 && y == 7) || (x == 22 && y == 7) || (x == 26 && y == 7) || (x == 28 && y == 7) || (x == 34 && y == 7))
		{
			x -= 2;
		}

		if ((x == 2 && y == 8) || (x == 4 && y == 8) || (x == 8 && y == 8) || (x == 14 && y == 8) || (x == 26 && y == 8) || (x == 30 && y == 8))
		{
			x -= 2;
		}

		if ((x == 16 && y == 9) || (x == 22 && y == 9) || (x == 24 && y == 9) || (x == 28 && y == 9) || (x == 34 && y == 9) || (x == 36 && y == 9))
		{
			x -= 2;
		}

		if ((x == 6 && y == 10) || (x == 8 && y == 10) || (x == 12 && y == 10) || (x == 18 && y == 10) || (x == 22 && y == 10) || (x == 24 && y == 10) || (x == 30 && y == 10))
		{
			x -= 2;
		}

		if ((x == 6 && y == 11) || (x == 10 && y == 11) || (x == 16 && y == 11) || (x == 22 && y == 11) || (x == 26 && y == 11) || (x == 32 && y == 11) || (x == 36 && y == 11))
		{
			x -= 2;
		}

		if ((x == 4 && y == 12) || (x == 8 && y == 12) || (x == 12 && y == 12) || (x == 16 && y == 12) || (x == 20 && y == 12) || (x == 26 && y == 12))
		{
			x -= 2;
		}

		if ((x == 4 && y == 13) || (x == 8 && y == 13) || (x == 14 && y == 13) || (x == 24 && y == 13) || (x == 30 && y == 13) || (x == 32 && y == 13) || (x == 34 && y == 13))
		{
			x -= 2;
		}

		if ((x == 4 && y == 14) || (x == 8 && y == 14) || (x == 10 && y == 14) || (x == 14 && y == 14) || (x == 18 && y == 14) || (x == 22 && y == 14) || (x == 24 && y == 14) || (x == 30 && y == 14))
		{
			x -= 2;
		}

		if ((x == 8 && y == 15) || (x == 14 && y == 15) || (x == 20 && y == 15) || (x == 26 && y == 15) || (x == 30 && y == 15) || (x == 32 && y == 15) || (x == 36 && y == 15))
		{
			x -= 2;
		}

		if ((x == 2 && y == 16) || (x == 4 && y == 16) || (x == 12 && y == 16) || (x == 18 && y == 16) || (x == 20 && y == 16) || (x == 22 && y == 16) || (x == 28 && y == 16) || (x == 36 && y == 16))
		{
			x -= 2;
		}

		if ((x == 8 && y == 17) || (x == 12 && y == 17) || (x == 16 && y == 17) || (x == 20 && y == 17) || (x == 24 && y == 17) || (x == 28 && y == 17) || (x == 32 && y == 17) || (x == 36 && y == 17))
		{
			x -= 2;
		}

		if ((x == 4 && y == 18) || (x == 8 && y == 18) || (x == 28 && y == 18) || (x == 32 && y == 18))
		{
			x -= 2;
		}
		system("CLS");
		printMazeThree();
		break;


	case KEY_LEFT:
	case 'a':

		x -= 2;

		if (x == 0)
		{
			x += 2;
		}

		if ((x == 20 && y == 1) || (x == 32 && y == 1))
		{
			x += 2;
		}

		if ((x == 2 && y == 2) || (x == 4 && y == 2) || (x == 6 && y == 2) || (x == 8 && y == 2) || (x == 12 && y == 2) || (x == 18 && y == 2) || (x == 26 && y == 2) || (x == 28 && y == 2) || (x == 34 && y == 2))
		{
			x += 2;
		}

		if ((x == 4 && y == 3) || (x == 8 && y == 3) || (x == 12 && y == 3) || (x == 18 && y == 3) || (x == 22 && y == 3) || (x == 26 && y == 3) || (x == 28 && y == 3) || (x == 32 && y == 3) || (x == 34 && y == 3))
		{
			x += 2;
		}

		if ((x == 4 && y == 4) || (x == 12 && y == 4) || (x == 14 && y == 4) || (x == 18 && y == 4) || (x == 26 && y == 4) || (x == 32 && y == 4))
		{
			x += 2;
		}

		if ((x == 22 && y == 5) || (x == 24 && y == 5) || (x == 26 && y == 5) || (x == 30 && y == 5) || (x == 32 && y == 5) || (x == 36 && y == 5))
		{
			x += 2;
		}

		if ((x == 4 && y == 6) || (x == 6 && y == 6) || (x == 8 && y == 6) || (x == 12 && y == 6) || (x == 14 && y == 6) || (x == 18 && y == 6) || (x == 22 && y == 6) || (x == 36 && y == 6))
		{
			x += 2;
		}

		if ((x == 8 && y == 7) || (x == 10 && y == 7) || (x == 14 && y == 7) || (x == 16 && y == 7) || (x == 20 && y == 7) || (x == 22 && y == 7) || (x == 26 && y == 7) || (x == 28 && y == 7) || (x == 34 && y == 7))
		{
			x += 2;
		}

		if ((x == 2 && y == 8) || (x == 4 && y == 8) || (x == 8 && y == 8) || (x == 14 && y == 8) || (x == 26 && y == 8) || (x == 30 && y == 8))
		{
			x += 2;
		}

		if ((x == 16 && y == 9) || (x == 22 && y == 9) || (x == 24 && y == 9) || (x == 28 && y == 9) || (x == 34 && y == 9) || (x == 36 && y == 9))
		{
			x += 2;
		}

		if ((x == 6 && y == 10) || (x == 8 && y == 10) || (x == 12 && y == 10) || (x == 18 && y == 10) || (x == 22 && y == 10) || (x == 24 && y == 10) || (x == 30 && y == 10))
		{
			x += 2;
		}

		if ((x == 6 && y == 11) || (x == 10 && y == 11) || (x == 16 && y == 11) || (x == 20 && y == 11) || (x == 22 && y == 11) || (x == 26 && y == 11) || (x == 32 && y == 11) || (x == 36 && y == 11))
		{
			x += 2;
		}

		if ((x == 4 && y == 12) || (x == 8 && y == 12) || (x == 12 && y == 12) || (x == 16 && y == 12) || (x == 20 && y == 12) || (x == 26 && y == 12))
		{
			x += 2;
		}

		if ((x == 4 && y == 13) || (x == 8 && y == 13) || (x == 14 && y == 13) || (x == 24 && y == 13) || (x == 30 && y == 13) || (x == 32 && y == 13) || (x == 34 && y == 13))
		{
			x += 2;
		}

		if ((x == 4 && y == 14) || (x == 8 && y == 14) || (x == 10 && y == 14) || (x == 14 && y == 14) || (x == 18 && y == 14) || (x == 22 && y == 14) || (x == 24 && y == 14) || (x == 30 && y == 14))
		{
			x += 2;
		}

		if ((x == 8 && y == 15) || (x == 14 && y == 15) || (x == 20 && y == 15) || (x == 26 && y == 15) || (x == 30 && y == 15) || (x == 32 && y == 15) || (x == 36 && y == 15))
		{
			x += 2;
		}

		if ((x == 2 && y == 16) || (x == 4 && y == 16) || (x == 12 && y == 16) || (x == 18 && y == 16) || (x == 20 && y == 16) || (x == 22 && y == 16) || (x == 28 && y == 16) || (x == 36 && y == 16))
		{
			x += 2;
		}

		if ((x == 8 && y == 17) || (x == 12 && y == 17) || (x == 16 && y == 17) || (x == 20 && y == 17) || (x == 24 && y == 17) || (x == 28 && y == 17) || (x == 32 && y == 17) || (x == 36 && y == 17))
		{
			x += 2;
		}

		if ((x == 4 && y == 18) || (x == 8 && y == 18) || (x == 28 && y == 18) || (x == 32 && y == 18))
		{
			x += 2;
		}
		system("CLS");
		printMazeThree();
		break;

	case 'x':
	case KEY_SPACE:
	case KEY_ENTER:

		system("CLS");
		gotoxy(50, 2);//Center the text "Game over"
		cout << "Game Over" << endl << endl;
		exit(0);//Stop the game
		break;
	}
}
}