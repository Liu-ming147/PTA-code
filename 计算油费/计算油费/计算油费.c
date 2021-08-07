#include<stdio.h>
int main()
{
	int a, b;
	char c;
	double money;
	scanf("%d %d %c", &a, &b, &c);
	if (c == 'm')
	{
		switch (b)
		{
		case 90:
			money = 6.95 * a * 0.95;
			break;
		case 93:
			money = 7.44 * a * 0.95;
			break;
		case 97:
			money = 7.93 * a * 0.95;
			break;
		}
	}
	if (c == 'e')
	{
		switch (b)
		{
		case 90:
			money = 6.95 * a * 0.97;
			break;
		case 93:
			money = 7.44 * a * 0.97;
			break;
		case 97:
			money = 7.93 * a * 0.97;
			break;
		}
	}
	printf("%.2f", money);
	
	
	return 0;
}