#include<stdio.h>

struct vector
{
	double x;
	double y;
};
int main()
{
	struct vector v1, v2, v;
	scanf("%lf %lf %lf %lf", &v1.x, &v1.y, &v2.x, &v2.y);
	v.x = v1.x + v2.x;
	v.y = v1.y + v2.y;
	if (v.x > -0.05 && v.x < 0)
		v.x = 0;
	if (v.y > -0.05 && v.y < 0)
		v.y = 0;
	printf("(%.1f, %.1f)", v.x, v.y);

	return 0;
}