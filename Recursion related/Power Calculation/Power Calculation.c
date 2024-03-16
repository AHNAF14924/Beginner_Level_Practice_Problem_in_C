#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main()
{
    int base, exponent;
    printf("Enter base and exponent separated by space: ");
    scanf("%d %d", &base, &exponent);
    printf("%d raised to the power %d is %d\n", base, exponent, power(base, exponent));
    return 0;
}
