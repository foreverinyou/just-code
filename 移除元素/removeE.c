#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int removeElement(int nums[], int val, int leng)
{
	int flag = 0;
	for (int i = 0; i < leng; i++)
	{
		if (nums[i] == val)
		{
			for (int k = i; k < leng - 1; k++)
			{
				nums[k] = nums[k + 1];
			}
			leng--;
			i--;
		}
	}
	return leng;
}
int main()
{
	int nums[100] = { 0 };
	int val;
	int l = 0;
	scanf("%d", &val);
	for (int i = 0;; i++)
	{
		scanf("%d", &nums[i]);
		l++;
		if (nums[i] == 'A') break;
	}
	int leng=l-1;
	int len = removeElement(nums, val, leng);
	for (int j = 0; j < len; j++)
		printf("%d ", nums[j]);
	return 0;
}
