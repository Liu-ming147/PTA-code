#include<stdio.h>
int main()
{
	int n, i, m, sum, count;
	count = 0;
	sum = 0;
	scanf("%d", &n);
	m = n;
	while (m)
	{
		m /= 10;
		count++;
	}
	for (i = 0; i < count; ++i)
	{
		sum += n % 10;
		n /= 10;
	}
	printf("%d %d", count, sum);

	return 0;
}