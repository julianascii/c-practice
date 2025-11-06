#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    srand(time(NULL));
    int guess = 0;
    int max = 100;
    int min = 1;
    int tries = 0;

    int randomNumber = (rand() % (max - min + 1)) + min;

    printf("\n**** WELCOME TO THE NUMBER GUESSING GAME! ****\n\n");

    while(randomNumber != guess) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if(guess > randomNumber) {
            printf("A little lower!\n");
        } else if(guess < randomNumber) {
            printf("Just a tad bit higher!\n");
        } else if(randomNumber == guess) {
            printf("You got it! Yay! Congratulations!!! WOOOOHOOOO\n");
            printf("It took you %d tries!\n\n", tries);
        } else {
            printf("Enter a different value!");
        }
    }

    return 0;
}