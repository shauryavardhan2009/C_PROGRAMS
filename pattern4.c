/* 
 Write a program to print the following pattern:

   *
  ***
 *****
*******
 */
#include <stdio.h>

int main()
{
    int i, j, space;

    for(i = 1; i <= 4; i++)
    {
        // Print leading spaces
        for(space = 1; space <= 4 - i; space++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

 