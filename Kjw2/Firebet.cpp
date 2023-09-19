#include "Firebet.h"

Firebet::Firebet()
{
	health = 45;
	maxHP = health;
}

void Firebet::Skill()
{
	cout << "스팀팩" << endl;
}

void Firebet::SetHP(int value)
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

int Firebet::GetHP()
{
	return health;
}

void Firebet::RecoveryHP()
{
	health = maxHP;
}
