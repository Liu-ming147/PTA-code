#include<stdio.h>
int main()
{
	int n, i, k;
	double average, max, min, sum;
	sum = 0;
	max = 0;
	min = 100;
	scanf("%d", &n);
	k = n;
	while (n)
	{
		scanf("%d", &i);
		sum += i;
		if (max < i)
			max = i;
		if (min > i)
			min = i;
		n--;
	}
	average = sum / k;
	printf("average = %.2f\n", average);
	printf("max = %.2f\n", max);
	printf("min = %.2f\n", min);
	
	return 0;
}