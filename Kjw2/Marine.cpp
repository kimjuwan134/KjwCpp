#include "Marine.h"

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHP(int value)
{
	MaxHP = 50;

	if (0 <= value && value <= 50)
	{
		health = value;
	}
	else
	{
		cout << "�߸��� ���� ���Խ��ϴ�." << endl;
	}
}

int Marine::GetHP()
{
	return health;
}
