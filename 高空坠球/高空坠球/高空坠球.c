#include <stdio.h>
#include <math.h>
int main()
{
	int h, n;
	double sum = 0, height = 0;
	int i;
	scanf("%d %d", &h, &n);
	for (i = 1; i <= n; i++)
	{
		if (i == 1)
			sum += h;
		else
			sum += 2 * height;
		height = h / pow(2, i);
	}
	printf("%.1f %.1f\n", sum, height);
	return 0;
}