#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;
    int **q = &p;

    for(int i = 0; i < 3; i++) {
        printf("%d ", *(*q + i));
    }

    return 0;
}
