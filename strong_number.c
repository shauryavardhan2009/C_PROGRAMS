// write a program to check whether a number is a strong number or not (( A strong number is a positive integer where the sum of the factorials of its individual digits equals the number itself))
#include <stdio.h>

int main() {
    int num, originalNum, remainder, factorial, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    while (num > 0) {
        remainder = num % 10;
        factorial = 1;
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }
    
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }
    
    return 0;
}