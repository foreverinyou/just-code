#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int t=0,j=0;
	int a[10] = { 0 };
	for (int i = m; i <= n; i++)
	{
		t = i;
		while (t != 0)
		{
			j = t % 10;
			a[j]++;
			t = t / 10;
		}
	}
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", a[k]);
	}
	return 0;
}