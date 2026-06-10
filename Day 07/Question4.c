// Recursive Reverse number
#include <stdio.h>
int rev = 0;
int reverse(int n)
{
    int a;
    if (n == 0)
    {
        return rev;
    }
    a = n % 10;
    rev = 10 * rev + a;
    return reverse(n / 10);
}
int main()
{
    int n1;
    printf("Enter the number : ");
    scanf("%d", &n1);
    printf("The reverse of the given number : %d", reverse(n1));
    return 0;
}