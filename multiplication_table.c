#include <stdio.h>

int main()
{
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\nMultiplication Table of %d\n\n", number);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}