#include<stdio.h>
int main()
{
	int max, m, n, i, j, a[10];
	scanf("%d", &n);
	m = n;
	i = 0;
	while (m)
	{
		scanf("%d", &a[i]);
		m--;
		i++;
	}
	max = a[0];
	for (i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			j = i;
		}
	}
	if (a[0] >= max)
		printf("%d %d", a[0], 0);
	else
		printf("%d %d", max, j);

	return 0;
}