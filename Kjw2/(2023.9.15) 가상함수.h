#pragma once
#include <iostream>
#include "Vulture.h"
#include "SiegeTank.h"
#include "Goliath.h"

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

	//Mechanic * mechanic1 = new Vulture;

	// cout << "��ī���� ũ�� : " << sizeof(Mechanic) << endl;
	// cout << "��ó�� ũ�� : " << sizeof(Vulture) << endl;

	// ���� �Լ��� �� �� �̻��� ���� �Լ��� �����ϴ� Ŭ������ ���� �� ��ü �ּҿ� ���� �Լ� ���̺��� �߰�.

	//mechanic1->Move();
	//mechanic1->Attack();

	// ���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������ ���� Ŭ������
	// �����ǵ� �Լ��� ȣ���� �� ������, ���� �����ڴ� ������ �����ؾ� ��.

#pragma endregion

#pragma region ����

	// ��Ÿũ����Ʈ�� ���丮 ����.

	/*int selectNumber = 0;
	int count = 5;

	while (count)
	{
		cin >> selectNumber;

		if (1 <= selectNumber && selectNumber <= 3)
		{
			switch (selectNumber)
			{
			case 1:
			{
				Mechanic* mechnic1 = new Vulture;
				mechnic1->Attack();
				break;
			}
			case 2:
			{
				Mechanic* mechnic2 = new SiegeTank;
				mechnic2->Attack();
				break;
			}
			case 3:
			{
				Mechanic* mechnic3 = new Goliath;
				mechnic3->Attack();
				break;
			}
			}
		}
		else
		{
			count++;
		}
		count--;
	}*/

	// ���� �Լ��� ��� ���� �Լ� ���̺��� ����Ͽ� ȣ��Ǵ� �Լ��� ���� �ð���
	// �����ϸ�, �������� ����� �Լ��� ���� �Լ��� ������ �� �����ϴ�.

#pragma endregion

#pragma region ���� �Ҹ���

	// ��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� ������� ���
	// ȣ��Ǵ� �Ҹ���.

	Mechanic* unit1 = new Vulture;
	Mechanic* unit2 = new SiegeTank;
	Mechanic* unit3 = new Goliath;

	delete unit1;
	delete unit2;
	delete unit3;

	// ���� �Ҹ��ڴ� ��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ�
	// ���� ����ǰ� ���� Ŭ������ �Ҹ��ڰ� ����Ǿ�� �ϱ� ������
	// ���� �ð��� �޸𸮿� �Ҵ�� ��ü�� Ȯ���ϰ� ���ʴ�� �Ҹ���Ѿ� ��.

#pragma endregion



	return 0;
}
