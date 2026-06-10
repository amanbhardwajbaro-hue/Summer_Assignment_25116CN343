// Recursive Fibonacci
#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1)
    {
        printf("0 ");
    }
    if (n == 2)
    {
        printf("1 ");
    }
    while (n > 2)
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n1;
    printf("Enter the range : ");
    scanf("%d", &n1);
    printf("%d ", fibonacci(n1));
    return 0;
}