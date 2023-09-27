#pragma once
#include <iostream>
#include "Inventory.h"


int main()
{
	Inventory inventory;
	InputKey inputKey;

	for (int i = 0; i < 3; i++)
	{
		inventory.AddItem();
	}


	while (1)
	{
		inventory.Renderer();
		inputKey.Move();
		inventory.SelectNumber(inputKey);
		inventory.ShowItem(inputKey);
		Sleep(100);
		system("cls");
	}


	return 0;
}
