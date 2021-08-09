#include<stdio.h>
int main()
{
	int n, i, line;
	line = 0;
	char ch = 'A';
	scanf("%d", &n);
	for (n; n > 0; n--)
	{
		for (i = 0; i < n; i++)
		{
			printf("%c ", ch + i + line);
		}
		printf("\n");
		line += i;
	}

	return 0;
}