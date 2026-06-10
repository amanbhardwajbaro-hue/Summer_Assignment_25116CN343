// Find the largest prime factor
#include <stdio.h>
int prime(int n1)
{
    int j, prime = 0;
    for (j = 2; j < n1; j++)
    {
        prime = 0;
        if (n1 % j == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n, i, largest = -1;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            if (prime(i) == 1)
            {
                largest = i;
            }
        }
    }
    printf("Largest prime factor : %d\n", largest);
    return 0;
}