//Find first non repeating character
#include <stdio.h>
int main()
{
    char str[100];
    int freq[256] = {0};
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            freq[(unsigned char)str[i]]++;
        }
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n' &&
            freq[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character is: %c\n", str[i]);
            return 0;
        }
    }
    printf("No non-repeating character found.\n");
    return 0;
}