#include<stdio.h>
#include<string.h>
int main()
{
	int n, n2, i, j, cnt = 0, x1, y1, x2, y2, k, count = 0;
	char a[200][200];
	scanf("%d", &n);
	getchar();
	for (i = 0; i < 2 * n; i++)
		for (j = 0; j < 2 * n; j++)
			scanf("%c ", &a[i][j]);
	scanf("%d", &n2);
	for (i = 0; i < n2; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		if (a[x1 - 1][y1 - 1] == a[x2 - 1][y2 - 1] && a[x1 - 1][y1 - 1] != '*'&&a[x2 - 1][y2 - 1] != '*')
		{//注意到已经处理过得*也是相等的需要排除
			a[x1 - 1][y1 - 1] = '*';
			a[x2 - 1][y2 - 1] = '*';
			count++;
			if (count == n * n * 2)//注意到乘出来是数组，要对一半进行处理
			{
				printf("Congratulations!\n");
				return 0;
			}
			for (j = 0; j < 2 * n; j++)
			{
				for (k = 0; k < 2 * n; k++)
				{
					printf("%c", a[j][k]);
					if (k < 2 * n - 1)
						printf(" ");//不可以有多余的空格
				}
				printf("\n");//进行换行
			}

		}
		else{
			printf("Uh-oh\n");
			cnt++;
			if (cnt == 3)
			{
				printf("Game Over\n");
				return 0;
			}
		}
	}
	return 0;
}

