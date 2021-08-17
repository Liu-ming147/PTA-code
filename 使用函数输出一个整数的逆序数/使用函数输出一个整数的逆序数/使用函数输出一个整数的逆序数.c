#include <stdio.h>

int reverse(int number);

int main()
{
	int n;

	scanf("%d", &n);
	printf("%d\n", reverse(n));

	return 0;
}

int reverse(int number)
{
	int sum = 0;
	while (number)
	{
		int d = number % 10;
		sum = sum * 10 + d;
		number /= 10;
	}
	return sum;
}