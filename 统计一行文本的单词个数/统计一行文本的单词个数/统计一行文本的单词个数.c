#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
	bool flag = 0;
	char ch;
	int word_count = 0;
	while ((ch = getchar()) != '\n')
	{
		if (ch != ' '&&flag == 0)
		{
			word_count++;
			flag = 1;
		}
		if (ch == ' '&&flag == 1)
		{
			flag = 0;
		}
	}
	printf("%d", word_count);

	return 0;
}
