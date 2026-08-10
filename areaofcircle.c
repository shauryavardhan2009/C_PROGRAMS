#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
