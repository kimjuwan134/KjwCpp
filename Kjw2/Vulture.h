#pragma once
#include "Mechanic.h"


class Vulture : public Mechanic
{
public :

	Vulture();

#pragma region �Լ��� �������̵�

	// ���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� �������Ͽ�
	// ����ϴ� ���.

	void Move();

	virtual void Attack() override;

	~Vulture();

#pragma endregion

};

