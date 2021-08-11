#include<stdio.h>
int main()
{
	int n, a[1000], i, j, count, count1, count2, k;
	count2 = count1 = 1;
	k = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		count1 = 1;
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				count1++;
			}
		}
		if (count1 >= count2)
		{
			k = i;
			count2 = count1;
		}
	}
	printf("%d %d", a[k], count2);

	return 0;
}