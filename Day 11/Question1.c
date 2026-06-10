// Function to find sum of two numbers
#include <stdio.h>
void add(int a, int b)
{
    int c = a + b;
    printf("The sum of given two numbers : %d", c);
}
int main()
{
    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);
    add(n1, n2);
    return 0;
}