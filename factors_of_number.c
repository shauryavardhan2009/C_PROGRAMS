/* Write a C program to print all factors of a given number */

#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are:\n", num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}