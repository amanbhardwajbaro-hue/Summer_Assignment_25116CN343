//Intersection of arrays
#include <stdio.h>
int main()
{
    int a[20], b[20], m, n, i, j;

    printf("Enter 1st array size : ");
    scanf("%d", &m);
    printf("Enter 1st array elements : ");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    
    printf("Enter 2nd array size : ");
    scanf("%d", &n);
    printf("Enter 2nd array elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
    
    printf("After intersection : ");
    for (i = 0; i < m; i++)
    {
        int t = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                t = 1;
                break;
            }
        }
        if (t == 1)
        {
            int alreadyPrinted = 0;
            for (int k = 0; k < i; k++)
            {
                if (a[k] == a[i])
                {
                    alreadyPrinted = 1;
                    break;
                }
            }
            if (alreadyPrinted == 0)
                printf("%d ", a[i]);
        }
    }
    return 0;
}