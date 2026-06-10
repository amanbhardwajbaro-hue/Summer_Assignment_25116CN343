//Find x^n without using pow()
#include<stdio.h>
int main(){
int n,i=1,n1,product=1;
printf("Enter the number : ");
scanf("%d",&n);
printf("Enter the power : ");
scanf("%d",&n1);
while(i<=n1)
{product=n*product;
i++;}
printf("The result is : %d",product);
return 0;
}
