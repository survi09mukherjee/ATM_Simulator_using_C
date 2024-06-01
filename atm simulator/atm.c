#include <stdio.h>

float balance = 1000; // Initial balance

void displayMenu() {
    printf("\nATM Simulator\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
}

void deposit(float amount) {
    balance += amount;
    printf("Deposit successful. Current balance: $%.2f\n", balance);
}

void withdraw(float amount) {
    if (amount > balance) {
        printf("Insufficient funds. Current balance: $%.2f\n", balance);
    } else {
        balance -= amount;
        printf("Withdrawal successful. Current balance: $%.2f\n", balance);
    }
}

void checkBalance() {
    printf("Current balance: $%.2f\n", balance);
}

int main() {
    int choice;
    float amount;
    
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Exiting program. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}