#include <iostream>
#include <vector>
#include <time.h>
#include "InputKey.h"

using namespace std;


#pragma region ���� �����̳�

// �����͸� �������� �����ϸ�, Ư���� �����̳� ��Ģ�� ���� �Ϲ����� �����̳�.

#pragma endregion

int life;
int answer;
int createCount;

void Init()
{


	//srand(time(NULL));

	//note.push_back("��");
	//note.push_back("��");
	//note.push_back("��");
	//note.push_back("��");
	//
	//for (int i = 0; i < 6; i++)
	//{
	//	cout << note[rand() % 4];
	//}


}

void Update()
{

}

void Render()
{

}

int main()
{
#pragma region Vector �����̳�

	//vector<int> vector;

	//// push_back( ) : �� �ʿ� �����͸� �����ϴ� �Լ�.

	//vector.push_back(10);
	//vector.push_back(20);
	//vector.push_back(30);

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}

	//vector.push_back(40);
	//vector.push_back(50);

	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}

	//vector.pop_back();

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

#pragma endregion

#pragma region ���� ����

	//Init();
	srand(time(NULL));
	vector<const char*> note;
	life = 5;
	createCount = 5;

	for (int i = 0; i < createCount; i++)
	{
		int random = rand() % 4;

		switch (random)
		{
		case 0: note.push_back("��");
			break;
		case 1: note.push_back("��");
			break;
		case 2: note.push_back("��");
			break;
		case 3: note.push_back("��");
			break;
		}
	}

	for (int i = 0; note.size(); i++)
	{
		cout << note[i] << " ";
	}

	//while (life > 0)
	//{

	//}




#pragma endregion


	return 0;
}
