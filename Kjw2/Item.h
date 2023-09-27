#pragma once
#include <iostream>

using namespace std;


class Item
{
private :
	const char * name;
	int price;
	bool check;

public :
	Item(int price = 0, const char * name = "");

	void Information();
	void SetItem(const char * name, int price);
	void SetCheck(bool check);

	bool GetCheck();

};

