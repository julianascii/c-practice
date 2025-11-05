#include <stdio.h>
#include <string.h>

void happyBirthday(char birthdayCelebrant[], int yearsOld) {
    printf("\nHappy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday dear %s!\n", birthdayCelebrant);
    printf("Happy birthday to you!\n");
    printf("You are %d years old!\n", yearsOld);
}

int main() {

    char name[50] = "";
    int age = 0;

    printf("Whose birthday are we celebrating? ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("How old are they now? ");
    scanf("%d", &age);

    happyBirthday(name, age);

    return 0;
}