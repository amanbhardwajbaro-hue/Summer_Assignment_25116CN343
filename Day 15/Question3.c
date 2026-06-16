// Rotate array right
#include <stdio.h>
int main()
{
    int a[20], i, n, t;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    t = a[n - 1];
    for (i = n - 1; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = t;
    printf("After rotating array right : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}