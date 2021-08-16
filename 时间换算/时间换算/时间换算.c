#include<stdio.h>
int main()
{
	int m, h, s, n;
	scanf("%d:%d:%d", &h, &m, &s);
	scanf("%d", &n);
	s += n;
	if (s > 59)
	{
		s -= 60;
		m++;
		if (m > 59)
		{
			m -= 60;
			h++;
			if (h > 23)
			{
				h -= 24;
			}
		}
	}
	if (h >= 0 && h <= 9)
		printf("0%d:", h);
	else
		printf("%d:", h);
	if (m >= 0 && m <= 9)
		printf("0%d:", m);
	else
		printf("%d:", m);
	if (s >= 0 && s <= 9)
		printf("0%d", s);
	else
		printf("%d", s);

	return 0;
}