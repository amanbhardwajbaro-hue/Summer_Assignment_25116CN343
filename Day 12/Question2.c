// Function for Armstrong
#include <stdio.h>
void armstrong(int n)
{
    int a, sum = 0, t;
    t = n;
    while (n > 0)
    {
        a = n % 10;
        sum = sum + a * a * a;
        n = n / 10;
    }
    if (sum == t)
    {
        printf("Given number is armstrong number ");
    }
    else
    {
        printf("Given number is not armstrong number ");
    }
}
int main()
{
    int n1;
    printf("Enter the mumber : ");
    scanf("%d", &n1);
    armstrong(n1);
    return 0;
}