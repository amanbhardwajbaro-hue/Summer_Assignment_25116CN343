// Palindrome string
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter characters : ");
    gets(str1);
    strcpy(str2, str1);
    strrev(str2);
    int p = strcmp(str2, str1);
    if (p == 0)
    {
        printf("Given string is palindrome");
    }
    else
    {
        printf("Given strring is not palindrome");
    }
    return 0;
}