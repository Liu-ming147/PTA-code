#include<stdio.h>
#include<math.h>
#include<string.h>

int is_prime(int n)
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
	int n, p, q;
	scanf("%d", &n);
	for (p = 2; p < n; p++)
	{
		q = n - p;
		if (is_prime(q) && is_prime(p))
		{
			printf("%d = %d + %d", n, p, q);
			break;
		}
	}

	return 0;
}