#include <stdio.h>

int main()
{
    int start = 2, end = 30;
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++)
    {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
