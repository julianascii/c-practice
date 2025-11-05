#include <stdio.h>
#include <stdbool.h>

int main() {

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You are an adult.\n");
        if(age >= 65) {
            printf("You are a senior citizen.\n");
        }
    } else if(age < 0) {
        printf("Ha. Ha. Ha.\n");
    } else {
        printf("You are not an adult.\n");
    }
    
    return 0;

}