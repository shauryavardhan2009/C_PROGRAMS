#include <stdio.h>
int main()
{
    int age, months, days;

    printf("Enter your age in years: ");
    scanf("%d", &age);

    months = age * 12;
    days = age * 365;

    printf("Age in months = %d\n", months);
    printf("Age in days = %d\n", days);

    return 0;
}