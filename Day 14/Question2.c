// Frequency of an element
#include <stdio.h>
int main()
{
    int a[20], i, j, n, t, f;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        f = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                f++;
                printf("The frequency of the given element %d : %d\n", a[i], f);
            }
        }
    }
    return 0;
}