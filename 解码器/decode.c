#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char st[100];
	char lat[100];
	gets(st);
	int m = 0,n=0;
	for (int i = 0; st[i] != '\0'; i++)
	{
		if (st[i] >='0' && st[i] <= '9')
		{
			m = st[i]-48;
			for (int j = 0; j < m; j++)
			{
				printf("%c", st[i + 1]);
			}
		}
	}
	return 0;
}