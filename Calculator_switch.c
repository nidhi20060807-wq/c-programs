#include<stdio.h>

int main(){

    int num1, num2;
    int operation;

    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    printf("Enter the operation:\n");
    printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n0-Exit\n");

    scanf("%d",&operation);

    switch(operation){

        case 1:
            printf("Addition = %d", num1 + num2);
            break;

        case 2:
            printf("Subtraction = %d", num1 - num2);
            break;

        case 3:
            printf("Multiplication = %d", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Division = %d", num1 / num2);
            else
                printf("Division by zero not allowed");
            break;

        case 0:
            printf("Exiting...");
            break;

        default:
            printf("Invalid operation");
    }

    return 0;
}
