#include <stdio.h>

int main() 
{
	int h, m, depart, arrive;
	scanf("%d%d", &depart, &arrive);
	h = arrive / 100 - depart / 100;            //4λ����ȡǰ2λ(Сʱ)
	m = arrive % 100 - depart % 100;            //4λ����ȡ���2λ(����)
	if (m<0)                  //depart��arrive������ͬһ��,hһ������0
	{
		m = 60 + m;                 //��mС��0����h����һСʱ���m��ֵ
		h = h - 1;
	}
	printf("%02d:%02d\n", h, m);
	return 0;
}