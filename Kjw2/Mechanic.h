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

	// �Լ��� �������̵�� ��� ���迡���� �̷������, ���� Ŭ��������
	// �Լ��� �������� �� ���� Ŭ������ �Լ� ���¿� ��ġ�ؾ� �մϴ�.

};

