#include <iostream>
#include <map>
#include <set>

using namespace std;


int main()
{
#pragma region std::map

	/*map<string, int> mapData;

	mapData.insert(make_pair("Sword", 5000));
	mapData.insert(make_pair("Armor", 2500));

	map<string, int>::iterator mapIter;

	for (mapIter = mapData.begin(); mapIter != mapData.end(); mapIter++)
	{
		cout << "KEY : " << mapIter->first << endl;
		cout << "VALUE : " << mapIter->second << endl;
	}

	if (mapData.find("Sword") != mapData.end())
	{
		cout << "�����Ͱ� �����մϴ�." << endl;
	}
	else
	{
		cout << "Not key found" << endl;
	}*/

#pragma endregion

#pragma region std::set

	set<int> setData;

	// �ߺ��� ���� ���� �� ���� �����ϰ� �ٽ� ����.
	setData.insert(10);
	setData.insert(20);
	setData.insert(30);
	setData.insert(40);

	set<int>::iterator setIter;
	setIter = setData.begin();
	setData.erase(setIter++);

	for (setIter; setIter != setData.end(); setIter++)
	{
		cout << *setIter << endl;
	}

#pragma endregion



	return 0;
}
