#include <stdio.h>

int main()
{
    char grade;

    printf("Enter Grade (A, B, C, D, F): ");
    scanf("%c", &grade);

    switch (grade)
    {
        case 'A':
            printf("Outstanding");
            break;

        case 'B':
            printf("Excellent");
            break;

        case 'C':
            printf("Average");
            break;

        case 'D':
            printf("Need Improvement");
            break;

        case 'F':
            printf("Fail");
            break;

        default:
            printf("Invalid Grade");
    }

    return 0;
}