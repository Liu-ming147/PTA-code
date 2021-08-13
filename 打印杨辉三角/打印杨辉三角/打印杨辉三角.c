#include<stdio.h>
int main()
{
	int n, i, j, num, a[10][10];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n - 1; j++)
		{
			printf(" ");
		}
		printf("%4d", 1);
		a[i][0] = a[i][i] = 1;
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			printf("%4d", a[i][j]);
		}
		if (i > 0)
			printf("%4d", 1);
		printf("\n");
	}

	return 0;
}