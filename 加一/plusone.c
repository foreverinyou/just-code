#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int plusone(int arr[], int len)
{
    int j, n = 0, p, k = 0, e = 0;
    int flag = 0;
    int a[100] = { 0 };
    int re[100] = { 0 };
    for (int i = 0; i < len; i++)
    {
        n = n * 10 + arr[i];
        if (arr[i] != 9) flag = 1;
    }
    j = n + 1;
    printf("%d\n", j);
    while (j != 0)
    {
        p = j % 10;
        j /= 10;
        a[k] = p;
        k++;
    }
    printf("%d\n", flag);
    if (flag == 1)
    {
        for (int t = 0, x = len - 1; t < len; t++, x--)
            re[x] = a[t];
        for (int y = 0; y < len; y++)
            printf("%d ", re[y]);
    }
    else {

        for (int t = 0, x = len; t <= len; t++, x--)
            re[x] = a[t];
        for (int y = 0; y <= len; y++)
            printf("%d ", re[y]);
    }
}
int main()
{
    int arr[100];
    int len;
    scanf("%d", &len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    plusone(arr, len);
    return 0;
}