#include<stdio.h>

int sum_of_digits(int);

int main() {
    int num;

    printf("Enter the number:\n");
    scanf("%d", &num);

    int res = sum_of_digits(num);

    printf("Sum of digits: %d", res);

    return 0;
}

int sum_of_digits(int n) {
    if(n == 0) {
        return 0;
    }

    return (n % 10) + sum_of_digits(n / 10);
}
