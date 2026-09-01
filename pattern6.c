/* 
 Write a program to print the following pattern:
*******
 *****
  ***
   *

 */
#include <stdio.h>

int main()
{
    int i, j, space = 0;

    for (i = 7; i >= 1; i -= 2)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
        space++;
    }

    return 0;
}