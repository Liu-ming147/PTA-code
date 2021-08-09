#include<stdio.h>
int main()
{
	int m, n, i, j, sum, count;
	count = 0;
	scanf("%d %d", &m, &n);
	for (m; m <= n; m++)
	{
		sum = 0;
		for (i = 1; i <= m / 2; i++)
		{
			if (m % i == 0)
			{
				sum += i;
			}

		}
		if (sum == m)
		{
			printf("%d = 1", m);
			for (i = 2; i <= m / 2; i++)
			{
				if (m % i == 0)
				{
					printf(" + %d", i);
				}
			}
			printf("\n", m / 2);
			count++;
		}
	}
	if (count == 0)
		printf("None\n");

	return 0;
}