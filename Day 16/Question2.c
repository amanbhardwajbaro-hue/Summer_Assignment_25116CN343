// Find maximum frequency of element
#include <stdio.h>
int main()
{
    int a[20], n, i;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int maxFreq = 0;
    int maxElem = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == a[i])
            {
                count++;
            }
        }
        if (count > maxFreq)
        {
            maxFreq = count;
            maxElem = a[i];
        }
    }
    printf("Element: %d\n", maxElem);
    printf("Max Frequency: %d\n", maxFreq);
    return 0;
}