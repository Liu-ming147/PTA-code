#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	double s, area, perimeter;
	scanf("%d %d %d", &a, &b, &c);
	s = (a + b + c) / 2.0;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	perimeter = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("area = %.2f; perimeter = %.2f", area, perimeter);
	}
	else
		printf("These sides do not correspond to a valid triangle");

	return 0;
}