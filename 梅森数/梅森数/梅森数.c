#include<stdio.h>
#include<math.h>

int isprime(int n)
{
	int i;
	if (n >= 2)
	{
		for (i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
				break;
		}
		if (i > sqrt(n))
			return 1;
	}
	return 0;
}
int main()
{
	int n, i, num, count;
	count = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		num = pow(2, i) - 1;
		if (isprime(num))
		{
			printf("%d\n", num);
			count++;
		}
	}
	if (count == 0)
		printf("None\n");

	return 0;
}