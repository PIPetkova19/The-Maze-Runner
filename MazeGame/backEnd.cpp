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
		cout << "  ";
		for (int j = 0; j <= 7; j++) {
			cout << maze[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int x = 2, y = 3;
	system("CLS");
	char ch;
label:
	system("CLS");
	print_maze();
	if (x == 16 && y == 7) {
		system("CLS");
		cout << "Congratulations!";
		exit(0);
	}


	if (x == 2)
		x = 4;
	if (x == 6 && y == 3) {
		x -= 2;
		y = 3;
	}

	if (x == 16)
		x = 14;
	if (y == 1)
		y = 2;
	if (y == 8)
		y = 7;
	gotoxy(x, y);
	cout << "0";
	ch = _getch();
	switch (ch) {
	case 'w': y--;
		break;
	case 's': y++;
		break;
	case 'd': x += 2;
		break;
	case 'a': x -= 2;
		break;
	case KEY_UP: y--;
		break;
	case KEY_DOWN: y++;
		break;
	case KEY_RIGHT: x += 2;
		break;
	case KEY_LEFT: x -= 2;
		break;
	case 'x': exit(0);
		break;
	}
	goto  label;

}
