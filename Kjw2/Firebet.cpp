#include "Firebet.h"

void Firebet::Skill()
{
	cout << "������" << endl;
}

void Firebet::SetHP(int value)
{
	if (0 <= value && value <= 100)
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
