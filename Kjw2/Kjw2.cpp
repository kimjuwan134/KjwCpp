#include <iostream>
#include "Camera.h"

using namespace std;

#pragma region ���
// ���� Ŭ������ �Ӽ��� ���� Ŭ������ ����� �� �ֵ��� �������ִ� ���.

class Vehicle
{
protected:
	float speed;
	static int killCount;

public:
	Vehicle()
	{
		cout << "Vehicle ������Ʈ ����" << endl;
	}
	~Vehicle()
	{
		cout << "Vehicle ������Ʈ ����" << endl;
	}
	void Movement()
	{
		cout << "�̵�" << endl;
	}
	static int GetCount()
	{
		return killCount;
	}
};

int Vehicle::killCount = 0;

class Car : public Vehicle
{
private:
	int carID;

public :
	Car()
	{
		carID = 1;
		speed = 100;
		cout << "Car ������Ʈ ����" << endl;
	}
	~Car()
	{
		cout << "Car ������Ʈ ����" << endl;
		cout << "killCount " << killCount++ << endl;
	}
};

// Ŭ������ ��� ���迡�� ���� Ŭ������ ���� Ŭ������ �Ӽ��� ����� ��
// ������, ���� Ŭ������ ���� Ŭ������ �޸𸮸� ������ ���·� �޸���
// ũ�Ⱑ ����.

#pragma endregion

int main()
{
#pragma region ���

	Vehicle vehicle;

	Car car1;
	Car car2;
	Car car3;

	Vehicle::GetCount();

	cout << "car�� ũ�� : " << sizeof(Car) << endl;
	cout << "vehicle�� ũ�� : " << sizeof(vehicle) << endl;

#pragma endregion

#pragma region Ŭ���� ���Ұ� ����

	//Camera camera;

	//camera.Information();

#pragma endregion

	return 0;
}
