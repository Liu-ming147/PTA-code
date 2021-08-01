#include<stdio.h>
int main()
{
	int i, n;
	double sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= 2 * n; i += 2)
	{
		sum += 1.0 / i;
	}
	printf("sum = %lf\n", sum);

	return 0;
}