#include<stdio.h>

void print_fibonacci(int);

int main() {
    int n;

    printf("Please enter the n value:\n");
    scanf("%d",&n);

    print_fibonacci(n);

    return 0;
}

void print_fibonacci(int N) {

    int first = 0, second = 1, result;

    printf("%d %d ", first, second);

    for(int i = 0; i < N-2; i++) {
        result = first + second;
        printf("%d ", result);

        first = second;
        second = result;
    }
}
