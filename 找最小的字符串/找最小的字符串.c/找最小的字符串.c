#include<stdio.h>
int main()
{
	char min[80], a[80], b[80];
	int n;
	scanf("%d ", &n);
	gets(a);
	strcpy(min, a);
	while (n)
	{
		gets(b);
		if (strcmp(b, min) < 0)
			strcpy(min, b);
		n--;
	}
	printf("Min is: ");
	puts(min);

	return 0;
}