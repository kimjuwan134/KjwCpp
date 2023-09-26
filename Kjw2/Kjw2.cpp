#include <iostream>
#include "Inventory.h"


int main()
{
	Inventory inventory;
	InputKey inputKey;

	for (int i = 0; i < 13; i++)
	{
		inventory.AddItem();
	}

	inventory.Renderer();

	while (1)
	{
		inputKey.Move();
	}


	return 0;
}
