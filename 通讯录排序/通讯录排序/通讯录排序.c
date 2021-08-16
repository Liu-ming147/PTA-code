#include<stdio.h>

struct message
{
	char name[11];
	int date;
	char num[20];
};

int main()
{
	int n, i, j;
	struct message t, m[11];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %s", m[i].name, &m[i].date, m[i].num);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (m[i].date > m[j].date)
			{
				t = m[i];
				m[i] = m[j];
				m[j] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%s %d %s\n", m[i].name, m[i].date, m[i].num);
	}

	return 0;
}