#include <stdio.h>
#include <math.h>
int main()
{
	int i, f;
	i = 1;
	f = 1;
	double esp, s, t;
	s = 0;
	t = 1.0;
	scanf("%lf", &esp);
	do{
		t = f*1.0 / i;
		s = s + t;
		i = i + 3;
		f = -f;
	} while (fabs(t)>esp);
	printf("sum = %.6lf", s);
	return 0;
}
