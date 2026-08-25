/* Write a C program to take a number as input
   and print its equivalent binary representation */

#include <stdio.h>

int main()
{
    int num, binary[32], i = 0, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Binary equivalent: 0");
        return 0;
    }

    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary equivalent: ");

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    return 0;
}