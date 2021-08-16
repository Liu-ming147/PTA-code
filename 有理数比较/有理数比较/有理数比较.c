#include<stdio.h>
int main()
{
	int a1, b1, a2, b2;
	double a, b;
	scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
	a = (double)a1 / b1;
	b = (double)a2 / b2;
	if (a > b)
		printf("%d/%d > %d/%d", a1, b1, a2, b2);
	else if (a < b)
		printf("%d/%d < %d/%d", a1, b1, a2, b2);
	else
		printf("%d/%d = %d/%d", a1, b1, a2, b2);

	return 0;
}