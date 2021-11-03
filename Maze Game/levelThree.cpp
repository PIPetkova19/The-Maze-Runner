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
		if (i == 7)
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
		break;

	case KEY_DOWN:
	case 's':
		y++;
		break;


	case KEY_RIGHT:
	case 'd':
		x += 2;
		break;


	case KEY_LEFT:
	case 'a':
		x -= 2;
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



