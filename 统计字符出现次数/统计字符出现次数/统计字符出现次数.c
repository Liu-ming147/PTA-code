#include<stdio.h>
int main()
{
	char a[80], ch;
	int count, i;
	count = 0;
	gets(a);
	ch = getchar();
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ch)
			count++;
	}
	printf("%d\n", count);

	return 0;
}