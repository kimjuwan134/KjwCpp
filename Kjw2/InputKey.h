#pragma once
#include <conio.h>
#include <Windows.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

class InputKey
{
private :
	int x;
	int y;
	char key;

public :
	InputKey();
	void Move();
	void GotoXY(int x, int y);

	int GetX();
	int GetY();

};

