//Transpose matrix
#include<stdio.h>
int main(){
int a[10][10],b[10][10],m,n,i,j;
printf("Enter the size of row : ");
scanf("%d",&m);
printf("Enter the size of column : ");
scanf("%d",&n);
printf("Enter the matrix elements : ");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);}}
printf("Transpose of given matrix : \n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{b[i][j]=a[j][i];
printf("%d ",b[i][j]);}
printf("\n");
}
return 0;
}