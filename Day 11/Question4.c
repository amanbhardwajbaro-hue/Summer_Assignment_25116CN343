//Function to find factorial
#include<stdio.h>
void factorial(int n)
{int product=1;
    while(n>1)
    {product=product*n;
    n--;}
    printf("The factorial of given number : %d",product);
}
int main(){
    int n1;
    printf("Enter the number : ");
    scanf("%d",&n1);
    factorial(n1);
   return 0;
}