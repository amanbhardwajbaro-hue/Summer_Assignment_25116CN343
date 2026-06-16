// Reverse array
#include <stdio.h>
int main()
{
    int a[20], i, n, temp;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reverse array : ");
    for (i = 0; i < n; i++)
    {
        temp = a[i];
        if (i <= n / 2)
        {
            a[i] = a[n - 1 - i];
            a[n - i - 1] = temp;
        }
        printf("%d ", a[i]);
    }
    return 0;
}