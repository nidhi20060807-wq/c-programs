#include<stdio.h>

int countDigits(int n);

int main(){
    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    int result = countDigits(num);
    printf("Number of digits = %d", result);

    return 0;
}

int countDigits(int n){
    if(n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}
