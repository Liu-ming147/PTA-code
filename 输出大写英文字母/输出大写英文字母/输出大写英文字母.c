#include<stdio.h>
#define N 100
int main()
{
	char ch;
	char str1[N];
	char str2[N];
	int len1 = 0;//�������������ַ��ĳ���
	int len2 = 0;//����str2�ַ������д�д��ĸ�ĸ���
	int cnt = 0;//������д��ĸ�ĸ���
	int flag;
	ch = getchar();
	//��һ���ڣ����˹�������ַ�����str1�ַ�����
	for (int i = 0; ch != '\n'; i++){
		str1[i] = ch;
		len1++;
		ch = getchar();
	}
	//�ڶ����ڣ�ɸѡ����д��ĸ�����䴫���ַ�����str2
	for (int j = 0; j<len1; j++){
		if (str1[j] >= 'A'&&str1[j] <= 'Z'){
			str2[len2++] = str1[j];//������д��ĸ�ĸ���
		}
	}
	//�������ڣ����
	if (len2 == 0)
	{
		printf("Not Found");
	}
	else
		//���str2����ȵ�Ԫ�أ������޳�
		for (int i = 0; i < len2; i++)
		{
		flag = 0;    //ÿ�ο�ʼѭ��������flag
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
