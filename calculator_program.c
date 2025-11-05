#include <stdio.h>

int main() {

    double num1 = 0.0;
    double num2 = 0.0;
    char operator = '\0';
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
        result = num1 + num2;
        printf("Result: %.3lf", result);
        break;

        case '-':
        result = num1 - num2;
        printf("Result: %.3lf", result);
        break;

        case '*':
        result = num1 * num2;
        printf("Result: %.3lf", result);
        break;

        case '/':
        result = num1 / num2;
        printf("Result: %.3lf\n", result);
        break;

        default:
        printf("Please pick one of the specified available operators.\n");
    }

    return 0;
}