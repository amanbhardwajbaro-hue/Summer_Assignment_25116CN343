//sum of digits of a given number 
#include<stdio.h>
int main(){
    int n,i,a,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<0)
    {n=-n;}
    while(n!=0)
    {a=n%10;
    sum=sum+a;
n=n/10;
    }
   printf("The sum of digits of the given number is %d",sum);
   return 0;
}