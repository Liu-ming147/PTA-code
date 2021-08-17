#include <stdio.h>
#include <math.h>

int prime(int p);
void Goldbach(int n);

int main()
{
	int m, n, i, cnt;

	scanf("%d %d", &m, &n);
	if (prime(m) != 0) printf("%d is a prime number\n", m);
	if (m < 6) m = 6;
	if (m % 2) m++;
	cnt = 0;
	for (i = m; i <= n; i += 2) {
		Goldbach(i);
		cnt++;
		if (cnt % 5) printf(", ");
		else printf("\n");
	}

	return 0;
}

int prime(int p)
{
	int i;
	if (p >= 2)
	{
		for (i = 2; i < sqrt(p); i++)
		{
			if (p % i == 0)
				break;
		}
		if (i > sqrt(p))
			return 1;
	}
	return 0;
}
void Goldbach(int n)
{
	int i, j;
	for (i = 3; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (prime(i) == 1 && prime(j) == 1 && i + j == n)
			{
				printf("%d=%d+%d", n, i, j);
				return 0;
			}
		}
	}
}