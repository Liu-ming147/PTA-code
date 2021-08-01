#include <stdio.h>
#include <math.h>

int IsSquare(int n);

int main()
{
	int n;

	scanf("%d", &n);
	if (IsSquare(n)) printf("YES\n");
	else printf("NO\n");

	return 0;
}

int IsSquare(int n)
{
	int i;
	for (i = 0; i <= sqrt(n); ++i)
	{
		if (pow(i, 2) == n)
			return 1;
	}
	return 0;
}