#include<stdio.h>
#define N 100
int main()
{
	char ch;
	char str1[N];
	char str2[N];
	int len1 = 0;//储存所有输入字符的长度
	int len2 = 0;//储存str2字符数组中大写字母的个数
	int cnt = 0;//计数大写字母的个数
	int flag;
	ch = getchar();
	//第一环节：将人工输入的字符传入str1字符数组
	for (int i = 0; ch != '\n'; i++){
		str1[i] = ch;
		len1++;
		ch = getchar();
	}
	//第二环节：筛选出大写字母并将其传入字符数组str2
	for (int j = 0; j<len1; j++){
		if (str1[j] >= 'A'&&str1[j] <= 'Z'){
			str2[len2++] = str1[j];//计数大写字母的个数
		}
	}
	//第三环节：输出
	if (len2 == 0)
	{
		printf("Not Found");
	}
	else
		//检测str2中相等的元素，进行剔除
		for (int i = 0; i < len2; i++)
		{
		flag = 0;    //每次开始循环都更新flag
		for (int j = 0; j < i; j++)
		{
			if (str2[i] == str2[j])
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			printf("%c", str2[i]);
			cnt++;
		}
		else
			continue;
		}
	return 0;
}
