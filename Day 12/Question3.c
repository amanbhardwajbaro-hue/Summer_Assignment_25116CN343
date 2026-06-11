// Function for Fibonacci
#include <stdio.h>
void fibonaccinumber(int n)
{
    int a[50], i, sum;
    a[0] = 0;
    a[1] = 1;
    for (i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        sum = sum + a[i];
    }
    printf("The fibonacci number at entered position : %d", sum);
}
int main()
{
    int n1;
    printf("Enter the position : ");
    scanf("%d", &n1);
    fibonaccinumber(n1);
    return 0;
}