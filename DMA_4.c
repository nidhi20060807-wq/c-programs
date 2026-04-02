#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4;
    int *arr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int *ptr = arr;

    for(int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    ptr = (int*)realloc(ptr, 6 * sizeof(int));

    for(int i = n; i < 6; i++) {
        ptr[i] = i * 2;
    }

    for(int i = 0; i < 6; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
