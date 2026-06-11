// Function for palindrome
#include <stdio.h>
void palindrome(int n)
{
    int a, sum = 0, t;
    t = n;
    while (n > 0)
    {
        a = n % 10;
        sum = 10 * sum + a;
        n = n / 10;
    }
    if (sum == t)
    {
        printf("Given number is palindrome ");
    }
    else
    {
        printf("Given number is not paalindrome ");
    }
}
int main()
{
    int n1;
    printf("Enter the number : ");
    scanf("%d", &n1);
    palindrome(n1);
    return 0;
}