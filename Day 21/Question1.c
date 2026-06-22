// Find stringlength without using string
#include <stdio.h>
int main()
{
    char str[20];
    int i, len = 0;
    printf("Enter the name : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length : %d\n", len);
    return 0;
}