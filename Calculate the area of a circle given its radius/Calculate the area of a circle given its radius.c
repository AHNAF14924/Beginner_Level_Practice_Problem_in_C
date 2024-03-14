#include <stdio.h>

float areaOfCircle(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the circle: %.2f\n", areaOfCircle(radius));
    return 0;
}
