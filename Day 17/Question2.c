//union of two arrays 
#include<stdio.h>
int main(){
int a[20],b[20],c[20],m,n,i,j;
printf("Enter the 1st array size : ");
scanf("%d",&m);
printf("Enter the 1st array elements : ");
for(i=0;i<m;i++)
{scanf("%d",&a[i]);}
printf("Enter the 2nd array size : ");
scanf("%d",&n);
printf("Enter the 2nd array elements : ");
for(i=0;i<n;i++)
{scanf("%d",&b[i]);}
for(i=0;i<m+n;i++)
{if(i<m)
{c[i]=a[i];}
if(i>=m && i<m+n)
{c[i]=b[i-m];}}
printf("Union of given two arrays : ");
for(i=0;i<m+n;i++)
{int Duplicate =0;
for(j=0;j<i;j++)
{if(c[i]==c[j])
{Duplicate = 1;
break;}
}
if(Duplicate==0)
{printf("%d ",c[i]);}

}
return 0;
}