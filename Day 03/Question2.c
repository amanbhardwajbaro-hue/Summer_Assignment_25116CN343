//Print prime numbers in a range 
#include <stdio.h>

int main() {
    int n,i,j,prime=0;

    printf("Enter the last number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
     prime = 1; 

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
               }
        if (prime == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}