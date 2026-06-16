// Find duplicates in an array
#include <stdio.h>
int main()
{
    int a[20], i, n, t;
    printf("Enter the size : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (t = i + 1; t < n; t++)
        {
            if (a[i] == a[t])
            {
                printf("Duplicate element : %d\n", a[t]);
            }
        }
    }
    return 0;
}