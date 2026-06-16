// Second largest element in an array
#include <stdio.h>
int main()
{
    int a[20], n, i, max, second;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    second = a[1];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            second = max;
            max = a[i];
        }
        else if (a[i] > second && a[i] != max)
        {
            second = a[i];
        }
    }
    printf("Second Largest element in the given array : %d\n", second);
    return 0;
}