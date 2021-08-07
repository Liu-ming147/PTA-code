#include<stdio.h>
int main()
{
	int speed, limit;
	scanf("%d %d", &speed, &limit);
	double exceed = (double)(speed - limit) / limit * 100 + 0.5;
	if (speed < limit || exceed < 10)
		printf("OK");
	if (exceed >= 10 && exceed < 50)
		printf("Exceed %.0f%%. Ticket 200", exceed);
	if (exceed >= 50)
		printf("Exceed %.0f%%. License Revoked", exceed);

	return 0;
}