// Convert binary to decimal
#include <stdio.h>
int binarytoDecimal(int n)
{
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    int decimal = 0;
    int position = 0;
    int isNegative = 0;
    if (n < 0)
    {
        isNegative = 1;
        n = -n;
    }
    while (n > 0)
    {
        int digit = n % 10;
        decimal += digit * (1 << position);
        n /= 10;
        position++;
    }
    if (isNegative)
        decimal = -decimal;
    return decimal;
}
int main()
{
    int num;
    printf("Enter a binary number: ");
    scanf("%d",&num);
    printf("Decimal: %d",binarytoDecimal(num));
    printf("\n");
    return 0;
}