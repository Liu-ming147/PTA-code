#include<stdio.h>
#include<string.h>
int main()
{
	int s[1000], n[1000] = { 0 }, i, j,	N, count;
	count = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &s[i]);
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N;)
		{
			if (n[j] + s[i] <= 100)
			{
				n[j] += s[i];
				printf("%d %d\n", s[i], j + 1);
				break;
			}
			else
			{
				j++;
			}
		}
	}
	i = 0;
	while (n[i])
	{
		count++;
		i++;
	}
	printf("%d\n", count);
	
	return 0;
}