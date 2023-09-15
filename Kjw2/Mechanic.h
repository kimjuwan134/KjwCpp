#pragma once
#include <iostream>

using namespace std;

class Mechanic
{
protected :

	int health;
	int attack;

public :

	Mechanic();

	void Move();

	virtual void Attack();

	virtual ~Mechanic();

	// 함수의 오버라이드는 상속 관계에서만 이루어지며, 하위 클래스에서
	// 함수를 재정의할 때 상위 클래스의 함수 형태와 일치해야 합니다.

};

