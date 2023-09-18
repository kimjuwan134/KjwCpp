#include "Marine.h"

void Marine::Skill()
{
	cout << "스팀팩" << endl;
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
		cout << "잘못된 값이 들어왔습니다." << endl;
	}
}

int Marine::GetHP()
{
	return health;
}
