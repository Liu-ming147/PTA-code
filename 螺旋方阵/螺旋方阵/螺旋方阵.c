#include <stdio.h>
#define N 10
int main()
{
	int i, j, n, a[N][N] = { 0 }, value = 1;
	scanf("%d", &n);
	int k, start, end; //�ֱ��ʾ��Ȧѭ����ǣ���ʼ��ĩβ
	k = n;
	start = 0;
	end = n;

	while (k > 1){
		//up ���� �����е���߽�ֵ�й��滻Ϊstart��end����
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

		//������Ȧ����  5 3 1 ����
		k = k - 2;
		//�߽���Ҫ����һ��
		start = start + 1; //0+1 = 1
		end = end - 1;  //(n-1)-1 = n-2
	}
	//���nΪ������Ϊ�����м�����ֵ 
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
