//sum and average of array
#include<stdio.h>
int main(){
int n,sum=0,i;
int a[20];
float avg;
printf("Enter the array size : ");
scanf("%d",&n);
printf("Enter the array elements : ");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{sum=sum+a[i];}
 avg=(float)sum/n;
printf("The sum of the array : %d\n",sum);
printf("The average of the array : %f",avg);
return 0;
}