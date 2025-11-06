#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void greeting(char bdaygal[], int num) {
    return printf("\nHappy birthday, %s!\nYou are now %d years old!\n", bdaygal, num);
} 

bool ageCheck(int num) {
    return num >= 18;
}

int main() {

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    greeting(name, age);

    if(ageCheck(age)) {
        printf("Keep enjoying life as an adult / senior citizen!\n");
    } else {
        printf("Keep enjoying life as a kid!\n");
    }

    return 0;
}