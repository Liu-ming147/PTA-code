#include<stdio.h>
int main()
{
	char a[100];
	int count, i;
	count = 0;
	gets(a);
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U'
					&& a[i] >= 'A' && a[i] <= 'Z')
			count++;
		i++;
	}
	printf("%d\n", count);

	return 0;
}