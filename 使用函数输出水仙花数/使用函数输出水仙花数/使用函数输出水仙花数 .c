#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
	int m, n;

	scanf("%d %d", &m, &n);
	if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
	PrintN(m, n);
	if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

	return 0;
}

int narcissistic(int number)
{
	int n = 0;
	int sum = 0;
	int temp = number;
	while (temp)
	{
		temp /= 10;
		n++;
	}
	temp = number;
	for (int i = 0; i < n; ++i)
	{
		int x = temp % 10;
		int pow = 1;
		for (int j = 1; j <= n; j++)
		{
			pow = pow * x;
		 }
		sum = sum + pow;
		temp /= 10;
	}
	if (number == sum)
		return 1;
	return 0;
}
void PrintN(int m, int n)
{
	int i;
	for (i = m+1; i < n; ++i)
	{
		if (narcissistic(i) == 1)
			printf("%d\n", i);
	}
}