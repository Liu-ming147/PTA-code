#include<stdio.h>
#include<math.h>
int main()
{
	int a[4][8], i, j, sum;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 8; j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 8; j++)
		{
			sum += a[i][j] * pow(2, 7 - j);
		}
		printf("%d.", sum);
	}
	sum = 0;
	for (j = 0; j < 8; j++)
	{
		sum += a[3][j] * pow(2, 7 - j);
	}
	printf("%d", sum);

	return 0;
}