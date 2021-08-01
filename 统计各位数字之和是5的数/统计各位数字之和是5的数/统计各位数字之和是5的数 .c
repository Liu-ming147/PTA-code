#include <stdio.h>

int is(int number);
void count_sum(int a, int b);

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	if (is(a)) printf("%d is counted.\n", a);
	if (is(b)) printf("%d is counted.\n", b);
	count_sum(a, b);

	return 0;
}

int is(int number)
{
	int sum = 0;
	while (number)
	{
		sum += number % 10;
		number /= 10;
	}
	if (sum == 5)
		return 1;
	return 0;
}
void count_sum(int a, int b)
{
	int count = 0;
	int sum = 0;
	for (a; a <= b; ++a)
	{
		is(a);
		if (is(a) == 1)
		{
			count++;
			sum += a;
		}
	}
	printf("count = %d, sum = %d\n", count, sum);
}