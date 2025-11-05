#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int age = 17;
    float price = 99.99;
    double pi = 3.141592653589793;
    char currency = '$';
    char name[] = "juliana sophia";

    printf("\n%d", age);
    printf("\n%.2f", price);
    printf("\n%.15lf", pi);
    printf("\n%c", currency);
    printf("\n%s\n", name);

// width
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);

// flush-left values
    printf("\n%-3d\n", num1);
    printf("%-3d\n", num2);
    printf("%-3d\n", num3);

// add zeroes before each number
    printf("\n%03d\n", num1);
    printf("%03d\n", num2);
    printf("%03d\n", num3);

//  specify sign
    int num4 = -100;
    printf("\n%+3d\n", num1);
    printf("%+3d\n", num2);
    printf("%+3d\n", num4);
    
    return 0;
 
}