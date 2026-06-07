//Count set bits in a number 
#include <stdio.h>
int countSetBits(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    }
    int bits[32];
    int i = 0;
    int count = 0;
    unsigned int num = (unsigned int)n;
    while (num > 0) {
        bits[i] = num % 2;       
        if (bits[i] == 1) {
            count++;               
        }
        num /= 2;
        i++;
    }
    printf("Binary : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d",bits[j]);
    }
    printf("\n");

    return count;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = countSetBits(num);
    printf("Set Bits (1s): %d\n",result);
    return 0;
}