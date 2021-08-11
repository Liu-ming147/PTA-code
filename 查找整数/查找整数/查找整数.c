#include<stdio.h>
int main()
{
	int n, x, a[20], i, j, count;
	count = 0;
	scanf("%d %d", &n, &x);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			printf("%d", i);
			count++;
		}
	}
	if (count == 0)
		printf("Not Found");
	
	return 0;
}