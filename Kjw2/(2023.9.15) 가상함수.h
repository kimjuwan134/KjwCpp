#pragma once
#include <iostream>
#include "Vulture.h"
#include "SiegeTank.h"
#include "Goliath.h"

using namespace std;


#pragma region 다형성

// 여러 개의 서로 다른 객체가 동일한 기능을 서로 다른 방법으로
// 처리할 수 있는 작업.

// 다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을 하지 않고
// 실행 시간에 함수와 속성이 결정될 수 있는 동적 바인딩을 가능하게 함.

#pragma endregion


int main()
{
#pragma region 오버라이드

	//Mechanic mechanic;
	//mechanic.Move();

	//Vulture vulture;
	//vulture.Move();

#pragma endregion

#pragma region 가상 함수

	// 상속하는 클래스 내에서 같은 형태의 함수로 재정의 될 수 있는 함수.

	//Mechanic * mechanic1 = new Vulture;

	// cout << "메카닉의 크기 : " << sizeof(Mechanic) << endl;
	// cout << "벌처의 크기 : " << sizeof(Vulture) << endl;

	// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가 있을 때 객체 주소에 가상 함수 테이블을 추가.

	//mechanic1->Move();
	//mechanic1->Attack();

	// 가상 함수 실행 시간에 상위 클래스에 대한 참조로 하위 클래스에
	// 재정의된 함수를 호출할 수 있으며, 접근 지정자는 공개로 설정해야 함.

#pragma endregion

#pragma region 과제

	// 스타크래프트의 팩토리 구현.

	/*int selectNumber = 0;
	int count = 5;

	while (count)
	{
		cin >> selectNumber;

		if (1 <= selectNumber && selectNumber <= 3)
		{
			switch (selectNumber)
			{
			case 1:
			{
				Mechanic* mechnic1 = new Vulture;
				mechnic1->Attack();
				break;
			}
			case 2:
			{
				Mechanic* mechnic2 = new SiegeTank;
				mechnic2->Attack();
				break;
			}
			case 3:
			{
				Mechanic* mechnic3 = new Goliath;
				mechnic3->Attack();
				break;
			}
			}
		}
		else
		{
			count++;
		}
		count--;
	}*/

	// 가상 함수의 경우 가상 함수 테이블을 사용하여 호출되는 함수를 실행 시간에
	// 결정하며, 정적으로 선언된 함수는 가상 함수로 선언할 수 없습니다.

#pragma endregion

#pragma region 가상 소멸자

	// 객체가 소멸될 때 현재 참조하고 있는 객체와 상관없이 모두
	// 호출되는 소멸자.

	Mechanic* unit1 = new Vulture;
	Mechanic* unit2 = new SiegeTank;
	Mechanic* unit3 = new Goliath;

	delete unit1;
	delete unit2;
	delete unit3;

	// 가상 소멸자는 상속된 객체가 해제될 때 하위 클래스의 소멸자가
	// 먼저 실행되고 상위 클래스의 소멸자가 실행되어야 하기 때문에
	// 실행 시간에 메모리에 할당된 객체를 확인하고 차례대로 소멸시켜야 함.

#pragma endregion



	return 0;
}
