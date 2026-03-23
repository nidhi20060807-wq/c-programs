#include<stdio.h>

int main(){

    int number;

    printf("Enter the number:\n");
    scanf("%d",&number);

    int copy_num = number;
    int cubic_sum = 0;

    while(number != 0){
        int digit = number % 10;
        int cube = digit * digit * digit;

        cubic_sum += cube;

        number = number / 10;
    }

    if(copy_num == cubic_sum){
        printf("Yes! It is an Armstrong number");
    }
    else{
        printf("Not an Armstrong number");
    }

    return 0;
}
