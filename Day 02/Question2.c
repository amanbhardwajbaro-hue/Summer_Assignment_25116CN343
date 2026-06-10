//Find reverse of a given number
#include<stdio.h>
int main(){
int n,i,rev=0,a;
printf("Enter the number : ");
scanf("%d",&n);
while(n!=0)
{a=n%10;
rev=rev*10+a;
n=n/10;
}
printf("The reverse of the given number is %d",rev);
return 0;
}