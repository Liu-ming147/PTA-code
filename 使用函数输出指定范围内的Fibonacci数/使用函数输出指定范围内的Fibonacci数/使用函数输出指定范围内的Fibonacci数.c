#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
	int m, n, t;

	scanf("%d %d %d", &m, &n, &t);
	printf("fib(%d) = %d\n", t, fib(t));
	PrintFN(m, n);

	return 0;
}

int fib(int n)
{
	int i, j, k, count = 2;
	i = 1;
	j = 1;
	if (n <= 2)
		return 1;
	else
		while (count != n)
		{
			k = i + j;
			i = j;
			j = k;
			count++;
		}
	return k;
}
void PrintFN(int m, int n)
{
	int i = 1;
	int count = 0;
	while (fib(i) < m)
	{
		i++;
	}
	if (fib(i) <= n)
	{
		printf("%d", fib(i));
		count++;
	}	
	while (fib(++i) <= n)
	{
		printf(" %d", fib(i));
		count++;
	}
	if (count == 0)
		printf("No Fibonacci number");
}