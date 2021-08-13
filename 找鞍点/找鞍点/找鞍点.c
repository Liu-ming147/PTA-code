#include<stdio.h>
int main()
{
	int n, a[6][6], i, j, k, count1, count2, max;
	count1 = count2 = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		max = 0;
		count1 = 0;
		for (j = 1; j < n; j++)
		{
			if (a[i][j] >= a[i][max])
			{
				max = j;
			}
		}
		for (k = 0; k < n; k++)
		{
			if (k != i)
			{
				if (a[i][max] > a[k][max])
				{
					count1++;
					break;
				}
			}
		}
		if (count1 == 0)
		{
			printf("%d %d\n", i, max);
			count2++;
			break;
		}
	}
	if (count2 == 0)
		printf("NONE\n");

	return 0;
}