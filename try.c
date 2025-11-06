#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    srand(time(NULL));
    int guess = 0;
    int max = 10;
    int min = 1;

    int randomNumber = (rand() % (max - min + 1)) + min;

    printf("\n**** WELCOME TO THE NUMBER GUESSING GAME! ****\n\n");

    while(randomNumber != guess) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if(guess > randomNumber) {
            printf("A little lower!\n");
        } else if(guess < randomNumber) {
            printf("Just a tad bit higher!\n");
        } else if(randomNumber == guess) {
            printf("You got it! Yay! Congratulations!!! WOOOOHOOOO\n");
        } else {
            printf("Enter a different value!");
        }
    }

    return 0;
}