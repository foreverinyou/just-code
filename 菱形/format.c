#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;
	int m=0;
	scanf("%d", &n);
	int u = n,t=1,p=1,g=n-1;//���ƿո����������������
	for (int i = 1; i <=n; i++)
	{
		for (int i=1;i<=u-1;i++)
		{
			printf(" ");
		}
		u--;
		for (int x = 1; x <= 2 * t - 1; x++)
		{
			printf("%d", i);
		}
		t++;
		printf("\n");
	}//�����ǵĵ׶�
	for (int y = n - 1; y > 0; y--)//�����ǿ�ʼ
	{
		for (int i = 1; i <= p; i++)
		{
			printf(" ");
		}
		p++;
		for (int i = 2*g - 1; i > 0; i--)
		{
			printf("%d", y);
		}
		g--;
		printf("\n");
	}
	return 0;
}