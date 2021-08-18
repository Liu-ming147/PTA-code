#include <stdio.h>
#define MAXS 20

void f(char *p);
void ReadString(char *s); /* 由裁判实现，略去不表 */

int main()
{
	char s[MAXS];

	ReadString(s);
	f(s);
	printf("%s\n", s);

	return 0;
}

void f(char *p)
{
	char t;
	int i, n;
	n = 0;
	while (p[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		t = p[i];
		p[i] = p[n - i - 1];
		p[n - i - 1] = t;
	}
}
void ReadString(char *s)
{
	gets(s);
}