#include "Item.h"


Item::Item(int price, const char* name)
{
	this->price = price;
	this->name = name;
}

void Item::Information()
{
	cout << "Name : " << name << endl;
	cout << "Price : " << price << endl;
}

void Item::SetItem(const char * name, int price)
{
	this->price = price;
	this->name = name;
}

void Item::SetCheck(bool check)
{
	this->check = check;
}

bool Item::GetCheck()
{
	return check;
}
