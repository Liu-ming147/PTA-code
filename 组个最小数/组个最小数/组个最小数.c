#include<stdio.h>

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	int a[10], n, i, j, k, len, count;
	int b[50] = { 0 };
	count = 0;
	len = 0;
	j = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		len += a[i];
	}
	for (i = 0; i < len; i++)
	{
		while (b[i] == 0)
		{
			if (a[j] != 0)
			{
				b[i] = j;
				a[j]--;
				break;
			}

			else if (a[j] == 0)
			{
				j++;
			}
		}
	}
	n = 9;
	for (i = 0; i < len; i++)
	{
		if (b[i] != 0 && b[i] <= n)
		{
			n = b[i];
			k = i;
		}
	}
	swap(&b[k], &b[0]);
	for (i = 1; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (b[i] > b[j])
			{
				swap(&b[i], &b[j]);
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%d", b[i]);
	}

	return 0;
}