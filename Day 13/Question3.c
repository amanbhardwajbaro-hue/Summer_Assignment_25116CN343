//Find largest and smallest element in an array
#include<stdio.h>
int main(){
    int a[20],n,i,max,min;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {if(max<a[i])
       {max=a[i];}
    }
    printf("The largest element in the array : %d\n",max);
    for(i=1;i<n;i++)
    {if(min>a[i])
        min=a[i];
    }
    printf("The smallest element in the array : %d ",min);
    return 0;
}