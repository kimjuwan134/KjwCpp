#pragma once
#include <iostream>
using namespace std;

#pragma region Ŭ����
// ����� ���� ������ �������� �Ӽ��� �Լ��� ���ԵǾ�
// ������, Ŭ������ ���� ��ü�� �����Ͽ� �����ϰ� �����
// �� �ִ� ����ü.

class GameObject
{
	// ���� ������
	// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������
	// �����ϴ� ������.

	// public
	// Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���� �׸��� Ŭ���� �ܺο���
	// ������ ����ϴ� ������.

	// protected
	// Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ����������, ������
	// ����ϴ� ������.

	// private
	// Ŭ���� ���ο����� ������ ����ϴ� ������.

	// �⺻ ���� ������ (private)


public:
	float x;

	void SendMessage()
	{
		cout << "�޼���" << endl;
	}

protected:
	float y;
private:
	double z;
};

#pragma endregion

#pragma region �����ڿ� �Ҹ���
// <������>
// Ŭ������ �ν��Ͻ��� �����Ǵ� �������� �ڵ�����
// ȣ��Ǵ� Ư���� ��� �Լ�.

class Monster
{
private:
	int health;
public:
	Monster()
	{
		cout << "Monster ����" << endl;
	}

	// �������� ��� ��ü�� ������ �� �� �ѹ��� ȣ��Ǹ�,
	// �����ڴ� ��ȯ���� �������� �ʱ� ������
	// �����ڰ� ȣ��Ǳ� ������ ��ü�� ���� �޸𸮴� �Ҵ����� �ʴ´�.

	// <�Ҹ���>
	// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ�.
	~Monster()
	{
		cout << "Monster �Ҹ�" << endl;
	}

	// �Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� �� �ѹ��� ȣ��Ǹ�,
	// �Ҹ��ڿ��� �Ű������� �����Ͽ� ����� �� ����.
};


#pragma endregion


int main()
{
#pragma region Ŭ����


	//GameObject gameObject1;
	//GameObject gameObject2;

	//cout << sizeof(GameObject) << endl;
	//gameObject1.SendMessage();
	//gameObject2.SendMessage();


	//gameObject1.x = 100;
#pragma endregion

#pragma region �����ڿ� �Ҹ���

	Monster monster;

	Monster* ptr = new Monster;

	delete ptr;



#pragma endregion

	return 0;
}
