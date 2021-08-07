#include<stdio.h>

int divisor(int m, int n)
{
	int t;
	while (n != 0)
	{
		t = m % n;
		m = n;
		n = t;
	}
	return m;
}

int multiple(int m, int n)
{
	int mul = m * n / divisor(m, n);
	return mul;
}

int main()
{
	int m, n, div, mul;
	scanf("%d %d", &m, &n);
	printf("%d %d", divisor(m, n), multiple(m, n));

	return 0;
}