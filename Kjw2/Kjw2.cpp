#include <iostream>
#include <list>

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

	list<int> dataList;

	dataList.push_back(10);
	dataList.push_front(50);
	dataList.push_front(25);
	dataList.push_back(33);
	
	// dataList.begin() : ù ��° �ּҸ� ��ȯ
	// dataList.end() : �������� �ִ� �� ���� �ּҸ� ��ȯ

	list<int>::iterator iter;

	for (iter = dataList.begin(); iter != dataList.end(); iter++)
	{
		cout << *iter << endl;
	}

#pragma endregion







	return 0;
}
