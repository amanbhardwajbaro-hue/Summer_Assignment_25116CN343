// Count words in a sentence
#include <stdio.h>
int main()
{
    char str[50];
    int space = 0, words, i;
    printf("Enter a string : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            space++;
        }
        words = space + 1;
    }
    printf("Number of words in given string : %d", words);
    return 0;
}