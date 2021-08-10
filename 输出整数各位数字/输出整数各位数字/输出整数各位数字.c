#include <stdio.h>
#include <math.h>

int main()
{
	long int n, k;
	int count;
	int p;
	count = 0;
	scanf("%ld", &n);
	k = n;

	if (n == 0)
	{
		printf("%d ", 0);
	}
	else
	{
		while (k != 0)
		{
			k = k / 10;
			count++;
		}

		while (count>0)
		{
			count--;
			p = pow(10, count);
			printf("%d ", n / p);
			n = n % p;
		}
	}
	return 0;
}

/* ·¨¶þ
#include<stdio.h>
int main()
{
	char a[100];
	int i;
	gets(a);
	while (a[i])
	{
		printf("%c ", a[i]);
		i++;
	}

	return 0;
}
*/


