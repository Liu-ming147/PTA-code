#include<stdio.h>
#include<math.h>

int fun(int a, int n)
{
	int i, sum;
	sum = 0;
	for (i = 0; i < n; ++i)
	{
		sum += a * pow(10, i);
	}
	return sum;
}
int main()
{
	int a, n, s, i;
	s = 0;
	scanf("%d %d", &a, &n);
	for (i = 1; i <= n; ++i)
	{
		s += fun(a, i);
	}
	printf("s = %d", s);

	return 0;
}