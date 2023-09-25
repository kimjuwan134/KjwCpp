#include "Inventory.h"


Inventory::Inventory(int x, int y)
{
	size = x * y;
	items = new Item[size];

	for (int i = 0; i < size; i++)
	{
		items[i].SetCheck(false);
	}


}

void Inventory::Renderer()
{
	for (int i = 0; i < size; i++)
	{
		if (items[i].GetCheck() == false)
		{
			if (i != 0 && i % 5 == 0)
			{
				std::cout << endl;
			}

			std::cout << "бр";

		}
	}
}


