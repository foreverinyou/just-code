#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num;
	int p;
	int j, k, l;
	int S=1;
	int arr[100] = { 0 };
	scanf("%d", &num);
	printf("%d ", num);
	p = num;
	for (int i = 0;; i++)
	{
		if (i > 0) p = S;
		k = 0;
		while (p!=0)
		{
			j = p % 10;
			p = p / 10;
			arr[k] = j;
			k++;
		}
		S = 1;
		for (int t = 0; t < k; t++)
			S = S * arr[t];
		printf("%d ", S);
		if (S < 10) break;
	}
	return 0;
}