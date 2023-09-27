#include "Inventory.h"
#include "InputKey.h"


Inventory::Inventory(int x, int y)
{
	selectIndex = 0;
	lineX = x;
	size = x * y;
	items = new Item[size];

	for (int i = 0; i < size; i++)
	{
		items[i].SetCheck(false);
	}
}

void Inventory::ShowItem(InputKey inputKey)
{
	inputKey.GotoXY(0, 10);

	if (items[selectIndex].GetCheck() != false)
	{
		items[selectIndex].Information();
	}
	else
	{
		cout << "Item이 존재하지 않습니다." << endl;
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
				cout << endl;
			}
			cout << "□";
		}
		else if (items[i].GetCheck() == true)
		{
			if (i != 0 && i % 5 == 0)
			{
				cout << endl;
			}
			cout << "■";
		}
	}
}

void Inventory::AddItem()
{
	for (int i = 0; i < size; i++)
	{
		if (items[i].GetCheck() == false)
		{
			items[i].SetItem("포션", 100);
			items[i].SetCheck(true);
			break;
		}

		if (i == size - 1)
		{
			if (items[i].GetCheck() == true)
			{
				cout << "인벤토리가 가득 찼습니다." << endl;
			}
		}
	}
}

void Inventory::SelectNumber(InputKey inputkey)
{
	int resultx = inputkey.GetX() / 2;

	int resulty = inputkey.GetY() * lineX;

	selectIndex = resultx + resulty;
}

