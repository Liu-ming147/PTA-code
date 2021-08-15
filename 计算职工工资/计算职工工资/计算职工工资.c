#include<stdio.h>
#include<string.h>
#include<math.h>
struct staff
{
	char name[10];
	float bas_wages;
	float flo_wages;
	float out_wages;
};

int main()
{
	int i, n;
	scanf("%d\n", &n);
	struct staff s[1000] = { '\0' }; 
	for (i = 0; i < n; i++)
	{
		scanf("%s%f%f%f", &s[i].name, &s[i].bas_wages, &s[i].flo_wages, &s[i].out_wages);  
	}
	for (i = 0; i < n; i++)
	{
		printf("%s %.2f\n", s[i].name, s[i].bas_wages + s[i].flo_wages - s[i].out_wages);

	}
	return 0;
}