// Merge two sorted array
#include <stdio.h>
int main()
{
    int a[20], b[20], merged[40], n1, n2;
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    merged[n1 + n2];
    printf("Enter sorted elements of array 1:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter sorted elements of array 2:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    while (i < n1)
    {
        merged[k++] = a[i++];
    }
    while (j < n2)
    {
        merged[k++] = b[j++];
    }
    printf("Merged sorted array:\n");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);
    printf("\n");
    return 0;
}