// move zeroes to end
#include <stdio.h>
void moveZerosToEnd(int arr[], int n)
{
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }
    while (pos < n)
    {
        arr[pos] = 0;
        pos++;
    }
}
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
    printf("Before: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    moveZerosToEnd(a, n);

    printf("\nAfter:  ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}