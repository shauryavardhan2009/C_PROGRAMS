#include <stdio.h>

int main() {
    float cp, sp, diff, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        diff = sp - cp;
        percent = (diff / cp) * 100;
        printf("Profit Percentage = %.2f%%\n", percent);
    } 
    else if (cp > sp) {
        diff = cp - sp;
        percent = (diff / cp) * 100;
        printf("Loss Percentage = %.2f%%\n", percent);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
