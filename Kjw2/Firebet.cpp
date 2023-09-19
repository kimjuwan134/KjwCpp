#include "Firebet.h"

Firebet::Firebet()
{
	health = 45;
	maxHP = health;
}

void Firebet::Skill()
{
	cout << "������" << endl;
}

void Firebet::SetHP(int value)
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

int Firebet::GetHP()
{
	return health;
}

void Firebet::RecoveryHP()
{
	health = maxHP;
}
