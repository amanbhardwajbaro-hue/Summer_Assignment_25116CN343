// Check given number is perfect or not
#include <stdio.h>
int main()
{
    int n, i, sum = 0, a, t;
    printf("Enter the number : ");
    scanf("%d", &n);
    t = n;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == t)
    {
        printf("Given number is perfect number ");
    }
    else
    {
        printf("Given number is not perfect number");
    }
    return 0;
}