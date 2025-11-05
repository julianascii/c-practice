#include <stdio.h>

int main() {

    printf("Weight Converter Program\n\n");

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1) {
        // convert kilograms to pounds
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("\nYour weight (%.2f kg) in pounds is %.2f.\n", kilograms, pounds);
    } else if(choice == 2) {
        //convert pounds to kilograms
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("\nYour weight (%.2f pounds) in kilograms is %.2f.\n", pounds, kilograms);
    } else {
        printf("You might have entered the choice section in the wrong format. Try again.\n");
    }

    return 0;
}