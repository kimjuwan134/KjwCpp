#include<iostream>
using namespace std;

int main()
{
	int N, M, a, b;
	int arr[100];

	cin >> N >> M;

	for (int i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		for (int i = a; i <= b; i++)
		{
			arr[a - 1] = arr[b - 1];
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}