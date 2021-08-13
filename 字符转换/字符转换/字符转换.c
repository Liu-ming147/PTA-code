#include<stdio.h>
int main()
{
	char a[100], b[100];
	gets(a);
	int i = 0;
	int j = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			if (a[i] == '0' && j == 0)
			{
				i++;
				continue;	
			}
			else
				b[j++] = a[i];
		}
		i++;
	}
	for (i = 0; i < j; i++)
	{
		printf("%c", b[i]);
	}
	if (j == 0)
		printf("0");

	return 0;
}