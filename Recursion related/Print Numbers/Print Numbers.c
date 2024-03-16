#include <stdio.h>

void printNumbers(int n)
{
    if (n > 0)
    {
        printNumbers(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int num;
    printf("Enter a number to print numbers from 1 to that number: ");
    scanf("%d", &num);
    printf("Numbers from 1 to %d are: ", num);
    printNumbers(num);
    return 0;
}
