#include<stdio.h>

double fact(int n)
{
	double sum = 1;
	for (int i = 1; i <= n; ++i)
	{
		sum *= i;
	}
	return sum;
}
int main()
{
	int m, n;
	double result;
	scanf("%d %d", &m, &n);
	result =fact(n) / (fact(m) * fact(n - m));
	printf("result = %.0f\n", result);

	return 0;
}