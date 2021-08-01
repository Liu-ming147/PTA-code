#include<stdio.h>
int main()
{
	float x, y;
	scanf("%f", &x);
	if (x != 0)
	{
		y = 1.0 / x;
	}
	else
		y = 0;
	printf("f(%.1f) = %.1f", x, y);

	return 0;
}