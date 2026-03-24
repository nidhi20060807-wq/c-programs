#include <stdio.h>

int main(){

    int number;
    int rev_num = 0;

    printf("Enter the number:\n");
    scanf("%d",&number);

    int copy_num = number;

    while(number != 0){
        int rem = number % 10;
        rev_num = rev_num * 10 + rem;
        number = number / 10;
    }

    if(copy_num == rev_num){
        printf("Palindrome number\n");
    }
    else{
        printf("Not a palindrome number\n");
    }

    return 0;
}
