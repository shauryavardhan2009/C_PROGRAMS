#include <stdio.h>

int main() 
{
    int days;
    int fine = 0;

   
    printf("Enter the number of days late: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        printf("Invalid input! Please enter a non-negative number.\n");
        return 1;
    }

    if (days == 0) {
        printf("No fine. \n");
    } 
    else if (days <= 5) {
       
        fine = days * 2;
        printf("Total Library Fine: ₹%d\n", fine);
    } 
    else if (days <= 10) {
        
        fine = 10 + (days - 5) * 4;
        printf("Total Library Fine: ₹%d\n", fine);
    } 
    else if (days <= 30) {
        
        fine = 30 + (days - 10) * 6;
        printf("Total Library Fine: ₹%d\n", fine);
    } 
    else {
        
        printf(" Membership Cancelled!\n");
    }

    return 0;
}

