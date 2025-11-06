#include <stdio.h>

double numCheck(double num1, double num2) {
    if(num1 > num2) {
        return printf("The greater number is %.2lf.\n", num1);
    } else if(num1 < num2) {
        return printf("The greater number is %.2lf.\n", num2);
    } else {
        return printf("Both numbers you inputted have the same value.\n");
    }
}

int main() {

    double number1 = 0.0;
    double number2 = 0.0;

    printf("Enter first number: ");
    scanf("%lf", &number1);
    printf("Enter second number: ");
    scanf("%lf", &number2);

    numCheck(number1, number2);

    return 0;
}