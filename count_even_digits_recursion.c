#include <stdio.h>

int countEven(int n) {
    if (n == 0)
        return 0;

    int digit = n % 10;

    if (digit % 2 == 0)
        return 1 + countEven(n / 10);
    else
        return countEven(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = countEven(num);

    printf("Even digits: %d", result);
    return 0;
}
