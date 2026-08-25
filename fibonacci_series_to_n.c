/* C Program to Generate Fibonacci Series up to n Terms */

#include <stdio.h>

int main()
{
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d ", first);
        }
        else if (i == 2)
        {
            printf("%d ", second);
        }
        else
        {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    return 0;
}