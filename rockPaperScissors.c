#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getUserChoice();
int getComputerChoice();

int main() {

    srand(time(NULL));

    printf("\n**** ROCK PAPER SCISSORS LALALALLA ****\n");
    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch(userChoice) {
        case 1:
            printf("You chose ROCK.\n");
            break;
        case 2:
            printf("You chose PAPER.\n");
            break;
        case 3:
            printf("You chose SCISSORS.\n");
            break;
    }

    switch(computerChoice) {
        case 1:
            printf("Computer chose ROCK.\n");
            break;
        case 2:
            printf("Computer chose PAPER.\n");
            break;
        case 3:
            printf("Computer chose SCISSORS.\n");
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}


int getComputerChoice() {
    return (rand() % 3) + 1;
}

int getUserChoice() {
    
    int choice = 0;
    
    while(choice < 1 || choice > 3) {
        printf("Choose an option\n1 - Rock\n2 - Paper\n3 - Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    } 
    return choice;
}

void checkWinner(int userChoice, int computerChoice) {
    if(userChoice == computerChoice) {
        printf("Draw. Twy again. :P\n");
    } else if(userChoice == 1 && computerChoice == 3) {
        printf("You won! YAYYYAYAYAY"); 
    } else if(userChoice == 2 && computerChoice == 1) {
        printf("You won! YAYYYAYAYAY");
    } else if(userChoice == 3 && computerChoice == 2) {
        printf("You won! YAYYYAYAYAY");
    } else {
        printf("You lost :c Try again.");
    }
}