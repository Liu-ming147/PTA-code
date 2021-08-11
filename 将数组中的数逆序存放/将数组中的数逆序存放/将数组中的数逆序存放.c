#include<stdio.h>
int main()
{
	int a[10], b[10], n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
		b[n - i - 1] = a[i];
	for (i = 0; i < n - 1; i++)
		printf("%d ", b[i]);
	printf("%d\n", b[n - 1]);

	return 0;
}