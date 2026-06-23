// Find maximum occuring character
#include <stdio.h>
int main()
{
    char str[100];
    int freq[256] = {0};
    char maxChar;
    int max = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
            freq[(int)str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && freq[(int)str[i]] > max)
        {
            max = freq[(int)str[i]];
            maxChar = str[i];
        }
    }
    printf("Maximum occurring character is '%c' and it occurs %d times.", maxChar, max);
    return 0;
}