#include<stdio.h>
int main()
{
	int n, i, j, sum;
	sum = 0;
	int a[10][10];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (i != (n - 1 - j))
				sum += a[i][j];
		}
	}
	printf("%d\n", sum);

	return 0;
}