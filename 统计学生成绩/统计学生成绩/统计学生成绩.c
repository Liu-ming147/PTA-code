#include<stdio.h>
int main()
{
	int score, N, s, i, a, b, c, d, e;
	a = b = c = d = e = 0;
	scanf("%d", &N);
	for (i = 1; i <= N; ++i)
	{
		scanf("%d", &score);
		s = score / 10;
		switch (s)
		{
		case 10:
		case 9:
			a++;
			break;
		case 8:
			b++;
			break;
		case 7:
			c++;
			break;
		case 6:
			d++;
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			e++;
			break;
		default:
			break;
		}
	}
	printf("%d %d %d %d %d", a, b, c, d, e);
	return 0;
}