#include <stdio.h>
#include <string.h>

int userChoice();
void checkBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    printf("Here are your options:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");

    double balance = 0.0;

    while(1) {
        switch(userChoice()) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance+=deposit();
                printf("Your current balance is now $%.2lf.\n", balance);
                break;
            case 3:
                balance-=withdraw(balance);
                printf("Your current balance is now $%.2lf.\n", balance);
                break;
            case 4:
                printf("You have exited the program.\n");
                return 0;
        }
    }

    return 0;
}

int userChoice() {
    int choice = 0;
    while(choice > 4 || choice < 1) {
        printf("\nHow would you like to proceed? ");
        scanf("%d", &choice);
        printf("Great!\n");
        return choice;
    }
}

void checkBalance(double balance) {
    printf("Your current balance is $%.2f.\n", balance);
}

double deposit() {
    double amount = 0.0;
    while(amount == 0 || amount < 0) {
        printf("Enter amount to deposit: ");
        scanf("%lf", &amount);
        printf("You have successfully deposited $%.2lf.\n", amount);
        return amount;
    }
}

double withdraw(double balance) {
    double amount = 0.0;
    while(amount > balance || amount == 0) {
        printf("Enter amount to withdraw: ");
        scanf("%lf", &amount);
        printf("You have successfully withdrawn $%.2lf.\n", amount);
        return amount;
    }
}