//Print Armstrong number in a range
#include<stdio.h>
int main(){
    int n,i,a,t,sum;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("The Armstrong number from 1 to %d : ",n);
    for(i=1;i<=n;i++)
    {t=i;
        sum=0;
        while(t>0)
    {a=t%10;
        sum=sum+a*a*a;
        t=t/10;
    }
    if(sum==i)
    {printf("%d ",i);}
    }
    return 0;
}