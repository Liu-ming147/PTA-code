#include <stdio.h>
#define MAXN 20

void delchar(char *str, char c);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
	char str[MAXN], c;

	scanf("%c\n", &c);
	ReadString(str);
	delchar(str, c);
	printf("%s\n", str);

	return 0;
}

void delchar(char *str, char c)
{
	int i, j, count = 0;
	for (i = 0; i < MAXN - count; i++)
	{
		if (str[i] == c)
		{
			count++;
			for (j = i; j < MAXN - count; j++)
			{
				str[j] = str[j + 1];
			}
		}
	}
}
void ReadString(char s[])
{
	gets(s);
}