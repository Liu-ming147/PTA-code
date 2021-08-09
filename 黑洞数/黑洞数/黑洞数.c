#include<stdio.h>
int main()
{
	int num, val, i, a, b, c, t, max, min;
	scanf("%d", &num);
	i = 1;
	val = 0;
	while (val != 495)
	{
		a = num / 100;
		b = num % 100 / 10;
		c = num % 10;
		if (a < c)
		{
			t = a;
			a = c;
			c = t;
		}
		if (a < b)
		{
			t = a;
			a = b;
			b = t;
		}
		if (b < c)
		{
			t = b;
			b = c;
			c = t;
		}
		max = a * 100 + b * 10 + c;
		min = c * 100 + b * 10 + a;
		val = max - min;
		printf("%d: %d - %d = %d\n", i, max, min, val);
		i++;
		num = val;
	}

	return 0;
}