#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "listen";
    char str2[] = "silent";
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
    {
        printf("The strings are not anagrams.\n");
        return 0;
    }
    int freq1[256] = {0};
    int freq2[256] = {0};
    for (int i = 0; i < len1; i++)
    {
        freq1[str1[i]]++;
        freq2[str2[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams.\n");
    return 0;
}
