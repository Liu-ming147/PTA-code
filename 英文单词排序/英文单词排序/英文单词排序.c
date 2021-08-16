#include<stdio.h>
#include<string.h>
int main()
{
	char a[20][10], t[10];
	int n, i, j;
	n = 0;
	while (gets(a[n]) && a[n][0] != '#')
	{ 
		n++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1;j < n; j++)
		{
			if (strlen(a[i]) > strlen(a[j]))
			{
				strcpy(t, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], t);
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%s ", a[i]);
	}

	return 0;
}