#include<stdio.h>
int main()
{
	int T, a[10][10], i, j, k, n, count;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		count = 0;
		scanf("%d", &n);
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				scanf("%d", &a[j][k]);
			}
		}
		for (j = 1; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				if (a[j][k] != 0)
					count++;
			}
		}
		if (count == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}