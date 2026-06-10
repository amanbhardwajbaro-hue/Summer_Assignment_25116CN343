// Recursive sum of digits
#include <stdio.h>
int sumofdigits(int n)
{
    int a;
    while (n > 0)
    {
        a = n % 10;
        return a + sumofdigits(n / 10);
    }
}
int main()
{
    int n1;
    printf("Enter the number : ");
    scanf("%d", &n1);
    printf("The sum of digits of given number : %d", sumofdigits(n1));
    return 0;
}