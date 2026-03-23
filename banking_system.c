#include<stdio.h>

int main() {

    int choice;
    float balance = 1000;
    float amount;

    while(1) {

        printf("\n1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                printf("Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f",&amount);
                balance += amount;
                break;

            case 3:
                printf("Enter withdraw amount: ");
                scanf("%f",&amount);
                if(amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient balance\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
