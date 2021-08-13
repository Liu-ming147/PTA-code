#include<stdio.h>
int main()
{
	int year, month, day, n, i;
	n = 0;
	scanf("%4d/%2d/%2d", &year, &month, &day);	
	for (i = 1; i < month; i++)
	{
		switch (i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			n += 31;
			break;
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				n += 29;
			else
				n += 28;
			break;
		default:
			n += 30;
			break;
		}
	}
	n += day;
	printf("%d\n", n);

	return 0;
}