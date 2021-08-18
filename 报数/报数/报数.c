#include <stdio.h>
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main()
{
	int out[MAXN], n, m;
	int i;

	scanf("%d %d", &n, &m);
	CountOff(n, m, out);
	for (i = 0; i < n; i++)
		printf("%d ", out[i]);
	printf("\n");

	return 0;
}

void CountOff(int n, int m, int out[])
{
	int i = 0, z = 0, h, a[MAXN];
	while (i < n)
	{
		a[i] = i + 1;
		i++;
	}
	i = 0;
	h = 0;
	while (h < n)
	{
		if (a[i] != 0)
			z++;
		if (z == m)
		{
			out[i] = ++h;
			z = 0;
			a[i] = 0;
		}
		i++;
		if (i == n)
			i = 0;
	}
}