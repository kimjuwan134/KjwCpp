#pragma once
#include "Item.h"
#include "InputKey.h"

class Inventory
{
private :
	int size;
	int lineX;
	int selectIndex;
	Item * items;

public :
	Inventory(int x = 5, int y = 3);

	void ShowItem(InputKey inputKey);
	void Renderer();
	void AddItem();
	void SelectNumber(InputKey inputkey);

};

