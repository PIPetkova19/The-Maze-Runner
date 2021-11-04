#include <iostream>
#include<process.h>
#include<windows.h>
#include<conio.h>
#include<string>
#include"levelOne.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_SPACE 32
#define KEY_ENTER 13

using namespace std;


void printMazeThree() {
	char maze[20][20] = {
		{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
		{'.','.','.','.','.','.','.','.','.','.','#','.','.','.','.','.','#','.','.','#'},
		{'#','#','#','#','#','.','#','.','.','#','.','.','.','#','#','.','.','#','.','#'},
		{'#','.','#','.','#','.','#','.','.','#','.','#','.','#','#','.','#','#','.','#'},
		{'#','.','#','.','.','.','#','#','.','#','.','.','.','#','.','.','#','.','.','#'},
		{'#','.','.','.','.','.','.','.','.','.','.','#','#','#','.','#','#','.','#','#'},
		{'#','.','#','#','#','.','#','#','.','#','.','#','.','.','.','.','.','.','#','#'},
		{'#','.','.','.','#','#','.','#','#','.','#','#','.','#','#','.','.','#','.','#'},
		{'#','#','#','.','#','.','.','#','.','.','.','.','.','#','.','#','.','.','.','#'},
		{'#','.','.','.','.','.','.','.','#','.','.','#','#','.','#','.','.','#','#','#'},
		{'#','.','.','#','#','.','#','.','.','#','.','#','#','.','.','#','.','.','.','#'},
		{'#','.','.','#','.','#','.','.','#','.','.','#','.','#','.','.','#','.','#','#'},
		{'#','.','#','.','#','.','#','.','#','.','#','.','.','#','.','.','.','.','.','#'},
		{'#','.','#','.','#','.','.','#','.','.','.','.','#','.','.','#','#','#','.','#'},
		{'#','.','#','.','#','#','.','#','.','#','.','#','#','.','.','#','.','.','.','#'},
		{'#','.','.','.','#','.','.','#','.','.','#','.','.','#','.','#','#','.','#','#'},
		{'#','#','#','.','.','.','#','.','.','#','#','#','.','.','#','.','.','.','#','#'},
		{'#','.','.','.','#','.','#','.','#','.','#','.','#','.','#','.','#','.','#','#'},
		{'#','.','#','.','#','.','.','.','.','.','.','.','.','.','#','.','#','.','.','.'},
		{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
	};

	for (int i = 0; i < 20; i++) {

		for (int j = 0; j < 20; j++) {
			cout << maze[i][j] << " ";
		}
		cout << "|";
		if (i == 10)
			cout << "\tL E V E L - 3";
		cout << endl;
	}
	for (int i = 0; i < 20; i++) {
		cout << "__";
	}
	cout << endl;
}


void levelThree()
{
	int x = 0, y = 1;
	system("CLS");
	char ch;
	string answer;
label:
	system("CLS");
	printMazeThree();


	gotoxy(x, y);
	cout << static_cast<char>(2);
	ch = _getch();


	switch (ch) {

	case KEY_UP:
	case 'w':
		y--;
		if (y == 0)
			y = 1;
		if ((x == 20 && y == 1) || (x == 32 && y == 1))
			y = 2;
		if ((x == 2 && y == 2) || (x == 4 && y == 2) || (x == 6 && y == 2) || (x == 8 && y == 2) || (x == 12 && y == 2) || (x == 18 && y == 2) || (x == 26 && y == 2) || (x == 28 && y == 2) || (x == 34 && y == 2))
			y = 3;
		if ((x == 4 && y == 3) || (x == 8 && y == 3) || (x == 12 && y == 3) || (x == 18 && y == 3) || (x == 22 && y == 3) || (x == 26 && y == 3) || (x == 28 && y == 3) || (x == 32 && y == 3) || (x == 34 && y == 3))
			y = 4;
		if ((x == 4 && y == 4) || (x == 12 && y == 4) || (x == 14 && y == 4) || (x == 18 && y == 4) || (x == 26 && y == 4) || (x == 32 && y == 4))
			y = 5;
		if ((x == 22 && y == 5) || (x == 24 && y == 5) || (x == 26 && y == 5) || (x == 30 && y == 5) || (x == 32 && y == 5) || (x == 36 && y == 5))
			y = 6;
		if ((x == 4 && y == 6) || (x == 6 && y == 6) || (x == 8 && y == 6) || (x == 12 && y == 6) || (x == 14 && y == 6) || (x == 18 && y == 6) || (x == 22 && y == 6) || (x == 36 && y == 6))
			y = 7;
		if ((x == 8 && y == 7) || (x == 10 && y == 7) || (x == 14 && y == 7) || (x == 16 && y == 7) || (x == 20 && y == 7) || (x == 22 && y == 7) || (x == 26 && y == 7) || (x == 28 && y == 7) || (x == 34 && y == 7))
			y = 8;
		if ((x == 2 && y == 8) || (x == 4 && y == 8) || (x == 8 && y == 8) || (x == 14 && y == 8) || (x == 26 && y == 8) || (x == 30 && y == 8))
			y = 9;
		if ((x == 16 && y == 9) || (x == 22 && y == 9) || (x == 24 && y == 9) || (x == 28 && y == 9) || (x == 34 && y == 9) || (x == 36 && y == 9))
			y = 10;
		if ((x == 6 && y == 10) || (x == 8 && y == 10) || (x == 12 && y == 10) || (x == 18 && y == 10) || (x == 22 && y == 10) || (x == 24 && y == 10) || (x == 30 && y == 10))
			y = 11;
		if ((x == 6 && y == 11) || (x == 10 && y == 11) || (x == 16 && y == 11) || (x == 20 && y == 11) || (x == 24 && y == 11) || (x == 32 && y == 11) || (x == 36 && y == 11))
			y = 12;
		if ((x == 4 && y == 12) || (x == 8 && y == 12) || (x == 12 && y == 12) || (x == 16 && y == 12) || (x == 20 && y == 12) || (x == 26 && y == 12))
			y = 13;
		if ((x == 4 && y == 13) || (x == 8 && y == 13) || (x == 14 && y == 13) || (x == 24 && y == 13) || (x == 30 && y == 13) || (x == 32 && y == 13) || (x == 34 && y == 13))
			y = 14;
		if ((x == 4 && y == 14) || (x == 8 && y == 14) || (x == 10 && y == 14) || (x == 14 && y == 14) || (x == 18 && y == 14) || (x == 22 && y == 14) || (x == 24 && y == 14) || (x == 30 && y == 14))
			y = 15;
		if ((x == 8 && y == 15) || (x == 14 && y == 15) || (x == 20 && y == 15) || (x == 26 && y == 15) || (x == 30 && y == 15) || (x == 32 && y == 15) || (x == 36 && y == 15))
			y = 16;
		if ((x == 2 && y == 16) || (x == 4 && y == 16) || (x == 12 && y == 16) || (x == 18 && y == 16) || (x == 20 && y == 16) || (x == 22 && y == 16) || (x == 28 && y == 16) || (x == 36 && y == 16))
			y = 17;
		if ((x == 8 && y == 17) || (x == 12 && y == 17) || (x == 16 && y == 17) || (x == 20 && y == 17) || (x == 24 && y == 17) || (x == 28 && y == 17) || (x == 32 && y == 17) || (x == 36 && y == 17))
			y = 18;




		break;

	case KEY_DOWN:
	case 's':
		y++;
		if (y == 19)
			y = 18;
		if ((x == 20 && y == 1) || (x == 32 && y == 1))
			y = 1;
		if ((x == 2 && y == 2) || (x == 4 && y == 2) || (x == 6 && y == 2) || (x == 8 && y == 2) || (x == 12 && y == 2) || (x == 18 && y == 2) || (x == 26 && y == 2) || (x == 28 && y == 2) || (x == 34 && y == 2))
			y = 1;
		if ((x == 4 && y == 3) || (x == 8 && y == 3) || (x == 12 && y == 3) || (x == 18 && y == 3) || (x == 22 && y == 3) || (x == 26 && y == 3) || (x == 28 && y == 3) || (x == 32 && y == 3) || (x == 34 && y == 3))
			y = 2;
		if ((x == 4 && y == 4) || (x == 12 && y == 4) || (x == 14 && y == 4) || (x == 18 && y == 4) || (x == 26 && y == 4) || (x == 32 && y == 4))
			y = 3;
		if ((x == 22 && y == 5) || (x == 24 && y == 5) || (x == 26 && y == 5) || (x == 30 && y == 5) || (x == 32 && y == 5) || (x == 36 && y == 5))
			y = 4;
		if ((x == 4 && y == 6) || (x == 6 && y == 6) || (x == 8 && y == 6) || (x == 12 && y == 6) || (x == 14 && y == 6) || (x == 18 && y == 6) || (x == 22 && y == 6) || (x == 36 && y == 6))
			y = 5;
		if ((x == 8 && y == 7) || (x == 10 && y == 7) || (x == 14 && y == 7) || (x == 16 && y == 7) || (x == 20 && y == 7) || (x == 22 && y == 7) || (x == 26 && y == 7) || (x == 28 && y == 7) || (x == 34 && y == 7))
			y = 6;
		if ((x == 2 && y == 8) || (x == 4 && y == 8) || (x == 8 && y == 8) || (x == 14 && y == 8) || (x == 26 && y == 8) || (x == 30 && y == 8))
			y = 7;
		if ((x == 16 && y == 9) || (x == 22 && y == 9) || (x == 24 && y == 9) || (x == 28 && y == 9) || (x == 34 && y == 9) || (x == 36 && y == 9))
			y = 8;
		if ((x == 6 && y == 10) || (x == 8 && y == 10) || (x == 12 && y == 10) || (x == 18 && y == 10) || (x == 22 && y == 10) || (x == 24 && y == 10) || (x == 30 && y == 10))
			y = 9;
		if ((x == 6 && y == 11) || (x == 10 && y == 11) || (x == 16 && y == 11) || (x == 20 && y == 11) || (x == 24 && y == 11) || (x == 32 && y == 11) || (x == 36 && y == 11))
			y = 10;
		if ((x == 4 && y == 12) || (x == 8 && y == 12) || (x == 12 && y == 12) || (x == 16 && y == 12) || (x == 20 && y == 12) || (x == 26 && y == 12))
			y = 11;
		if ((x == 4 && y == 13) || (x == 8 && y == 13) || (x == 14 && y == 13) || (x == 24 && y == 13) || (x == 30 && y == 13) || (x == 32 && y == 13) || (x == 34 && y == 13))
			y = 12;
		if ((x == 4 && y == 14) || (x == 8 && y == 14) || (x == 10 && y == 14) || (x == 14 && y == 14) || (x == 18 && y == 14) || (x == 22 && y == 14) || (x == 24 && y == 14) || (x == 30 && y == 14))
			y = 13;
		if ((x == 8 && y == 15) || (x == 14 && y == 15) || (x == 20 && y == 15) || (x == 26 && y == 15) || (x == 30 && y == 15) || (x == 32 && y == 15) || (x == 36 && y == 15))
			y = 14;
		if ((x == 2 && y == 16) || (x == 4 && y == 16) || (x == 12 && y == 16) || (x == 18 && y == 16) || (x == 20 && y == 16) || (x == 22 && y == 16) || (x == 28 && y == 16) || (x == 36 && y == 16))
			y = 15;
		if ((x == 8 && y == 17) || (x == 12 && y == 17) || (x == 16 && y == 17) || (x == 20 && y == 17) || (x == 24 && y == 17) || (x == 28 && y == 17) || (x == 32 && y == 17) || (x == 36 && y == 17))
			y = 16;
		if ((x == 4 && y == 18) || (x == 8 && y == 18) || (x == 28 && y == 18) || (x == 32 && y == 18))
			y = 17;

		break;


	case KEY_RIGHT:
	case 'd':
		x += 2;
		if (x == 38 && y == 18) {
			system("CLS");
			cout << "Congratulations! You passed level three" << endl;
		}
		if (x == 38)
			x -= 2;
		if ((x == 20 && y == 1) || (x == 32 && y == 1))
			x -= 2;
		if ((x == 2 && y == 2) || (x == 4 && y == 2) || (x == 6 && y == 2) || (x == 8 && y == 2) || (x == 12 && y == 2) || (x == 18 && y == 2) || (x == 26 && y == 2) || (x == 28 && y == 2) || (x == 34 && y == 2))
			x -= 2;
		if ((x == 4 && y == 3) || (x == 8 && y == 3) || (x == 12 && y == 3) || (x == 18 && y == 3) || (x == 22 && y == 3) || (x == 26 && y == 3) || (x == 28 && y == 3) || (x == 32 && y == 3) || (x == 34 && y == 3))
			x -= 2;
		if ((x == 4 && y == 4) || (x == 12 && y == 4) || (x == 14 && y == 4) || (x == 18 && y == 4) || (x == 26 && y == 4) || (x == 32 && y == 4))
			x -= 2;
		if ((x == 22 && y == 5) || (x == 24 && y == 5) || (x == 26 && y == 5) || (x == 30 && y == 5) || (x == 32 && y == 5) || (x == 36 && y == 5))
			x -= 2;
		if ((x == 4 && y == 6) || (x == 6 && y == 6) || (x == 8 && y == 6) || (x == 12 && y == 6) || (x == 14 && y == 6) || (x == 18 && y == 6) || (x == 22 && y == 6) || (x == 36 && y == 6))
			x -= 2;
		if ((x == 8 && y == 7) || (x == 10 && y == 7) || (x == 14 && y == 7) || (x == 16 && y == 7) || (x == 20 && y == 7) || (x == 22 && y == 7) || (x == 26 && y == 7) || (x == 28 && y == 7) || (x == 34 && y == 7))
			x -= 2;
		if ((x == 2 && y == 8) || (x == 4 && y == 8) || (x == 8 && y == 8) || (x == 14 && y == 8) || (x == 26 && y == 8) || (x == 30 && y == 8))
			x -= 2;
		if ((x == 16 && y == 9) || (x == 22 && y == 9) || (x == 24 && y == 9) || (x == 28 && y == 9) || (x == 34 && y == 9) || (x == 36 && y == 9))
			x -= 2;
		if ((x == 6 && y == 10) || (x == 8 && y == 10) || (x == 12 && y == 10) || (x == 18 && y == 10) || (x == 22 && y == 10) || (x == 24 && y == 10) || (x == 30 && y == 10))
			x -= 2;
		if ((x == 6 && y == 11) || (x == 10 && y == 11) || (x == 16 && y == 11) || (x == 24 && y == 11) || (x == 32 && y == 11) || (x == 36 && y == 11))
			x -= 2;
		if ((x == 4 && y == 12) || (x == 8 && y == 12) || (x == 12 && y == 12) || (x == 16 && y == 12) || (x == 20 && y == 12) || (x == 26 && y == 12))
			x -= 2;
		if ((x == 4 && y == 13) || (x == 8 && y == 13) || (x == 14 && y == 13) || (x == 24 && y == 13) || (x == 30 && y == 13) || (x == 32 && y == 13) || (x == 34 && y == 13))
			x -= 2;
		if ((x == 4 && y == 14) || (x == 8 && y == 14) || (x == 10 && y == 14) || (x == 14 && y == 14) || (x == 18 && y == 14) || (x == 22 && y == 14) || (x == 24 && y == 14) || (x == 30 && y == 14))
			x -= 2;
		if ((x == 8 && y == 15) || (x == 14 && y == 15) || (x == 20 && y == 15) || (x == 26 && y == 15) || (x == 30 && y == 15) || (x == 32 && y == 15) || (x == 36 && y == 15))
			x -= 2;
		if ((x == 2 && y == 16) || (x == 4 && y == 16) || (x == 12 && y == 16) || (x == 18 && y == 16) || (x == 20 && y == 16) || (x == 22 && y == 16) || (x == 28 && y == 16) || (x == 36 && y == 16))
			x -= 2;
		if ((x == 8 && y == 17) || (x == 12 && y == 17) || (x == 16 && y == 17) || (x == 20 && y == 17) || (x == 24 && y == 17) || (x == 28 && y == 17) || (x == 32 && y == 17) || (x == 36 && y == 17))
			x -= 2;
		if ((x == 4 && y == 18) || (x == 8 && y == 18) || (x == 28 && y == 18) || (x == 32 && y == 18))
			x -= 2;
		break;


	case KEY_LEFT:
	case 'a':
		x -= 2;
		if (x == 0)
			x += 2;
		if ((x == 20 && y == 1) || (x == 32 && y == 1))
			x += 2;
		if ((x == 2 && y == 2) || (x == 4 && y == 2) || (x == 6 && y == 2) || (x == 8 && y == 2) || (x == 12 && y == 2) || (x == 18 && y == 2) || (x == 26 && y == 2) || (x == 28 && y == 2) || (x == 34 && y == 2))
			x += 2;
		if ((x == 4 && y == 3) || (x == 8 && y == 3) || (x == 12 && y == 3) || (x == 18 && y == 3) || (x == 22 && y == 3) || (x == 26 && y == 3) || (x == 28 && y == 3) || (x == 32 && y == 3) || (x == 34 && y == 3))
			x += 2;
		if ((x == 4 && y == 4) || (x == 12 && y == 4) || (x == 14 && y == 4) || (x == 18 && y == 4) || (x == 26 && y == 4) || (x == 32 && y == 4))
			x += 2;
		if ((x == 22 && y == 5) || (x == 24 && y == 5) || (x == 26 && y == 5) || (x == 30 && y == 5) || (x == 32 && y == 5) || (x == 36 && y == 5))
			x += 2;
		if ((x == 4 && y == 6) || (x == 6 && y == 6) || (x == 8 && y == 6) || (x == 12 && y == 6) || (x == 14 && y == 6) || (x == 18 && y == 6) || (x == 22 && y == 6) || (x == 36 && y == 6))
			x += 2;
		if ((x == 8 && y == 7) || (x == 10 && y == 7) || (x == 14 && y == 7) || (x == 16 && y == 7) || (x == 20 && y == 7) || (x == 22 && y == 7) || (x == 26 && y == 7) || (x == 28 && y == 7) || (x == 34 && y == 7))
			x += 2;
		if ((x == 2 && y == 8) || (x == 4 && y == 8) || (x == 8 && y == 8) || (x == 14 && y == 8) || (x == 26 && y == 8) || (x == 30 && y == 8))
			x += 2;
		if ((x == 16 && y == 9) || (x == 22 && y == 9) || (x == 24 && y == 9) || (x == 28 && y == 9) || (x == 34 && y == 9) || (x == 36 && y == 9))
			x += 2;
		if ((x == 6 && y == 10) || (x == 8 && y == 10) || (x == 12 && y == 10) || (x == 18 && y == 10) || (x == 22 && y == 10) || (x == 24 && y == 10) || (x == 30 && y == 10))
			x += 2;
		if ((x == 6 && y == 11) || (x == 10 && y == 11) || (x == 16 && y == 11) || (x == 20 && y == 11) || (x == 24 && y == 11) || (x == 32 && y == 11) || (x == 36 && y == 11))
			x += 2;
		if ((x == 4 && y == 12) || (x == 8 && y == 12) || (x == 12 && y == 12) || (x == 16 && y == 12) || (x == 20 && y == 12) || (x == 26 && y == 12))
			x += 2;
		if ((x == 4 && y == 13) || (x == 8 && y == 13) || (x == 14 && y == 13) || (x == 24 && y == 13) || (x == 30 && y == 13) || (x == 32 && y == 13) || (x == 34 && y == 13))
			x += 2;
		if ((x == 4 && y == 14) || (x == 8 && y == 14) || (x == 10 && y == 14) || (x == 14 && y == 14) || (x == 18 && y == 14) || (x == 22 && y == 14) || (x == 24 && y == 14) || (x == 30 && y == 14))
			x += 2;
		if ((x == 8 && y == 15) || (x == 14 && y == 15) || (x == 20 && y == 15) || (x == 26 && y == 15) || (x == 30 && y == 15) || (x == 32 && y == 15) || (x == 36 && y == 15))
			x += 2;
		if ((x == 2 && y == 16) || (x == 4 && y == 16) || (x == 12 && y == 16) || (x == 18 && y == 16) || (x == 20 && y == 16) || (x == 22 && y == 16) || (x == 28 && y == 16) || (x == 36 && y == 16))
			x += 2;
		if ((x == 8 && y == 17) || (x == 12 && y == 17) || (x == 16 && y == 17) || (x == 20 && y == 17) || (x == 24 && y == 17) || (x == 28 && y == 17) || (x == 32 && y == 17) || (x == 36 && y == 17))
			x += 2;
		if ((x == 4 && y == 18) || (x == 8 && y == 18) || (x == 28 && y == 18) || (x == 32 && y == 18))
			x += 2;
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
	goto label;
}



