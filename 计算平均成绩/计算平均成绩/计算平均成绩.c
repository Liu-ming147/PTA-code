#include<stdio.h>

struct student 
{
	char num[6];
	char name[11];
	int score;
}std[10];
int main()
{
	int n, i;
	float aver, sum;
	sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %s %d", &std[i].num, &std[i].name, &std[i].score);
		sum += std[i].score;
	}
	aver = sum / n;
	printf("%.2f\n", aver);
	for (i = 0; i < n; i++)
	{
		if (std[i].score < aver)
			printf("%s %s\n", std[i].name, std[i].num);
	}

	return 0;
}