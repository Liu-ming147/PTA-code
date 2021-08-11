#include<stdio.h>
int main()
{
	int n, a[10], i, j, count;
	count = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		a[i] = a[i + 1] - a[i];
	}
	for (i = 0; i < n - 2; i++)
	{
		if (count == 2)
		{
			printf("%d\n",a[i]);
			count = 0;
		}
		else
		{
			printf("%d ", a[i]);
			count++;
		}
	}
	printf("%d", a[n - 2]);

	return 0;
}