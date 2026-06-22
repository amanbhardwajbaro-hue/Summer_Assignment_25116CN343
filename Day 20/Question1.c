// Multiply matrices
#include <stdio.h>
int main()
{
    int i, j, m, n, p, q, k;
    int a[20][20], b[20][20], c[20][20];
    printf("Enter the sie of rows and column of A : ");
    scanf("%d%d", &m, &n);
    printf("ENter the size of matrix B : ");
    scanf("%d", &p);
    printf("Enter the elements of matrix A : ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of B : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            c[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Multiplication of given two matrices : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}