#include "Ghost.h"

Ghost::Ghost()
{
	health = 50;
	maxHP = health;
}

void Ghost::Skill()
{
	cout << "클로킹" << endl;
}

void Ghost::SetHP(int value)
{
	if (0 <= value && value <= maxHP)
	{
		health = value;
	}
	else
	{
		cout << "잘못된 값이 들어왔습니다." << endl;
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
