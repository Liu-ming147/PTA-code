#include<stdio.h>
int main(void)
{
	int n, x, a[10], i, t;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &x);

	for (i = 0; i<n; i++){
		if (x < a[i]){        // �ҵ� x��һ�ε�λ�ã�Ȼ��x�� a[i]����������
			t = a[i];         //ÿ�ζ��� a[i]��ʾ x��ֵ�������, x�͵��ڱ��滻�� a[i]
			a[i] = x;
			x = t;
		}
		printf("%d ", a[i]);
	}
	printf("%d ", x);   //���һ��a[i]�޷��������ѭ�������������Ҫ����һ��

	return 0;
}