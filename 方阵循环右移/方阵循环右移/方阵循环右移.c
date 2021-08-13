#include<stdio.h>

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	int m, n, i, j, k, count, a[6][6], b[6][6];
	scanf("%d %d", &m, &n);
	count = m % n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			b[i][(j + count) % n] = a[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	return 0;
}