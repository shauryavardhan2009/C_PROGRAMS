#include <stdio.h>
int main() 
{
    int number, middle_digit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);
    middle_digit = (number / 10) % 10; 
    printf("The middle digit is: %d\n", middle_digit);
    return 0;
}