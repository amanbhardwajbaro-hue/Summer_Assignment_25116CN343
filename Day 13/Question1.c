//Input and display array
#include<stdio.h>
int main(){
    int a[20],i,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
  printf("Enter the array elements : ");
  for(i=0;i<n;i++)
  {scanf("%d",&a[i]);}
  printf("The given array elements  : ");
  for(i=0;i<n;i++)
  {printf("%d ",a[i]);}
  return 0;
}