#include<stdio.h>
#include<math.h>
#define pi 3.141592653589793
int main()
{
	int n;
	double r, h, v;
	while (1)
	{
		printf("1-Ball\n");
		printf("2-Cylinder\n");
		printf("3-Cone\n");
		printf("other-Exit\n");
		printf("Please enter your command:\n");

		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("Please enter the radius:\n");
			scanf("%lf", &r);
			v = 4 * pi * pow(r, 3) / 3.0;
			printf("%.2f\n", v);
			break;
		case 2:
			printf("Please enter the radius and the height:\n");
			scanf("%lf %lf", &r, &h);
			v = pi * pow(r, 2) * h;
			printf("%.2f\n", v);
			break;
		case 3:
			printf("Please enter the radius and the height:\n");
			scanf("%lf %lf", &r, &h);
			v = pi * pow(r, 2) * h / 3.0;
			printf("%.2f\n", v);
			break;
		default:
			return 0;
		}
	}

	return 0;
}