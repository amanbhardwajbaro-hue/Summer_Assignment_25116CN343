//count digits of a given number 
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n==0)
    {count=1;}
    else
    {while(n!=0)
      {n=n/10;
      count++; }
    }
    printf("The digits of the given number : %d",count);
    return 0;
}