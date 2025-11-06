#include <stdio.h>

double cube(double num) {
    return num * num * num;
}

double square(double num) {
    return num * num;
}

int main() {

    double number = 0.0;
    double number_squared = 0.0;
    double number_cubed = 0.0;

    printf("\nEnter a number: ");
    scanf("%lf", &number);

    number_squared = square(number);
    number_cubed = cube(number);

    printf("Your given number squared is %.2lf.\n", number_squared);
    printf("Your given number cubed is %.2lf.\n", number_cubed);

    return 0;
}