#include <stdio.h>
#define N 10
int main()
{
	int i, j, n, a[N][N] = { 0 }, value = 1;
	scanf("%d", &n);
	int k, start, end; //分别表示外圈循环标记，起始和末尾
	k = n;
	start = 0;
	end = n;

	while (k > 1){
		//up 举列 把所有的与边界值有关替换为start和end控制
		for (j = start; j < end; j++)
		{
			a[start][j] = value++;
		}
		//right	
		for (i = start + 1; i < end; i++)
		{
			a[i][end - 1] = value++;
		}
		//down	
		for (j = end - 2; j >= start; j--)
		{
			a[end - 1][j] = value++;
		}
		//left	
		for (i = end - 2; i > start; i--)
		{
			a[i][start] = value++;
		}

		//控制外圈变量  5 3 1 结束
		k = k - 2;
		//边界需要缩进一格
		start = start + 1; //0+1 = 1
		end = end - 1;  //(n-1)-1 = n-2
	}
	//如果n为奇数则，为矩阵中间数赋值 
	if (n % 2)
		a[start][end - 1] = value;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%3d", a[i][j]);
		printf("\n");

	}

	return 0;
}
