#include <stdio.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    int len1 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    int len2 = 0;
    while (str2[len2] != '\0')
    {
        len2++;
    }
    char result[len1 + len2 + 1];
    int i, j;
    for (i = 0; i < len1; i++)
    {
        result[i] = str1[i];
    }
    for (j = 0; j < len2; j++)
    {
        result[i + j] = str2[j];
    }
    result[i + j] = '\0';
    printf("Concatenated string: %s\n", result);
    return 0;
}
