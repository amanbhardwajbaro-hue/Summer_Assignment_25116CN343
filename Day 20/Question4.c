// Column wise sum
#include <stdio.h>
int main()
{
    int a[10][10], m, n, i, j, sum;
    printf("Enter the row size : ");
    scanf("%d", &m);
    printf("Enter the column size : ");
    scanf("%d", &n);
    printf("Enter tha matrix element : ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    i = 0;
    while (i >= 0 && i < m)
    {
        sum = 0;
        j = 0;
        while (j >= 0 && j < n)
        {
            sum = sum + a[j][i];
            j++;
        }
        printf("The sum of %d column: %d\n", i + 1, sum);
        i++;
    }
}