#include<stdio.h>
int main()
{
	int n, i;
	double flag, sum;
	flag = 1;
	sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i)
	{
		sum += flag * i / (2 * i - 1);
		flag = -flag;
	}
	printf("%.3f\n", sum);

	return 0;
}