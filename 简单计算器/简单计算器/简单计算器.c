#include<stdio.h>
int main()
{
	int number1, number2;
	int flag;   //���ƴ�����Ϣ���
	char ch;

	scanf("%d", &number1);

	flag = 1;

	while ((ch = getchar()) != '=')
	{
		scanf("%d", &number2);

		switch (ch)
		{
		case '+': number1 += number2; break;
		case '-': number1 -= number2; break;
		case '*': number1 *= number2; break;
		case '/':
			if (number2 == 0)   //����Ϊ0���޸�flagΪ0������switch
			{
				flag = 0;
				break;
			}
			else
			{
				number1 /= number2; break;
			}
		default: flag = 0; break;   //����������������������switch
		}
	}

	if (flag == 0)
	{
		printf("ERROR");
	}
	else
	{
		printf("%d", number1);
	}

	return 0;
}