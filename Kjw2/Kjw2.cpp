#include <iostream>
#include <list>

using namespace std;


int main()
{
#pragma region 문자열
	
	/*string content = "Content";

	cout << "content 변수의 값 : " << content << endl;
	cout << "content 변수의 값 : " << content.length() << endl;

	cout << content.find("en") << endl;*/

#pragma endregion

#pragma region 연관 컨테이너

	// KEY와 VALUE가 하나의 구성으로 이루어진 컨테이너.

	list<int> dataList;

	dataList.push_back(10);
	dataList.push_front(50);
	dataList.push_front(25);
	dataList.push_back(33);
	
	// dataList.begin() : 첫 번째 주소를 반환
	// dataList.end() : 마지막에 있는 그 다음 주소를 반환

	list<int>::iterator iter;

	for (iter = dataList.begin(); iter != dataList.end(); iter++)
	{
		cout << *iter << endl;
	}

#pragma endregion







	return 0;
}
