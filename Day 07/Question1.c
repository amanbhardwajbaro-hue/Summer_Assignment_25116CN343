// Recursive facorial
#include <stdio.h>
int fact(int n)
{
    while (n > 1)
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n1;
    printf("Enter the number : ");
    scanf("%d", &n1);
    printf("%d", fact(n1));
    return 0;
}
