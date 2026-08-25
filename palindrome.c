/* Write a C program to check if a number is a palindrome */

#include <stdio.h>

int main()
{
    int num, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
        printf("%d is a palindrome number.", original);
    else
        printf("%d is not a palindrome number.", original);

    return 0;
}