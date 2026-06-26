//Find common characters in string
#include<stdio.h>
#include<string.h>
int main(){
char str[50];
int i,j,l,found;
printf("Enter a string : ");
gets(str);
l=strlen(str);
printf("Common characters in string : ");
for(i=0;i<l-1;i++)
{ found=0;
    for(j=i+1;j<l;j++)
{if(str[i]==str[j])
{found=1;
break;}
}
if(found)
{printf("%c",str[i]);}
}
return 0;
}