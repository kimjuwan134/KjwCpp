#pragma once
#include <iostream>

using namespace std;

class Animal
{
private:
	char blood;
	int age;
	float height;

public:
	Animal(int m_age, float m_height) : age(m_age), height(m_height)
	{
		cout << "age : " << age << endl;
		cout << "height : " << height << endl;
	}

#pragma region this ������

	// ��ü �ڱ� �ڽ��� ����Ű�� ������.

	Animal(char blood, int age, float height)
	{
		this->blood = blood;
		this->age = age;
		this->height = height;


		cout << "��ü�� �ּ� : " << this << endl;
	}

#pragma endregion
};

int* Value()
{
	int data = 10;
	return &data;
}

int main()
{
	//Animal animal('A', 3, 3.25f);

	int* ptr = Value();

	cout << *ptr << endl;
	*ptr = 300;
	cout << *ptr << endl;

	return 0;
}
