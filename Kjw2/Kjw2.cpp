#include <iostream>
#include "Vulture.h"

using namespace std;


#pragma region ������

// ���� ���� ���� �ٸ� ��ü�� ������ ����� ���� �ٸ� �������
// ó���� �� �ִ� �۾�.

// �������� ������ ������ �Լ��� �Ӽ��� �����Ǵ� ���� ���ε��� ���� �ʰ�
// ���� �ð��� �Լ��� �Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� ��.

#pragma endregion


int main()
{
#pragma region �������̵�

	//Mechanic mechanic;
	//mechanic.Move();

	//Vulture vulture;
	//vulture.Move();

#pragma endregion

#pragma region ���� �Լ�

	// ����ϴ� Ŭ���� ������ ���� ������ �Լ��� ������ �� �� �ִ� �Լ�.

	Mechanic * mechanic1 = new Vulture;

	cout << "��ī���� ũ�� : " << sizeof(Mechanic) << endl;
	cout << "��ó�� ũ�� : " << sizeof(Vulture) << endl;

	mechanic1->Move();
	mechanic1->Attack();

	// ���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������ ���� Ŭ������
	// �����ǵ� �Լ��� ȣ���� �� ������, ���� �����ڴ� ������ �����ؾ� ��.

#pragma endregion



	return 0;
}
