#include <stdio.h>
#include <string.h>

int main() {

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

// in the case of no user input
    if(strlen(name) <= 0) {
        printf("Please input your name properly.\n");
    } else {
        printf("Your name is %s.\n", name);
    }

    return 0;
}