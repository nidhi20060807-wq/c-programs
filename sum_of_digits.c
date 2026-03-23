#include<stdio.h>

int main() {

    int N, sum = 0;

    printf("Enter the number:\n");
    scanf("%d", &N);

    while(N != 0) {
        int rem = N % 10;
        sum = sum + rem;
        N = N / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
