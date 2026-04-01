#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3};
    int *p = arr;
    int **q = &p;

    printf("%d\n", **q);       // 1
    printf("%d\n", *(*q + 1)); // 2

    return 0;
}
