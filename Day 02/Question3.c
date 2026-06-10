//Find product of digits of a guiven number 
#include<stdio.h>
int main(){
 int n,i,a,product=1;
   printf("Enter the number : ");
   if(n<0)
   {n=-n;}
   scanf("%d",&n);
   while(n!=0)
   {a=n%10;
  product=product*a;
n=n/10;}
printf("The product of the given number : %d",product);
return 0;}

