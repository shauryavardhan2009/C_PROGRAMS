#include <stdio.h>

int main()
{
    int n, i, num, search, count = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter the number to find its frequency: ");
    scanf("%d", &search);

    printf("Enter %d integers:\n", n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &num);

        if(num == search)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", search, count);

    return 0;
}