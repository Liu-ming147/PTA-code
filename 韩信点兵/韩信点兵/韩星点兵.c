#include<stdio.h>
int main()
{
	int num;
	num = 0;
	while (1)
	{
		if (num % 5 == 1 &&
			num % 6 == 5 &&
			num % 7 == 4 &&
			num % 11 == 10)
		{
			printf("%d\n", num);
			break;
		}
		num++;
	}
	

	return 0;
}