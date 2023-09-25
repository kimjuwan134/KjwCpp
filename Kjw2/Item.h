#pragma once
#include <iostream>

class Item
{
private :
	const char * name;
	int price;
	bool check;

public :
	int x = 0;
	Item(int price = 0, const char * name= "");

	void SetCheck(bool check);

	bool GetCheck();

};

