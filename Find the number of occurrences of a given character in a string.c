#include <stdio.h>

int main()
{
    char str[] = "hello world";
    char ch = 'o';
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("Number of occurrences of %c: %d\n", ch, count);
    return 0;
}
