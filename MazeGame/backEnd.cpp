#include <iostream>
#include<process.h>
#include<windows.h>
#include<conio.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
using namespace std;
int gotoxy(int x, int y)
{
	//Defines the coordinates of a character cell in a console screen buffer
	COORD c;
	c.X = x;
	c.Y = y;
	// Sets the cursor position in the specified console screen buffer
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return 0;
}
void print_maze() {
	char maze[8][8] = {
	{'#','#','#','#','#','#','#','#'},
	{'#','.','.','.','.','.','.','#'},
	{'.','.','#','#','#','.','#','#'},
	{'#','.','.','.','#','.','.','#'},
	{'#','.','#','#','#','#','.','#'},
	{'#','.','.','#','.','.','.','#'},
	{'#','#','.','#','#','.','.','.'},
	{'#','#','#','#','#','#','#','#'}
	};
	cout << endl;





	for (int i = 0; i <= 7; i++) {



		for (int j = 0; j <= 7; j++) {
			cout << maze[i][j] << " ";
		}
		cout << endl;
	}
}



void levelOne()
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
		cout << "Congratulations! You passed level one";
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
		system("CLS");
		cout << "Game over";
		exit(0);
		break;
	}
	goto label;
}