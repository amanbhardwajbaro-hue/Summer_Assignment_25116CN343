// Remove spaces from string
#include <stdio.h>
int main()
{
    char str[50], res[50];
    int i, j = 0;
    printf("Enter a string : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            res[j] = str[i];
            j++;
        }
    }
    res[j] = '\0';
    printf("After removing space : ");
    puts(res);
    return 0;
}