#include <stdio.h>

int main() {
    int year, y, totalDays, day;

    printf("Enter a year: ");
    scanf("%d", &year);
    y = year - 1;
    totalDays = y * 365 + y / 4 - y / 100 + y / 400;
    day = totalDays % 7;

    switch (day) {
        case 0: printf("1st January %d is Monday\n", year); break;
        case 1: printf("1st January %d is Tuesday\n", year); break;
        case 2: printf("1st January %d is Wednesday\n", year); break;
        case 3: printf("1st January %d is Thursday\n", year); break;
        case 4: printf("1st January %d is Friday\n", year); break;
        case 5: printf("1st January %d is Saturday\n", year); break;
        case 6: printf("1st January %d is Sunday\n", year); break;
    }

    return 0;
}