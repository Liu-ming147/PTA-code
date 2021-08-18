#include <stdio.h>
#define MAXN 10

void ArrayShift(int a[], int n, int m);

int main()
{
	int a[MAXN], n, m;
	int i;

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);

	ArrayShift(a, n, m);

	for (i = 0; i < n; i++) {
		if (i != 0) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}

void ArrayShift(int a[], int n, int m)
{
	int i, t, b[100];
	m %= n;
	for (i = 0; i < n; i++)
	{
		if (i < m)
			b[i] = a[i - m + n];
		else
			b[i] = a[i - m];
	}
	for (i = 0; i < n; i++)
		a[i] = b[i];
}