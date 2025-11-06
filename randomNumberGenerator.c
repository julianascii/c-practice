#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int min = 1;
    int max = 10;
    int number = 0;

    srand(time(NULL));
    int randomNumber = (rand() % (max - min + 1)) + min; 

    printf("Welcome to the Number Guessing Game!\n");
    
    while(number != randomNumber) {
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number > randomNumber) {
            printf("A little lower! Try again.\n");
        } else if(number < randomNumber){
            printf("Just a tad bit higher, hehe.\n");
        } else {
            printf("Congratulations! You got it!\n");
        }
    }

    return 0;
}