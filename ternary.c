#include <stdio.h>
#include <stdbool.h>

int main() {

    // ternary operator ? = shorthand for if-else statements
    // (condition) ? value_if_true : value_if_false;
    int x = 5;
    int y = 6;
    int biggerNumber = (x > y) ? x : y;
    printf("%d\n", biggerNumber);

    bool isOnline = true;
    printf("%s\n", (isOnline) ? "Online" : "Offline");

    int number = 9;
    printf("The number %d is %s.", number, (number % 2 == 0) ? "even" : "odd");

    return 0;
}