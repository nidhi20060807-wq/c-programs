#include <stdio.h>

int countOdd(int n) {
    if (n == 0)
        return 0;

    int digit = n % 10;

    if (digit % 2 != 0)
        return 1 + countOdd(n / 10);
    else
        return countOdd(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = countOdd(num);

    printf("Odd digits: %d", result);
    return 0;
}
