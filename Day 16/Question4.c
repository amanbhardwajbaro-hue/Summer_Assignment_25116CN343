// Remove duplicates from array
#include <stdio.h>
int main()
{
    int a[20], i, n;

    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int result[n];
    int resSize = 0;
    for (int i = 0; i < n; i++)
    {
        int isDuplicate = 0;

        for (int j = 0; j < resSize; j++)
        {
            if (a[i] == result[j])
            {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate == 0)
        {
            result[resSize] = a[i];
            resSize++;
        }
    }
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < resSize; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}