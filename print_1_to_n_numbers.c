#include <stdio.h>
int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than zero.\n");
        return 1; 
    }

    printf("Numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}