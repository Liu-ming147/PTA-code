#include<stdio.h>
int main()
{
	int number1, number2;
	int flag;   //控制错误信息输出
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
			if (number2 == 0)   //除数为0，修改flag为0，跳出switch
			{
				flag = 0;
				break;
			}
			else
			{
				number1 /= number2; break;
			}
		default: flag = 0; break;   //输入了其它操作符，跳出switch
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