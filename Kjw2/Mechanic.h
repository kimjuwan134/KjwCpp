#pragma once
#include <iostream>

using namespace std;

class Mechanic
{
protected :

	int health;
	int attack;

public :

	void Move();

	virtual void Attack();

	// �Լ��� �������̵�� ��� ���迡���� �̷������, ���� Ŭ��������
	// �Լ��� �������� �� ���� Ŭ������ �Լ� ���¿� ��ġ�ؾ� �մϴ�.

};

