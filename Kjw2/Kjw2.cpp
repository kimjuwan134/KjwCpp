#include <iostream>

using namespace std;


#pragma region final

// 하위 클래스에서 더 이상 재정의할 수 없도록 선언하는 기능.

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
