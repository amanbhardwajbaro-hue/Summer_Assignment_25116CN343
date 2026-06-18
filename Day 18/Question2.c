// slection sort
#include <stdio.h>
int main()
{
    int a[20], i, j, n, pos, t;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[pos] > a[j])
            {
                pos = j;
            }
        }
        if (a[pos] != i)
        {
            t = a[pos];
            a[pos] = a[i];
            a[i] = t;
        }
    }
    printf("After sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}