// given number is prime or not
#include<stdio.h>
int main(){
    int n,i,prime=0;
printf("Enter the number : ");
scanf("%d",&n);
if(n==0 || n==1)
{prime=0;}
for(i=2;i<n;i++)
{if(n%i==0)
{prime=1;
break;}
     }
if(prime==1)
{printf("Given number is not prime");}
else
{printf("Given number is prime");}
return 0;
}