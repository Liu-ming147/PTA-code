#include <stdio.h>

int gcd(int x, int y);

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));

	return 0;
}

int gcd(int x, int y)
{
	int t = x % y;
	while (t)
	{
		x = y;
		y = t;
		t = x % y;
	}
	return y;
}