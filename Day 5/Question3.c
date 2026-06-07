// Print factors of a number
#include <stdio.h>
int main()
{
    int n, i, a;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The factors of the given number : ");
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}