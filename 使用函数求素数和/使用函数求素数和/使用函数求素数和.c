#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

int main()
{
	int m, n, p;

	scanf("%d %d", &m, &n);
	printf("Sum of ( ");
	for (p = m; p <= n; p++) {
		if (prime(p) != 0)
			printf("%d ", p);
	}
	printf(") = %d\n", PrimeSum(m, n));

	return 0;
}

int prime(int p)
{
	int i;
	if (p < 2)
		return 0;
	else
	{
		for (i = 2; i <= sqrt(p); ++i)
		{
			if (p % i == 0)
			{
				break;
			}
		}
		if (i > sqrt(p))
			return 1;
		return 0;
	}
	
}
int PrimeSum(int m, int n)
{
	int sum = 0;
	for (m; m <= n; ++m)
	{
		if (prime(m) == 1)
			sum += m;
	}
	return sum;
}