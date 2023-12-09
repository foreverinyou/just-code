#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int factor(int n)
{
	int s = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			s += i;
	}
	return s;
}
int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	int i, j;
	for (i = 200; i < n; i++)
	{
		sum = factor(i);
		if (factor(sum) == i && i != sum && i < sum)
			printf("%d %d ", i, sum);
	}
	return 0;
}