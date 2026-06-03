//Find nth term of the fibonacci series
#include<stdio.h>
int main(){
    int a[50];
    int n,i;
    printf("Enter the term of fibonacci series : ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n;i++)
    {a[i]=a[i-1]+a[i-2];}
    printf("The %dth term of the fibonacci series is : %d",n,a[n-1]);
    return 0;
}