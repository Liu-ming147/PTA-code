#include <stdio.h>

#define N 81

int main()
{
	int i = 0, item, ascii[128] = { 0 };
	char str[N];
	gets(str);
	//���ascii��
	for (i = 0; str[i] != '\0'; i++)
	{
		item = (int)(str[i]);
		if (ascii[item] == 0)
			ascii[item] = 1;

	}
	//����ascii��������ڵ���
	for (i = 0; i<128; i++)
	{
		if (ascii[i])
			printf("%c", i);
	}


	return 0;
}
