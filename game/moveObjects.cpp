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
int main() {
    int x = 30, y = 5;
    char ch;
    while (true)
    {
        ch = _getch(); // Returns the ASCII value of the key pressed by the user as an input
        switch (ch)
        {
        case 'a': // For "wasd"
        case KEY_LEFT: // For arrow keys
            x--;
            system("CLS");
            break;
        case 's':
        case KEY_DOWN:
            y++;
            system("CLS");
            break;
        case 'w':
        case KEY_UP:
            y--;
            system("CLS");
            break;
        case 'd':
        case KEY_RIGHT:
            x++;
            system("CLS");
            break;
        default:
            break;
        }
        gotoxy(x, y);
        cout << "*"; // The object we are moving

    }

}
