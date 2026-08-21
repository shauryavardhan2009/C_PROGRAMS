#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("%d is a multiple of both 3 and 7.\n", num);
    }
    else
    {
        printf("%d is not a multiple of both 3 and 7.\n", num);
    }

    return 0;
}
