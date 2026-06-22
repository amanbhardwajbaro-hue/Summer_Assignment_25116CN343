//Diagonal sum
#include<stdio.h>
int main(){
int a[10][10],m,n,i,j,sum=0;
printf("Enter the size of row : ");
scanf("%d",&m);
printf("Enter the size of column : ");
scanf("%d",&n);
printf("Enter the elements of matrix : ");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);}}
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{if(i==j)
{sum=sum+a[i][j];}
}
}
printf("The sum of diagonal of given matrix : %d",sum);
return 0;
}