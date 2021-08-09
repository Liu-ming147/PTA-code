#include<stdio.h>

int fib(int m)
{
	if (m == 1 || m == 2)
		return 1;
	return fib(m - 1) + fib(m - 2);
}
int main()
{
	int m, n, sum;
	sum = 1;
	m = 1;
	scanf("%d", &n);
	while (sum < n)
	{
		m++;
		sum = fib(m);
	}
	printf("%d\n", m);

	return 0;
}