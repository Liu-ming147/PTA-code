#include<stdio.h>
int main()
{
	int n, a[10], max, min, i, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	max = min = 0;
	for (i = 1; i < n; i++)
	{
		if (a[max] < a[i])
			max = i;
		if (a[min] > a[i])
			min = i;
	}
	if (max == 0)
	{
		t = a[0];
		a[0] = a[min];
		a[min] = t;
		t = a[n - 1];
		a[n - 1] = a[min];
		a[min] = t;
	}
	else
	{
		t = a[0];
		a[0] = a[min];
		a[min] = t;
		t = a[n - 1];
		a[n - 1] = a[max];
		a[max] = t;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}