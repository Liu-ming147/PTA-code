#include<stdio.h>
int main()
{
	int n;
	double a, b, c, i, sum;
	a = 2;
	b = 1;
	i = 1;
	sum = 0;
	scanf("%d", &n);
	while (i <= n)
	{
		sum += 1.0 * a / b;
		c = a;
		a = a + b;
		b = c;
		i++;
 	}
	printf("%.2lf\n", sum);

	return 0;
}