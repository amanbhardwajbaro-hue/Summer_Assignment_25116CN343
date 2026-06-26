// Compress a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], compressed[100];
    int i, count, ci;
    printf("Enter a string : ");
    gets(str);
    int l = strlen(str);
    ci = 0;
    i = 0;
    while (i < l)
    {
        count = 1;
        while (i + count < l && str[i] == str[i + count])
        {
            count++;
        }
        compressed[ci++] = str[i];
        if (count > 1)
        {
            compressed[ci++] = '0' + count;
        }
        i += count;
    }
    compressed[ci] = '\0';
    printf("Compressed : %s\n", compressed);
    return 0;
}