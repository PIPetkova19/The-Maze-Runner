#pragma once

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_SPACE 32
#define KEY_ENTER 13

#include <string>
void printMazeOne();
void levelOne();
int gotoxy(int x, int y);
void changeLevelOne(std::string answer);
