#include <iostream>
#include<process.h>
#include<windows.h>
#include<conio.h>
#include<string>
#include "levelOne.h"


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_SPACE 32
#define KEY_ENTER 13

using namespace std;

void levelTwo()
{
	int x = 0, y = 3;
	system("CLS");
	char ch;

label:
	system("CLS");
	print_maze();

	gotoxy(x, y);
	cout << "0";
	ch = _getch();


	if (x == 14 && y == 7)
	{
		system("CLS");
		cout << "Congratulations! You passed level two";
		exit(0);
	}

	switch (ch) {



	case KEY_UP:
	case 'w':
		y--;
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

		break;

	case KEY_DOWN:
	case 's':
		y++;


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
		break;

	case KEY_RIGHT:
	case 'a':
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

		break;

	case KEY_LEFT:
	case 'd':
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
		break;


	case 'x':
	case KEY_SPACE:
	case KEY_ENTER:
		system("CLS");
		cout << "Game over";
		exit(0);
		break;
	}
	goto label;
}
