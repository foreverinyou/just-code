#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;
	int arr[100][100] = { 0 };
	scanf("%d", &n);
	int num = 1;//用于存入数组元素
	int j = n,t = 0;
	if (n == 1) arr[0][0] = 1;//1阶矩阵的值
	else
	{
		while (num <= n * n)
		{
			int h = t, l = t;//行和列
			if (t <n)
			{
				for (l = t; l < j - 1; l++)
				{
					arr[h][l] = num++;
				}
				for (h = t; h < j - 1; h++)
				{
					arr[h][l] = num++;
				}
				for (l = j - 1; l > t; l--)//
				{
					arr[h][l] = num++;
				}
				for (h = j - 1; h > t; h--)
				{
					arr[h][l] = num++;
				}
			}
			j--;//边界值更新
			t++;
			if (t==j-1 && n%2==1)//输入阶数为奇数时，给中心赋值
				arr[t][t] = num++;
		}
	}	
	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
		{
			printf("%d  ", arr[a][b]);
		}
		printf("\n");
	}
	return 0;
}