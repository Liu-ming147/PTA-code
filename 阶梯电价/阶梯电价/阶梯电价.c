#include<stdio.h>
int main()
{
	int electric;
	double cost;
	scanf("%d", &electric);
	if (electric <= 50 && electric > 0)
	{
		cost = 0.53 * electric;
		printf("cost = %.2f\n", cost);
	}
	else if (electric > 50)
	{
		cost = 0.53 * 50 + 0.58 * (electric - 50);
		printf("cost = %.2f\n", cost);
	}
	else
		printf("Invalid Value!\n");

	return 0;
}