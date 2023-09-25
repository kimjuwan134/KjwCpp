#pragma once
#include <iostream>
#include "Computer.h"
#include "Player.h"
#include "Bank.h"

using namespace std;


int main()
{
#pragma region ���� ���

	// �ϳ��� ���� Ŭ������ ���� ���� ���� Ŭ������ ��ӹ޴� ��.

	//Computer computer;
	//computer.Use();


#pragma endregion

#pragma region Friend

	// Friend�� ����� Ŭ������ private �� protected ����� ������ �� 
	// �ֵ��� ������ �ִ� ���.

	Player player;
	player.ShowInfo();

	Bank bank;
	bank.Withdrawal(player, 15000);

	player.ShowInfo();
	bank.ShowInfo();


#pragma endregion



	return 0;
}
