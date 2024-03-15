#include <stdio.h>

void concatStrings(char *str1, char *str2)
{
    int i, j;
    // Move to the end of str1
    for (i = 0; str1[i] != '\0'; i++)
        ;
    // Concatenate str2 to str1
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i++] = str2[j];
    }
    // Null terminate the concatenated string
    str1[i] = '\0';
}

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    concatStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
