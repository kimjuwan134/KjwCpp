#include<stdio.h>

int main()
{
	int arr[100];
	int N, v = 0;

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	
	scanf_s("%d", &v);
	int res = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == v)
		{
			res++;
		}
	}
	printf("%d", res);


	return 0;
}