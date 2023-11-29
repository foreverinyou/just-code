#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= n; i = i)
    {
        while (i <= n)
        {
            if (n % i == 0 && i != n) 
            {
                printf("%d ", i); 
                break;
            }
            else if (n % i == 0 && i == n)
            {
                printf("%d", i);
                break; 
            }
            else i++;
        }
        n = n / i;
    }
    return 0;


}