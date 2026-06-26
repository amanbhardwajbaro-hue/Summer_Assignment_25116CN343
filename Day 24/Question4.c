// Remove duplicate characters
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], result[100];
    int freq[256] = {0};
    int i, j;
    printf("Enter a string : ");
    gets(str);
    int l = strlen(str);
    j = 0;
    for (i = 0; i < l; i++)
    {
        if (freq[(int)str[i]] == 0)
        {
            result[j++] = str[i];
            freq[(int)str[i]] = 1;
        }
    }
    result[j] = '\0';
    printf("After removing duplicates : %s\n", result);
    return 0;
}