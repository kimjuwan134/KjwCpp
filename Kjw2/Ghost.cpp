#include "Ghost.h"

void Ghost::Skill()
{
	cout << "Ŭ��ŷ" << endl;
}

void Ghost::SetHP(int value)
{
	if (0 <= value && value <= 150)
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
