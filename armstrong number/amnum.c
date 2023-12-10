#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int digit(int n)
{
	int w=0,k;
	while (n != 0)
	{
		k = n % 10;
		n /= 10;
		w++;
	}
	return w;
}
int power(int x, int y)
{
	int s;
	s = pow(x, y);
	return s;
}
int main()
{
	int a,b,x,y;
	scanf("%d%d", &a,&b);
	int n=0,sum=0,p=0,l=0;
	int flag=0;
	for (int i = a; i <= b; i++)
	{
		n = digit(i);
		l = i;
		sum = 0;
		for (int j = 1; j <= n; j++)
		{
			p = l % 10;
			l /= 10;
			sum = sum + power(p, n);
		}
		if (sum == i) {
			printf("%d ", i);
			flag = 1;
		}
	}
	if (flag == 0) printf("none\n");
	return 0;
}