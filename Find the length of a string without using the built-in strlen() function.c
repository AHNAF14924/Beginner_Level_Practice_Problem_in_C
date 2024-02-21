#include <stdio.h>

int main()
{
    char str[] = "hello";
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    printf("Length of the string is: %d\n", length);
    return 0;
}
