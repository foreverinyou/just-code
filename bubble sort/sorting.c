#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 void bubble_sort(int a[], int t)
{
	int j;
	for (int k = 0; k < t - 1; k++)
	{
		for (int p = 0; p < t - 1 - k; p++)
		{
			if (a[p] > a[p + 1])
			{
				j = a[p];
				a[p] = a[p + 1];
				a[p + 1] = j;
			}
		}
	}
}
int main()
{
	int n;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	bubble_sort(arr, n);
	for (int o = 0; o < n; o++)
		printf("%d ", arr[o]);
	return 0;
}