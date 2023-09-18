#include <iostream>
#include "Marine.h"
#include "Firebet.h"
#include "Ghost.h"

using namespace std;

#pragma region �Լ��� �����ε�

// ���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű� ������ ���� �����Ͽ�
// ���� ���� ������ �� �ִ� ���.

void Calculator(int x, int y)
{
	cout << "x + y : "  << x + y << endl;
}

void Calculator(int x, int y, int z)
{
	cout << "x + y : " << x + y << endl;
}

void Calculator(float x, float y)
{
	cout << "x + y : "  << x + y << endl;
}

void Calculator(char x, char y)
{
	cout << "x + y : " << x + y << endl;
}

// �Լ��� �����ε��� �Լ��� �Ű� ������ �����ϴ� �μ��� ���¸�
// ���� ȣ���ϹǷ�, ��ȯ������ �Լ��� �����ε��� �����Ұ�.
// int Calculator(float x, float y)
// {
// 
// }

#pragma endregion

void Recovery(Unit * unit)
{
	return MaxHP;
}

int main()
{
#pragma region �Լ��� �����ε�

	// Calculator(5.75, 6.25f);
	// Calculator(10, 20);
	// Calculator('A', 'B');

#pragma endregion

#pragma region ���� ���� �Լ�

	// �Լ��� ���� �� �� ������, �ش� Ŭ�������� ������ �� �� ����
	// ��ӹ��� ���� Ŭ�������� �ݵ�� �����Ǹ� �ؾ��ϴ� ��� �Լ�.

	Unit * marine = new Marine;
	Unit * firebet = new Firebet;
	Unit * ghost = new Ghost;

	marine->SetHP(100);
	marine->Skill();
	cout << "health : " << marine->GetHP() << endl;

#pragma endregion




	return 0;
}
