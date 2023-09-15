#pragma once
#include "Mechanic.h"


class Vulture : public Mechanic
{
public :

	Vulture();

#pragma region 함수의 오버라이딩

	// 상위 클래스에 있는 함수를 하위 클래스에서 재정의하여
	// 사용하는 기능.

	void Move();

	virtual void Attack() override;

	~Vulture();

#pragma endregion

};

