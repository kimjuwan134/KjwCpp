#pragma once
#include <iostream>


int main()
{
#pragma region ��Ʈ��
	// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧.

	char alphabet = 'A';
	int data = 100;
	float x = 3.75f;

	// ��Ʈ���� ��� �Էµ� �����ʹ� ��� ��ġ�� �����ϸ�,
	// "<<" �����ڸ� ����Ͽ� �ڽ��� ������ ���� ��ȯ.
	// std::cout << "data�� �� : " << data << std::endl;
	// std::cout << "alphabet�� �� : " << (int)alphabet << std::endl;

	// std::cin >> data;

	// ��Ʈ������ �Է¹��� �� ">>" �����ڸ� ����Ͽ� ���ۿ�
	// ������ ������ NULL ���ڱ����� ���� ���� ������ ����մϴ�.
	// std::cout << "data�� �� : " << data << std::endl;


	// ��Ʈ���� �ü���� ���� �����Ǹ�, ��Ʈ�� ��ü�� ���۶�� �ӽ� �޸� ������ ����.



#pragma endregion

#pragma region ���� �Ҵ�� ����
	/*
	int* ptr = new int;

	*ptr = 255;

	std::cout << "ptr�� ����Ű�� �� : " << *ptr << std::endl;

	delete ptr;

	ptr = nullptr;

	ptr = new int[5];

	for (int i = 0; i < 5; i++)
	{
		ptr[i] = i;
		std::cout << ptr[i] << std::endl;
	}

	delete [] ptr;
	*/
#pragma endregion

#pragma region ������

	/*int value = 200;
	int& ref = value;

	std::cout << "value�� �� : " << value << std::endl;
	std::cout << "ref�� �� : " << ref << std::endl;

	ref = 999;

	std::cout << "value�� �� : " << value << std::endl;
	std::cout << "ref�� �� : " << ref << std::endl;*/

#pragma endregion

#pragma region ���� ��� for��

	//int dataList[5] = { 1,2,3,4,5 };
	//for (const int & element : dataList)
	//{
	//	std::cout << element << std::endl;
	//}


#pragma endregion



	return 0;
}
