// Check symmetric matrix
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], m, n, i, j, symmetry;
    printf("Enter the row size : ");
    scanf("%d", &m);
    printf("Enter the column size : ");
    scanf("%d", &n);
    printf("Enter the matrix element : ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != b[j][i])
            {
                symmetry = 0;
                break;
            }
        }
        if (symmetry == 0)
        {
            break;
        }
    }
    if (symmetry)
    {
        printf("Given matrix is symmetric");
    }
    else
    {
        printf("Given matrix is not symmetric");
    }
    return 0;
}