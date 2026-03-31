#include<stdio.h>
#include<stdlib.h>

void modify(int *p, int n) {
    for(int i = 0; i < n; i++) {
        *(p + i) = *(p + i) + 1;
    }
}

void create(int **ptr, int n) {
    *ptr = (int*)malloc(n * sizeof(int));  // ✅ dynamic allocation

    for(int i = 0; i < n; i++) {
        (*ptr)[i] = i * 10;
    }
}

int main() {
    int *p;
    int n = 5;

    create(&p, n);

    modify(p, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }

    free(p);  // ✅ avoid memory leak

    return 0;
}
