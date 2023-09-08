#include<stdio.h>

int main()
{
	int N, v;
	scanf_s("%d", &N);
	if (1 <= N <= 100)
	{
		for (int i = 0; i < N; i++)
		{
			scanf_s("%d", &v);
			printf("%d", v);
		}
	}
	
	return 0;
}