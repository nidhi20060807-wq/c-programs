#include<stdio.h>

int GCD(int, int);

int main(){
    int num1, num2, result;

    printf("Enter first number:\n");
    scanf("%d", &num1);

    printf("Enter second number:\n");
    scanf("%d", &num2);

    result = GCD(num1, num2);   // store result
    printf("GCD = %d", result); // print result

    return 0;
}

int GCD(int x, int y){
    if(y == 0){
        return x;
    }
    else{
        return GCD(y, x % y);
    }
}
