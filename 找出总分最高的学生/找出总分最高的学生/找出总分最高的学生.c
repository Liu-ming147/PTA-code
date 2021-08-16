#include<stdio.h>

struct message
{
	char num[6];
	char name[11];
	int s1;
	int s2;
	int s3;
};
int main()
{
	struct message m[11];
	int sum1 = 0, sum2;
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %s", m[i].num, m[i].name);
		scanf("%d %d %d", &m[i].s1, &m[i].s2, &m[i].s3);
		sum2 = m[i].s1 + m[i].s2 + m[i].s3;
		if (sum1 < sum2)
		{
			sum1 = sum2;
			j = i;
		}
	}
	printf("%s %s %d", m[j].name, m[j].num, sum1);

	return 0;
}