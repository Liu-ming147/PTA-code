#include<stdio.h>
int main(void)
{
	int n, x, a[10], i, t;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &x);

	for (i = 0; i<n; i++){
		if (x < a[i]){        // 找到 x第一次的位置，然后x和 a[i]依次往后推
			t = a[i];         //每次都用 a[i]表示 x的值并且输出, x就等于被替换的 a[i]
			a[i] = x;
			x = t;
		}
		printf("%d ", a[i]);
	}
	printf("%d ", x);   //最后一个a[i]无法在上面的循环中输出，所以要加这一步

	return 0;
}