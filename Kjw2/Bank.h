#pragma once
#include "Player.h"

#pragma region Ŭ������ ���� ����

// ���ʿ��� ��� ������ �����ϰ� ���ԵǴ� ���� �����ϸ�,
// ��������δ� ������ �ӵ��� ����ŵ�ϴ�.

#pragma endregion

class Bank
{
private :
	int bankMoney = 0;

public :
	void Withdrawal(Player & player, int money);

	void ShowInfo();
};

