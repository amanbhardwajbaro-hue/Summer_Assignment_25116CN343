// Linear search
#include <stdio.h>
int main()
{
    int a[20], i, s, n;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the searching element : ");
    scanf("%d", &s);
    for (i = 0; i < n; i++)
    {
        if (s == a[i])
        {
            printf("Search is successfull and the element is found at the %d position", i + 1);
        }
    }
    return 0;
}