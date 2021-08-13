#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	int left, right, n, i, t;
	n = strlen(a);
	left = 0;
	right = n - 1;
	for (left = 0; left < n / 2; left++)
	{
		t = a[left];
		a[left] = a[right];
		a[right] = t;
		right--;
	}
	for (i = 0; i < n; i++)
	{
		printf("%c", a[i]);
	}

	return 0;
}