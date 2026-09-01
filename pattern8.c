/* 
 Write a program to print the following pattern:

1234567
 12345
  123
   1  
 */

 #include <stdio.h>

int main()
{
    int i, j, space;

    for(i = 7; i >= 1; i -= 2)
    {
        // Print leading spaces
        for(space = 1; space <= (7 - i) / 2; space++)
        {
            printf(" ");
        }

        // Print numbers
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}