#include "Ghost.h"

Ghost::Ghost()
{
	health = 50;
	maxHP = health;
}

void Ghost::Skill()
{
	cout << "Ŭ��ŷ" << endl;
}

void Ghost::SetHP(int value)
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

int Ghost::GetHP()
{
	return health;
}

void Ghost::RecoveryHP()
{
	health = maxHP;
}
