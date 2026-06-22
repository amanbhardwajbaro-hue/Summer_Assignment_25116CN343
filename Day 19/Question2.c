//subtract matrices
#include<stdio.h>
int main(){
int a[10][10],b[10][10],c[10][10],m,n,i,j;
printf("Enter the size of row : ");
scanf("%d",&m);
printf("Enter the size of column : ");
scanf("%d",&n);
printf("Enter the 1st matrix elements : ");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);}}
printf("Enter the 2nd matrix elements : ");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("%d",&b[i][j]);}}
printf("Subtraction of given two matrices : \n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{c[i][j]=a[i][j]-b[i][j];
    printf("%d ",c[i][j]);}
printf("\n");}
return 0;
}