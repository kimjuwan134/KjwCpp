#pragma once
#include <iostream>

template <typename T>
class LinkedList
{
private :
	T data;
	int data1;

public :
	LinkedList() = default;

	void Push(T data)
	{
		this->data = data;
		std::cout << "push�� �Ǿ��� data�� �� : " << this->data << std::endl;
	}

};


