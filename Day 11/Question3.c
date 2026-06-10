// Function to check prime
#include <stdio.h>
void prime(int n)
{
    int i, prime = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }}
        if (prime == 0)
        {
            printf("Given number is prime");
        }
        else
        {
            printf("Given number is not prime");
        }
    }

int main()
{
    int n1;
    printf("Enter the number : ");
    scanf("%d", &n1);
    prime(n1);
    return 0;
}