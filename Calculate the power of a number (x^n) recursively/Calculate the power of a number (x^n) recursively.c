#include <stdio.h>

double power(double x, int n) {
    if (n == 0)
        return 1;
    else if (n > 0)
        return x * power(x, n - 1);
    else
        return (1 / x) * power(x, n + 1);
}

int main() {
    double x;
    int n;
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);
    printf("%.2lf raised to the power of %d is %.2lf\n", x, n, power(x, n));
    return 0;
}
