#include <iostream>

using namespace std;


#pragma region final

// ���� Ŭ�������� �� �̻� �������� �� ������ �����ϴ� ���.

class Hero
{
public :
	virtual void BasicSkill() {};
	virtual void MagicSkill() {};

};

class Crusaders : public Hero
{
public :
	void BasicSkill() {};
	void MagicSkill() final {};

};

class Fighter : public Crusaders
{
public :
	void BasicSkill() {};
	// void MagicSkill() {}; ERROR
};


#pragma endregion


int main()
{



	return 0;
}
