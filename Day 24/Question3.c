// Find longest word
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[50], longest[50];
    int i, j, maxLen;
    printf("Enter a string : ");
    gets(str);
    int l = strlen(str);
    i = 0;
    j = 0;
    maxLen = 0;
    longest[0] = '\0';
    while (i <= l)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';
            if (j > maxLen)
            {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }
    printf("Longest word : %s\n", longest);
    printf("Length : %d\n", maxLen);
    return 0;
}