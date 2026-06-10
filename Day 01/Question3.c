//Factorial of a given number 
#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of the given number : %d",fact);
    return 0;
}