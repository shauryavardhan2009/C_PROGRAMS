#include <stdio.h>

int main()
{
    int days, years, months, remaining_days;

    printf("Enter total number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    months = days / 30;
    remaining_days = days % 30;

    printf("Years = %d\n", years);
    printf("Months = %d\n", months);
    printf("Days = %d\n", remaining_days);

    return 0;
}