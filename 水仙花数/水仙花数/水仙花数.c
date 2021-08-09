#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);

	int i = 0, max;
	i = pow(10, n - 1);
	max = 10 * i;

	int k[10], j = 0;//用于存储1-9的n次幂
	for (j; j < 10; j++)
	{
		k[j] = pow(j, n);
	}

	for (i; i<max; i++)
	{
		int sum = 0;
		int m = i;
		while (m)
		{
			sum += k[m % 10];
			m = m / 10;
			if (sum>i)break;
		}
		if (sum == i)printf("%d\n", i);
	}
	return 0;
}
