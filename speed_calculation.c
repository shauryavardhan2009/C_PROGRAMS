#include <stdio.h>

int main()
{
    float distance, time, speed;

    printf("Enter distance: ");
    scanf("%f", &distance);

    printf("Enter time: ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Speed = %.2f", speed);

    return 0;
}