#include<stdio.h>
int main()
{
	int N, i;
	scanf("%d", &N);
	i = N;
	N %= 5;
	if (N == 0 || N == 4)
		printf("Drying in day %d", i);
	else
		printf("Fishing in day %d", i);

	return 0;
}