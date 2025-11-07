#include <stdio.h>

int getChoice();
void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {
    float balance = 0.0;
    int choice;

    while (1) { 
        printf("\nSelect an option:\n\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        choice = getChoice();

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance += deposit();
                break;

            case 3:
                balance -= withdraw(balance);
                break;

            case 4:
                printf("You have exited the program.\n");
                return 0;

            default:
                printf("\nInvalid choice, please select 1 - 4.\n");
                break;
        }
    }

    return 0;
}

int getChoice() {
    int choice = 0;
    while (choice < 1 || choice > 4) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
    }
    return choice;
}

void checkBalance(float balance) {
    printf("\nYour current balance is: $%.2f\n", balance);
}

float deposit() {
    float amount = 0.0;
    while (amount <= 0) {
        printf("Amount to deposit: ");
        scanf("%f", &amount);
    }
    printf("You have successfully deposited $%.2f.\n", amount);
    return amount;
}

float withdraw(float balance) {
    float amount = 0.0;
    if (balance == 0) {
        printf("You have no money to withdraw!\n");
        return 0.0;
    }

    while (amount <= 0 || amount > balance) {
        printf("Amount to withdraw: ");
        scanf("%f", &amount);
        if (amount > balance)
            printf("Insufficient funds! Your balance is $%.2f\n", balance);
    }

    printf("You have successfully withdrawn $%.2f.\n", amount);
    return amount;
}