#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main()
{
	int m, n;

	scanf("%d %d", &m, &n);
	if (factorsum(m) == m) printf("%d is a perfect number\n", m);
	if (factorsum(n) == n) printf("%d is a perfect number\n", n);
	PrintPN(m, n);

	return 0;
}

int factorsum(int number)
{
	int sum = 0;
	int i;
	if (number == 1)
	{
		return 0;
	}
	else
	{
		for (i = 1; i < number; i++)
		{
			if (number % i == 0)
			{
				sum += i;
			}
		}
	}
	return sum;
}

void PrintPN(int m, int n)
{
	int i, j;
	int count = 0;
	for (i = m; i <= n; i++)
	{
		if ((factorsum(i) == i))
		{
			printf("%d = 1", i);
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					printf(" + %d", j);
				}
			}
			printf("\n");
			count++;
		}
	}
	if (count == 0)
	{
		printf("No perfect number\n");
	}
}