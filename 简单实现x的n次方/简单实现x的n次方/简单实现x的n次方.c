#include <stdio.h>

double mypow(double x, int n);

int main()
{
	double x;
	int n;

	scanf("%lf %d", &x, &n);
	printf("%f\n", mypow(x, n));

	return 0;
}

double mypow(double x, int n)
{
	double sum = 1.0;
	while (n)
	{
		sum *= x;
		n--;
	}
	return sum;
}