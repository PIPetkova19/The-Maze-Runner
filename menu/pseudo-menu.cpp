#include <iostream>
#include <windows.h>
#include <conio.h>
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
using namespace std;
int main() {
    int Set[] = { 7,7,7 };
    int counter = 2;
    char key;

    for (int i = 0;;)
    {
        key = _getch();

        gotoxy(10, 5);
        color(Set[0]);
        cout << "1.Menu";

        gotoxy(10, 6);
        color(Set[1]);
        cout << "2.How to play";

        gotoxy(10, 7);
        color(Set[2]);
        cout << "3.Exit";

        if (key == 72 && (counter >= 2 && counter <= 3))
        {
            counter--;
        }
        if (key == 80 && (counter >= 1 && counter <= 2))
        {
            counter++;
        }
       
        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        if (counter == 1)
        {
            Set[0] = 12;
        }
        if (counter == 2)
        {
            Set[1] = 12;
        }
        if (counter == 3)
        {
            Set[2] = 12;
        }
    }
    return 0;
}