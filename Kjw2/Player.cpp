#include "Player.h"

void Player::ShowInfo()
{
	std::cout << "Player Money : " << money << std::endl;
}

int Player::GetPlayerMoney()
{
	return money;
}
