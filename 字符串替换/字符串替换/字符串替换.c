#include <stdio.h>

int main() 
{
	char a[90];
	int b = 0;
	int length = 0;
	for (int i = 0; b != '\n'; i++)
	{
		b = getchar();
		a[i] = b;
		if (a[i] >= 'A' &&  a[i] <= 'Z')
		{
			a[i] = 155 - b;
		}
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		printf("%c", a[i]);
	}

	return 0;
}