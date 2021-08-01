#include<stdio.h>
int main()
{
	int i, n, flag;
	flag = 1;
	double sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= 3 * n; i += 3)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("sum = %.3lf\n", sum);

	return 0;
}