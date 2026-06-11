// function for perfect number
#include <stdio.h>
void perfectnumber(int n)
{
    int sum = 0, i;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (n == sum)
    {
        printf("Given number is perfect number");
    }
    else
    {
        printf("Given number is not perfect number");
    }
}
int main()
{
    int n1;
    printf("Enter the number : ");
    scanf("%d", &n1);
    perfectnumber(n1);
    return 0;
}