#include<stdio.h>
int main()
{
	char ch;
	int sum = 0, flag = 1, isAppear = 1;
	ch = getchar();
	while (ch != '#'){
		if (ch == '-'&&isAppear) 
			flag = -1;
		else if (ch >= 'a'&&ch <= 'f' || ch >= 'A'&&ch <= 'F' || ch >= '0'&&ch <= '9'){
			isAppear = 0;
			if (ch >= 'a'&&ch <= 'f') sum = sum * 16 + ch - 'a' + 10;
			else if (ch >= 'A'&&ch <= 'F') sum = sum * 16 + ch - 'A' + 10;
			else if (ch >= '0'&&ch <= '9') sum = sum * 16 + ch - '0';
		}
		ch = getchar();
	}
	printf("%d", flag*sum);
	return 0;
}
