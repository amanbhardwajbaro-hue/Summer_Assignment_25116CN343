//Check given number is Armstrong or not
#include<stdio.h>
int main(){
int n,a,sum=0,t;
printf("Enter the number : ");
scanf("%d",&n);
n=t;
while(n>0)
{a=n%10;
 sum=sum+a*a*a;
n=n/10;  }
if(t==sum)
{printf("Given number is Armstrong number ");}
else
{printf("Given number is not Armstrong number");}
return 0;
}