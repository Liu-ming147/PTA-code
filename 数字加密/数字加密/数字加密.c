#include<stdio.h>
int main()
{
	int t, i, n, a[4];
	scanf("%d", &n);
	for (i = 3; i >= 0; i--)
	{
		a[i] = n % 10;
		n /= 10;
	}
	for (i = 0; i < 4; i++)
	{
		a[i] = (a[i] + 9) % 10;
	}
	t = a[1];
	a[1] = a[3];
	a[3] = t;
	t = a[0];
	a[0] = a[2];
	a[2] = t;
	printf("The encrypted number is ");
	for (i = 0; i < 4; i++)
	{
		printf("%d", a[i]);
	}

	return 0;
}