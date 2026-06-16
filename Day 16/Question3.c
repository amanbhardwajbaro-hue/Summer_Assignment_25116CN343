//Find pair with given sum
#include <stdio.h>
int main() {
    int n,a[20],target;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the array element : ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the target sum :  ");
    scanf("%d", &target);
    int found = 0;
    printf("Pairs with sum %d:\n", target);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                printf("(%d,%d)\n",a[i],a[j]);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("No pair found!\n");
    }
    return 0;
}