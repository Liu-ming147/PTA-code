#include<stdio.h>
int main()
{
	int coin, i, j, k, total, count = 0;
	scanf("%d", &coin);
	for (i = coin / 5; i > 0; i--)
	{
		for (j = coin / 2; j > 0; j--)
		{
			for (k = coin; k > 0; k--)
			{
				if (5 * i + 2 * j + k == coin)
				{
					total = i + j + k;
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, k, total);
					count++;
				}
			}
		}
	}
	printf("count = %d\n", count);
	return 0;
}