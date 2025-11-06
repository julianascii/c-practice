#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int num) {
    if(num >= 18) {
        return true;
    } else {
        return false;
    }
}


int main() {

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(ageCheck(age)) {
        printf("You are an adult.\n");
    } else {
        printf("You are a kid.\n");
    }

    return 0;
}