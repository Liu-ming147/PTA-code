#include<stdio.h>
int main()
{
	char a[10];
	int letter = 0, blank = 0, digit = 0, other = 0;
	for (int i = 0; i < 10; ++i)
	{
		scanf("%c", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z') letter++;
		else if (a[i] == ' ' || a[i] == '\n') blank++;
		else if (a[i] >= '0' && a[i] <= '9') digit++;
		else other++;
	}

	printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);

	return 0;
}