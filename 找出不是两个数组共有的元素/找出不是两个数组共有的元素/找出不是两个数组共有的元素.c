#include<stdio.h>
int main()
{
	int m, n, a[20], b[20], c[20], i, j, k, count;
	k = 0;
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < m; i++)
	{
		count = 0;
		for (j = 0; j < n; j++)
		{
			if (a[i] == b[j])
			{
				count++;
			}
		}
		if (count == 0)
		{
			c[k] = a[i];
			k++;
		}
	}
	for (i = 0; i < n; i++)
	{
		count = 0;
		for (j = 0; j < m; j++)
		{
			if (b[i] == a[j])
			{
				count++;
			}
		}
		if (count == 0)
		{
			c[k] = b[i];
			k++;
		}
	}
	for (i = 0; i < k; i++)
	{
		for (j = i + 1; j < k; j++)
		{
			if (c[i] == c[j])
			{
				for (int x = j; x < k; x++)
				{
					c[x] = c[x + 1];
				}
				k--;
			}
		}
	}
	for (i = 0; i < k - 1; i++)
	{
		printf("%d ", c[i]);
	}
	printf("%d", c[k - 1]);

	return 0;
}