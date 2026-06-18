//Binary search
#include<stdio.h>
int main(){
int a[20],n,i,mid,s,l,h;
printf("Enter the array size : ");
scanf("%d",&n);
printf("Enter the array elements : ");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("Enter the searching element : ");
scanf("%d",&s);

l=0,h=n-1;
while(l<=h)
{
mid=(l+h)/2;
if(a[mid]==s)
{printf("The element is located at the position : %d",mid+1);
break;}
else if(a[mid]>s)
{h=mid-1;}
else
{l=mid+1;}
}
if(l>h)
{printf("Element not found");}
return 0;
}