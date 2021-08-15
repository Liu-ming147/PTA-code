#include<stdio.h>
int main()
{
	char longest[80], a[80], b[80];
	int n;
	scanf("%d ", &n);
	gets(a);
	strcpy(longest, a);
	while (n)
	{
		gets(b);
		if (strlen(b) > strlen(longest))
			strcpy(longest, b);
		n--;
	}
	printf("The longest is: ");
	puts(longest);

	return 0;
}