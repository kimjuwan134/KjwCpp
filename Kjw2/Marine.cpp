#include "Marine.h"

Marine::Marine()
{
	health = 40;
	maxHP = health;
}

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHP(int value)
{
	if (0 <= value && value <= maxHP)
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

void Marine::RecoveryHP()
{
	health = maxHP;
}
