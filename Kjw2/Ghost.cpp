#include "Ghost.h"

void Ghost::Skill()
{
	cout << "클로킹" << endl;
}

void Ghost::SetHP(int value)
{
	if (0 <= value && value <= 150)
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
