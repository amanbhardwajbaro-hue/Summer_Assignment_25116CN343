// Find missing number in an array
#include <stdio.h>
int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int n = 6;
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        actualSum += a[i];
    }
    int missing = expectedSum - actualSum;
    printf("Missing number is: %d\n", missing);
    return 0;
}