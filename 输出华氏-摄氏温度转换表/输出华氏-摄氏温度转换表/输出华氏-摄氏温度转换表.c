#include <stdio.h>
int main(void)
{
	int lower, upper;
	int fahr;
	double celsius;

	scanf("%d %d", &lower, &upper);
	if (lower <= upper && upper <= 100)
	{
		printf("fahr celsius\n");
		for (fahr = lower; fahr <= upper; fahr += 2)
		{
			celsius = 5.0 * (fahr - 32) / 9;
			printf("%d%6.1f\n", fahr, celsius); //%6.1f��6����ʾ��ȣ�����6λ���������ӿո�
		}
	}
	else
	{
		printf("Invalid.\n");
	}

	return 0;
}