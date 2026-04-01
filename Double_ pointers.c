#include <stdio.h>

int main() {
    int a = 10;

    int *p = &a;      // pointer to int
    int **q = &p;     // pointer to pointer

    printf("Value of a = %d\n", a);
    printf("Using p = %d\n", *p);
    printf("Using q = %d\n", **q);

    return 0;
}
