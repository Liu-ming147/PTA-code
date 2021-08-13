#include<stdio.h>
int main()
{
	char a, b[100];
	scanf("%c", &a);
	getchar();
	gets(b);
	int index, i, n, count = 0;
	n = strlen(b);
	for (i = 0; i < n; i++)
	{
		if (b[i] == a)
		{
			index = i;
			count++;
		}	
	}
	if (count == 0)
		printf("Not Found\n");
	else
		printf("index = %d\n", index);

	return 0;
}