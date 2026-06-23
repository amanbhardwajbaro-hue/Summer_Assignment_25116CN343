// Character frequency
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int freq[256] = {0};

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n')
            freq[(int)str[i]]++;
    }
    printf("\nCharacter Frequencies :\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    return 0;
}
