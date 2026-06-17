//Merge two arrays
#include<stdio.h>
int main(){
int a[20],b[20],c[20],m,n,i;
printf("Enter array size of 1st array : ");
scanf("%d",&m);
printf("Enter 1st array elements : ");
for(i=0;i<m;i++)
{scanf("%d",&a[i]);}
printf("Enter the 2nd array size : ");
scanf("%d",&n);
printf("Enter 2nd array elements : ");
for(i=0;i<n;i++)
{scanf("%d",&b[i]);}
printf("After merging : ");
for(i=0;i<m+n;i++)
{if(i<m)
{c[i]=a[i];}
if(i>=m && i<m+n)
{c[i]=b[i-m];}
printf("%d ",c[i]);}
return 0;
}