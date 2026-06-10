// Check given number is strong or not
#include <stdio.h>
int fact(int n1)
{
    int product = 1;
    for (int i = 1; i <= n1; i++)
    {
        product = product * i;
    }
    return product;
}
int main()
{
    int n, i, a, factsum = 0, t;
    printf("Enter the number : ");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        a = n % 10;
        n = n / 10;
        factsum = factsum + fact(a);
    }
    if (factsum == t)
    {
        printf("Given number is strong number ");
    }
    else
    {
        printf("Given number is not strong number ");
    }
    return 0;
}