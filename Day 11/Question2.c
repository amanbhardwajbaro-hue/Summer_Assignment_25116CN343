// Function to find maximum
#include <stdio.h>
void max(int a, int b)
{
    int c;
    c = a > b ? a : b;
    printf("Maximum number between two given numbers : %d", c);
}
int main()
{
    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);
    max(n1, n2);
    return 0;
}