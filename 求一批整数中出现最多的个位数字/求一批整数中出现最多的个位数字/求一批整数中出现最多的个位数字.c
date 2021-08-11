#include<stdio.h>
int main()
{
	int n, i, j, max, count[10] = { 0 };
	char num[10];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", num);
		j = 0;
		while (num[j] != '\0')
		{
			switch (num[j])
			{
			case '0':
				count[0]++;
				break;
			case '1':
				count[1]++;
				break;
			case '2':
				count[2]++;
				break;
			case '3':
				count[3]++;
				break;
			case '4':
				count[4]++;
				break;
			case '5':
				count[5]++;
				break;
			case '6':
				count[6]++;
				break;
			case '7':
				count[7]++;
				break;
			case '8':
				count[8]++;
				break;
			case '9':
				count[9]++;
				break;
			default:
				break;
			}
			j++;
		}
	}
	max = count[0];
	for (i = 0; i < 10; i++)
	{
		if (max < count[i])
		{
			max = count[i];
		}
	}
	printf("%d:", max);
	for (i = 0; i < 10; i++)
	{
		if (count[i] == max)
			printf(" %d", i);
	}

	return 0;
}