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
		cout << " ";
		for (int j = 0; j <= 7; j++) {
			cout << maze[i][j] << " ";
		}
		cout << endl;
	}
}




void movingObject(int x, int y) {
	char ch;



	while (true)
	{
		ch = _getch();
		switch (ch) {
		case 'w':
		case KEY_UP:
			y--;
			system("CLS");
			print_maze();



			break;
		case 's':
		case KEY_DOWN:
			y++;
			system("CLS");
			print_maze();



			break;
		case 'd':
		case KEY_RIGHT:
			x += 2;
			system("CLS");
			print_maze();



			break;
		case 'a':
		case KEY_LEFT:
			x -= 2;
			system("CLS");
			print_maze();



			break;
		case 'x':
			exit(0);
			break;
		}
		gotoxy(x, y);
		cout << "*";
	}
}




void checkWall() {
	int x = 1, y = 3;
	system("CLS");



label:
	system("CLS");
	print_maze();



	bool flag = true;
	gotoxy(x, y);
	cout << "*";



	do {
		movingObject(x, y);

		if (x == 15 && y == 7) {
			system("CLS");
			cout << "Congratulations!";
			exit(0);
			flag = false;
		}



		if (x == 5)
		{
			x = 4;
		}

		if (x == 6 && y == 3) {
			x -= 2;
			y = 3;
		}



		if (x == 16) {
			x = 14;
		}

		if (y == 1)
		{
			y = 2;
		}

		if (y == 8)
		{
			y = 7;
		}

		goto label;
	} while (flag == true);
}