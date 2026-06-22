// Count vowels and consonants
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int q = 1, p = 0, i;
    printf("Enter the character : ");
    gets(str);
    int n = strlen(str);
    for (i = 0; i < n - 1; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            p++;
        }
        else if (str[i] != ' ')
        {
            q++;
        }
    }
    printf("The number of vowel characters : %d\n", p);
    printf("The number of consonant characters : %d\n", q);
    return 0;
}