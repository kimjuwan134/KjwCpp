#pragma once
#include <iostream>
#include <list>
#include <vector>

using namespace std;


int main()
{
#pragma region ���ڿ�

	/*string content = "Content";

	cout << "content ������ �� : " << content << endl;
	cout << "content ������ �� : " << content.length() << endl;

	cout << content.find("en") << endl;*/

#pragma endregion

#pragma region ���� �����̳�

	// KEY�� VALUE�� �ϳ��� �������� �̷���� �����̳�.

	/*list<int> dataList;

	dataList.push_back(10);
	dataList.push_front(50);
	dataList.push_front(25);
	dataList.push_back(33);*/

	// dataList.begin() : ù ��° �ּҸ� ��ȯ
	// dataList.end() : �������� �ִ� �� ���� �ּҸ� ��ȯ

	/*dataList.pop_back();

	list<int>::iterator iter;

	iter = dataList.begin();

	dataList.insert(iter, 77);

	for (iter = dataList.begin(); iter != dataList.end(); iter++)
	{
		cout << *iter << endl;
	}*/

	/*vector<int> vectorInt;
	vector<int>::iterator vectorIter;

	vectorInt.reserve(8);

	vectorInt.emplace_back(10);
	vectorInt.emplace_back(20);
	vectorInt.emplace_back(30);
	vectorInt.emplace_back(40);

	vectorIter = vectorInt.begin();
	vectorInt.erase(vectorIter + 2);

	for (int i = 0; i < vectorInt.size(); i++)
	{
		cout << vectorInt[i] << endl;
	}*/


#pragma endregion







	return 0;
}
