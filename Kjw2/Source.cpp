#include<iostream>

using namespace std;


int main()
{
	int a, b;
	int arr[30] = {0, };

	//for (int i = 0; i < 30; i++)
	//{
	//	arr[i] += i + 1
	//}

	for (int i = 0; i < 28; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 30; i++)
	{
		if (arr[i] == 0)
		{
			a = arr[i];
		}
	}


	return 0;
}