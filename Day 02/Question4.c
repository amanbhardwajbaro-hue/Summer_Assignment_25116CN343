//check given number is palindrome or not
#include<stdio.h>
int main(){
    int n,rev=0,a,t;
    printf("Enter the number : ");
    scanf("%d",&n);
    n= t;
    while(n>0){
        a=n%10;
        rev=10*rev+a;
        n=n/10;
    }
    if(rev==t)
    {printf("Given number is palindrome");} 
    else
    {printf("Given number is not plaindrome");}
    return 0;
    }