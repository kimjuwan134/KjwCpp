#include<stdio.h>

int main()
{
	int N = 0;

	int min = 1000000;
	int max = -1000000;
	int input = 0;

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &input);
		if (input < min)
		{
			min = input;
		}
		if (input > max)
		{
			max = input;
		}
	}
	printf("%d %d", min, max);



	return 0;
}