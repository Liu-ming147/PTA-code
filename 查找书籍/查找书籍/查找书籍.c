#include<stdio.h>
int main()
{
	typedef struct book
	{
		char name[31];
		double j;
	}B;
	B b[10];
	int x, y, i, z = 0, a = 0, n;
	scanf("%d", &n);
	getchar();//用于处理缓冲区中的回车。
	for (i = 0; i<n; i++)
	{
		gets(b[i].name);
		scanf("%lf", &b[i].j);
		getchar();
		if (b[i].j>b[z].j)
		{
			z = i;
		}
		if (b[i].j<b[a].j)
		{
			a = i;
		}
	}
	printf("%.2f, %s\n", b[z].j, b[z].name);
	printf("%.2f, %s\n", b[a].j, b[a].name);
	return 0;
}
