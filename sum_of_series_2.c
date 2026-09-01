/* Write a C program to find the sum of the series:
   2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
*/

#include <stdio.h>

int main()
{
    int n, i;
    int numerator = 2, denominator = 3;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + (float)numerator / denominator;

        numerator = numerator + 2;      // 2, 4, 6, 8, ...
        denominator = denominator + 4;  // 3, 7, 11, 15, ...
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}