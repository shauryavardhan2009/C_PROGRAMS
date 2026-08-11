#include <stdio.h>

int main()
{
    char house[50], street[50], city[50], state[50];

    printf("Enter house number: ");
    fgets(house, sizeof(house), stdin);

    printf("Enter street: ");
    fgets(street, sizeof(street), stdin);

    printf("Enter city: ");
    fgets(city, sizeof(city), stdin);

    printf("Enter state: ");
    fgets(state, sizeof(state), stdin);

    printf("\nYour Address is:\n");
    printf("%s", house);
    printf("%s", street);
    printf("%s", city);
    printf("%s", state);

    return 0;
}