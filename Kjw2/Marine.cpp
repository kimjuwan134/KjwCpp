#include "Marine.h"

Marine::Marine()
{
	health = 40;
	maxHP = health;
}

void Marine::Skill()
{
	cout << "스팀팩" << endl;
}

void Marine::SetHP(int value)
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

int Marine::GetHP()
{
	return health;
}

void Marine::RecoveryHP()
{
	health = maxHP;
}
