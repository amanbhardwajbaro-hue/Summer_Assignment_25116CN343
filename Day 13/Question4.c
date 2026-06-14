//Count even and odd elements 
#include<stdio.h>
int main(){
    int a[20],n,i,even=0,odd=0;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {if (a[i]%2==0)
    {even++;}
    else
    {odd++;}
    }
    printf("The number of even elements in the array : %d\n",even);
    printf("The number of odd elements in the array : %d",odd);
return 0;
}