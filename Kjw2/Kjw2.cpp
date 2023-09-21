#include <iostream>
#include "LinkedList.h"

using namespace std;


#pragma region ���ø�

// ������ ���Ŀ� �������� �ʰ�, �ϳ��� ���� ���� �ٸ� ������ Ÿ�Ե���
// ���� �� �ִ� ����� ������ �ξ� ���뼺�� ���� �� �ִ� ���.

template <typename T>
void Add(T value1, T value2)
{
	cout << value1 + value2 << endl;
}

template <>
void Add(char value1, char value2)
{
	cout << value1 << " : " << value2 << endl;
}

template<typename T1, typename T2>
void Add(T1 value1, T2 value2)
{
	cout << value1 + value2 << endl;
}


#pragma endregion


int main()
{
#pragma region ���ø�

	//Add(10, 20);
	//Add('A', 'B');
	//Add(5.75f, 4.85f);

#pragma endregion

	LinkedList<int> linkedList;
	linkedList.Push(10);


	return 0;
}
