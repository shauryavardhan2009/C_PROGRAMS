/*Write a program to input a character and check whether it is a vowel or consonant*/
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("It is a vowel.");
    }
    else
    {
        printf("It is a consonant.");
    }

    return 0;
}