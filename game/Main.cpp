#include <iostream>
#include <windows.h> // For SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c)
#include <conio.h> // For _getch()
using namespace std;



// ASCII codes for arrow keys
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77



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
	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 7; j++) {
			cout << maze[i][j] << " ";
		}
		cout << endl;
	}



	gotoxy(35, 5);
	cout << "PRESS 'i' TO READ INSTRUCTIONS";
	gotoxy(40, 7);
	cout << "PRESS 'm' TO EXIT";
}




int main() {
	int x = 0, y = 2;
	char ch;



	print_maze();
	gotoxy(0, 2);
	cout << "*";



	while (true)
	{
		ch = _getch(); // Returns the ASCII value of the key pressed by the user as an input



		switch (ch)
		{
		case 'a': // For "wasd"
		case KEY_LEFT: // For arrow keys
			system("CLS");
			x--;
			system("CLS");
			print_maze();
			break;




		case 's':
		case KEY_DOWN:
			y++;
			system("CLS");
			print_maze();
			break;




		case 'w':
		case KEY_UP:
			y--;
			system("CLS");
			print_maze();
			break;




		case 'd':
		case KEY_RIGHT:
			x++;
			system("CLS");
			print_maze();
			break;




		default:
			break;
		}
		gotoxy(x, y);
		cout << "*"; // The object we are moving



	}



}