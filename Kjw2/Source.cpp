#include<iostream>
using namespace std;

int main()
{
	int N, M, a, j, k;
	int arr[100] = { 0, };

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> a >> j >> k;

		for (int i = a; i <= j; i++)
		{
			arr[i - 1] = k;
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}