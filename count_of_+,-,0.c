#include <stdio.h>
int main()
{
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } 
    while (choice == 'y' || choice == 'Y');
    printf("\nPositive numbers = %d", positive);
    printf("\nNegative numbers = %d", negative);
    printf("\nZero numbers = %d", zero);
    return 0;
}
















