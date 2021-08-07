#include<stdio.h>
int main()
{
	int salary;
	double money;
	scanf("%d", &salary);
	if (salary >= 0 && salary <= 1600)
		money = 0;
	else if (salary > 1600 && salary <= 2500)
		money = (salary - 1600) * 0.05;
	else if (salary > 2500 && salary <= 3500)
		money = (salary - 1600) * 0.1;
	else if (salary > 3500 && salary <= 4500)
		money = (salary - 1600) * 0.15;
	else
		money = (salary - 1600) * 0.2;
	printf("%.2f\n", money);


	return 0;
}