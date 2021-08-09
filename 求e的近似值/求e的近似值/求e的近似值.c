#include<stdio.h>

double fact(int n)
{
	double sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
int main()
{
	int n, i;
	double sum;
	sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += 1.0 / fact(i);
	}
	printf("%.8lf\n", sum);

	return 0;
}