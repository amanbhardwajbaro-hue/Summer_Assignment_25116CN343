// Rotation of string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], t;
    int l, i;
    printf("Enter a string : ");
    gets(str);
    l = strlen(str);
    t = str[0];
    for (i = 0; i < l - 1; i++)
    {
        str[i] = str[i + 1];
    }
    str[l - 1] = t;
    puts(str);
    return 0;
}