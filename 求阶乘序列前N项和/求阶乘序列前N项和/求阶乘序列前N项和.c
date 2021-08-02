#include<stdio.h>

int fact(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; ++i)
	{
		sum *= i;
	}
	return sum;
}

int main()
{
	int n, i, sum;
	sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i)
	{
		sum += fact(i);
	}
	printf("%d\n", sum);

	return 0;
}