//print multiplication table of a given number 
#include<stdio.h>
int main(){
    int n,sum=0,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The table of the given number : \n");
    for(i=1;i<=10;i++)
    {
        sum=sum+n;
        printf("%d\n",sum);
    }
    return 0;
}