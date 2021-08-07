#include<stdio.h>
int main()
{
	int n, i, min, num;
	scanf("%d", &n);
	scanf("%d", &min);
	for (i = 1; i < n; ++i)
	{
		scanf("%d", &num);
		if (num < min)
			min = num;
	}
	printf("min = %d", min);

	return 0;
}