#include <stdio.h>
#include <stdbool.h>


int main() {

// start with integers
    int age = 97;
    printf("You are %d years old.", age);

    int year = 2030;
    printf("\nThe year is %d.", year);
    
    int quantity = 1;
    printf("\nYou have ordered %d item(s).", quantity);

// floats
    float gpa = 4.5;
    printf("\n\nYour gpa is %.2f.", gpa);

// only able to reach 6 digits after the decimal if there isn't an f magnitude
// .2 in %.2f could be changed according to the desired number of decimal places
    float price = 19.99;
    float temperature = -9.9;

// doubles can store 15-16 digits after the decimal
    double pi = 3.14156265358979;

// "lf" means "long float", now used for double data type
// if lf magnitude is unspecified, returns value with only 6 digits after decimal
    printf("\nThe price is Php %.2f.", price);    
    printf("\nThe temperature is %.1f F.", temperature);
    printf("\n\nThe value of pi is %lf.", pi);
    printf("\nThe value of pi is %.14lf.", pi);

// chars
    char grade = 'A';
    // keep value single-quoted
    char symbol = '!';

    printf("\nYour grade is %c.", grade);
    printf("\nTry out this symbol: \"%c\"", symbol);


// STRING
    char name[] = "juliana sophia";
    char food[] = "mango";
// "[]" is an array, it can store more than one value
    printf("\n\nHello, %s.", name);
    printf("\nMy favourite food is %s.", food);


// booleans
/*
you must add the below code at the top:
#include <stdbool.h>
*/

    bool isOnline = true;
    // could be "bool isOnline = 1;"; 1 also means true
    printf("\n\n%d", isOnline);

// contruct simple if-else statement

if(isOnline) {
    printf("\nYou are online.");
} else {
    printf("\nYou are offline.");
}

    bool isStudent = 1;
    printf("\n%d", isStudent);
    if(isStudent) {
        printf("\nYou are a student.");
    } else {
        printf("\nYou are not a student.");
    }

    bool forSale = 0;
    printf("\n%d", forSale);
    if(forSale) {
        printf("\nThe item is for sale.");
    } else {
        printf("\nThe item is not for sale.");
    }

    return 0;

}