#include<stdio.h>
#include<math.h>
int main()
{
	int m, n, i, j;
	double sum, sum1, sum2;
	sum = sum1 = sum2 = 0;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; ++i)
	{
		sum1 += pow(i, 2);
	}
	for (i = n; i >= m; --i)
	{
		sum2 += 1.0 / i;
	}
	sum = sum1 + sum2;
	printf("sum = %f\n", sum);

	return 0;
}