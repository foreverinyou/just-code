#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long a[50] = { 0 };
	long long arr[100][100] = { 0 };
	for (int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	printf("\n");
	int hang, lie;
	for (hang = 0; hang < n; hang++)
	{
		if (hang == 0)
		{
			for (lie = 0; lie < n; lie++)
			{
				arr[0][lie] = a[lie];
				printf("%lld ", arr[0][lie]);
			}
			printf("\n");
			continue;
		}
		for (lie = 0; lie < n; lie++)
		{
			if (lie == n - 1)
			{
				arr[hang][lie] = arr[hang - 1][0];
				printf("%lld\n", arr[hang][lie]);
				continue;
			}
			arr[hang][lie] = arr[hang - 1][lie + 1];
			printf("%lld ", arr[hang][lie]);
		}
	}
	return 0;
}