#include<stdio.h>
int main()
{
	char a[4][19], b[9];
	int i, j;
	j = 0;
	for (i = 0; i < 4; i++)
		scanf("%s", a[i]);
	for (i = 0; i < 4; i++)
	{
		b[j++] = a[i][strlen(a[i]) - 2];
		b[j++] = a[i][strlen(a[i]) - 1];
	}
	b[j] = '\0';
	printf("%s\n", b);

	return 0;
}