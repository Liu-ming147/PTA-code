#include <stdio.h>

#define N 81

int main()
{
	int i = 0, item, ascii[128] = { 0 };
	char str[N];
	gets(str);
	//标记ascii表
	for (i = 0; str[i] != '\0'; i++)
	{
		item = (int)(str[i]);
		if (ascii[item] == 0)
			ascii[item] = 1;

	}
	//遍历ascii表输出存在的数
	for (i = 0; i<128; i++)
	{
		if (ascii[i])
			printf("%c", i);
	}


	return 0;
}
