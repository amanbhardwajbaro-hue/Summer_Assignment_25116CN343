// Rotate Array left
#include <stdio.h>
int main()
{
    int a[20], n, i, t;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    t = a[0];
    for (i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = t;
    printf("After rotating array left : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}