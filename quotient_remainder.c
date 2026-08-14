#include <stdio.h>

int main()
{
    int num, divisor, quotient = 0, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &num, &divisor);

    remainder = num;

    while (remainder >= divisor)
    {
        remainder = remainder - divisor;
        quotient++;
    }

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);

    return 0;
}